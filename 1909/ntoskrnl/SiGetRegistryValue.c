/*
 * XREFs of SiGetRegistryValue @ 0x1406D2968
 * Callers:
 *     SiIsWinPEBoot @ 0x1406D26E8 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x1406D28F8 (SiGetBootDeviceNameFromRegistry.c)
 *     SiDisambiguateSystemDevice @ 0x1409328D8 (SiDisambiguateSystemDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SiOpenRegistryKey @ 0x1406D2AD4 (SiOpenRegistryKey.c)
 */

__int64 __fastcall SiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, ULONG a4, _QWORD *a5, ULONG *a6)
{
  _QWORD *v6; // r15
  ULONG *v7; // r14
  HANDLE v8; // rdi
  _DWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  NTSTATUS v14; // ebx
  NTSTATUS v15; // eax
  _DWORD *PoolWithTag; // rax
  PVOID v17; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+48h] BYREF

  ResultLength = a4;
  v20 = a1;
  v6 = a5;
  v7 = a6;
  v8 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *a5 = 0LL;
  v10 = 0LL;
  *v7 = 0;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( !a3 || (v13 = SiOpenRegistryKey(v11, a3, v12, &Handle), v8 = Handle, v14 = v13, v13 >= 0) )
  {
    v15 = ZwQueryValueKey(v8, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v14 = v15;
    if ( v15 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4B505953u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_16:
        v14 = -1073741670;
        goto LABEL_9;
      }
      v14 = ZwQueryValueKey(v8, &DestinationString, KeyValuePartialInformation, PoolWithTag, ResultLength, (PULONG)&v20);
      if ( v14 < 0 )
        goto LABEL_9;
      if ( v10[1] == 1 )
      {
        ResultLength -= 12;
        v17 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4B505953u);
        *v6 = v17;
        if ( v17 )
        {
          memmove(v17, v10 + 3, ResultLength);
          v14 = 0;
          *v7 = ResultLength;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      v14 = -1073741788;
    }
    else if ( v15 >= 0 )
    {
      v14 = -1073741823;
    }
  }
LABEL_9:
  if ( v8 )
    ZwClose(v8);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v14;
}
