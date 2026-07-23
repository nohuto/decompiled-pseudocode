/*
 * XREFs of SiGetBiosSystemDisk @ 0x1407056C8
 * Callers:
 *     SiGetBiosSystemPartition @ 0x140705390 (SiGetBiosSystemPartition.c)
 *     SiGetSystemDisk @ 0x1407055F0 (SiGetSystemDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _snwscanf_s @ 0x14019AE80 (_snwscanf_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQuerySymbolicLinkObject @ 0x1401BADD0 (ZwQuerySymbolicLinkObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SiIsWinPEBoot @ 0x1406AFAD8 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x1406AFCE8 (SiGetBootDeviceNameFromRegistry.c)
 *     SiTranslateSymbolicLink @ 0x1406B0038 (SiTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x1407057EC (SiOpenArcNameObject.c)
 *     SiIssueSynchronousIoctl @ 0x1408F6308 (SiIssueSynchronousIoctl.c)
 */

__int64 __fastcall SiGetBiosSystemDisk(wchar_t **a1, __int64 a2, __int64 a3, int a4)
{
  wchar_t *v5; // rdi
  __int64 v6; // r8
  int v7; // r9d
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v12; // rbx
  __int64 v13; // rdx
  int v14; // eax
  bool v15; // zf
  ULONG ReturnedLength; // [rsp+30h] [rbp-39h] BYREF
  HANDLE LinkHandle; // [rsp+38h] [rbp-31h]
  int v18; // [rsp+40h] [rbp-29h] BYREF
  int v19; // [rsp+44h] [rbp-25h] BYREF
  int v20; // [rsp+48h] [rbp-21h] BYREF
  wchar_t *Src; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v23[12]; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v24[10]; // [rsp+78h] [rbp+Fh] BYREF

  LinkHandle = 0LL;
  v5 = 0LL;
  if ( !SiIsWinPEBoot((int)a1, a2, a3, a4) )
    goto LABEL_2;
  if ( (int)SiGetBootDeviceNameFromRegistry((int)L"FirmwareBootDevice", &Src, v6, v7) < 0 )
    goto LABEL_2;
  v12 = Src;
  v13 = -1LL;
  do
    ++v13;
  while ( Src[v13] );
  if ( snwscanf_s(Src, v13 + 1, L"multi(%d)disk(%d)rdisk(%d)", &v18, &v19, &v20) != 3
    || v18
    || v19
    || v20
    || SiTranslateSymbolicLink(L"\\ArcName\\multi(0)disk(0)rdisk(0)", &Src) < 0 )
  {
    goto LABEL_2;
  }
  ExFreePoolWithTag(v12, 0);
  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  v14 = SiIssueSynchronousIoctl(Src, v24, 0x28u);
  v15 = v14 >= 0 ? v24[7] == 7 : v14 == -1073741766;
  if ( !v15 || (v8 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(1)"), v8 == -1073740718) )
LABEL_2:
    v8 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(0)");
  if ( v8 >= 0 )
  {
    ReturnedLength = 0;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v9 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, &ReturnedLength);
    v8 = v9;
    if ( v9 == -1073741789 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ReturnedLength + 2LL, 0x4B505953u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        DestinationString.Buffer = PoolWithTag;
        DestinationString.MaximumLength = ReturnedLength;
        v8 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
        if ( v8 >= 0 )
        {
          v5[(unsigned __int64)DestinationString.Length >> 1] = 0;
          *a1 = v5;
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else if ( v9 >= 0 )
    {
      v8 = -1073741823;
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v8 < 0 && v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v8;
}
