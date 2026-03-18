/*
 * XREFs of SiGetBiosSystemDisk @ 0x14072AB78
 * Callers:
 *     SiGetBiosSystemPartition @ 0x14072A838 (SiGetBiosSystemPartition.c)
 *     SiGetSystemDisk @ 0x14072AAA0 (SiGetSystemDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _snwscanf_s @ 0x1401A55B0 (_snwscanf_s.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQuerySymbolicLinkObject @ 0x1401C2BD0 (ZwQuerySymbolicLinkObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SiIsWinPEBoot @ 0x1406D3238 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x1406D3448 (SiGetBootDeviceNameFromRegistry.c)
 *     SiTranslateSymbolicLink @ 0x1406D3750 (SiTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x14072ACBC (SiOpenArcNameObject.c)
 *     SiIssueSynchronousIoctl @ 0x140932D08 (SiIssueSynchronousIoctl.c)
 */

__int64 __fastcall SiGetBiosSystemDisk(wchar_t **a1)
{
  wchar_t *v2; // rdi
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // r8
  int v8; // r9d
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  bool v17; // zf
  ULONG ReturnedLength; // [rsp+30h] [rbp-39h] BYREF
  HANDLE LinkHandle; // [rsp+38h] [rbp-31h]
  int v20; // [rsp+40h] [rbp-29h] BYREF
  int v21; // [rsp+44h] [rbp-25h] BYREF
  int v22; // [rsp+48h] [rbp-21h] BYREF
  wchar_t *Src; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v25[2]; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v26[10]; // [rsp+78h] [rbp+Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  LinkHandle = 0LL;
  v2 = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(v25, 0, 12);
  if ( !SiIsWinPEBoot(v4, v3, v5, v6) )
    goto LABEL_2;
  if ( (int)SiGetBootDeviceNameFromRegistry((int)L"FirmwareBootDevice", &Src, v7, v8) < 0 )
    goto LABEL_2;
  v13 = Src;
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  if ( snwscanf_s(Src, v14 + 1, L"multi(%d)disk(%d)rdisk(%d)", &v20, &v21, &v22) != 3
    || v20
    || v21
    || v22
    || SiTranslateSymbolicLink(L"\\ArcName\\multi(0)disk(0)rdisk(0)", &Src) < 0 )
  {
    goto LABEL_2;
  }
  ExFreePoolWithTag(v13, 0);
  memset(v26, 0, sizeof(v26));
  memset(v25, 0, 12);
  v16 = SiIssueSynchronousIoctl(Src, v15, v25);
  v17 = v16 >= 0 ? v26[7] == 7 : v16 == -1073741766;
  if ( !v17 || (v9 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(1)"), v9 == -1073740718) )
LABEL_2:
    v9 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(0)");
  if ( v9 >= 0 )
  {
    ReturnedLength = 0;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v10 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, &ReturnedLength);
    v9 = v10;
    if ( v10 == -1073741789 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ReturnedLength + 2LL, 0x4B505953u);
      v2 = PoolWithTag;
      if ( PoolWithTag )
      {
        DestinationString.Buffer = PoolWithTag;
        DestinationString.MaximumLength = ReturnedLength;
        v9 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
        if ( v9 >= 0 )
        {
          v2[(unsigned __int64)DestinationString.Length >> 1] = 0;
          *a1 = v2;
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
    else if ( v10 >= 0 )
    {
      v9 = -1073741823;
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v9 < 0 && v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v9;
}
