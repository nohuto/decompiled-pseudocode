/*
 * XREFs of SiGetRegistryValue @ 0x1406AFD58
 * Callers:
 *     SiIsWinPEBoot @ 0x1406AFAD8 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x1406AFCE8 (SiGetBootDeviceNameFromRegistry.c)
 *     SiDisambiguateSystemDevice @ 0x1408F64B0 (SiDisambiguateSystemDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SiOpenRegistryKey @ 0x1406AFEBC (SiOpenRegistryKey.c)
 */

__int64 __fastcall SiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, ULONG a4, _QWORD *a5, ULONG *a6)
{
  _QWORD *v6; // r15
  ULONG *v7; // r14
  _DWORD *v8; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  HANDLE v13; // rdi
  NTSTATUS v14; // ebx
  NTSTATUS v15; // eax
  _DWORD *PoolWithTag; // rax
  PVOID v17; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+40h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+48h] BYREF

  ResultLength = a4;
  v20 = a1;
  v6 = a5;
  v7 = a6;
  v8 = 0LL;
  KeyHandle = 0LL;
  *a5 = 0LL;
  *v7 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( a3 )
  {
    v12 = SiOpenRegistryKey(v10, a3, v11, &KeyHandle);
    v13 = KeyHandle;
    v14 = v12;
    if ( v12 < 0 )
      goto LABEL_9;
  }
  else
  {
    v13 = 0LL;
  }
  v15 = ZwQueryValueKey(v13, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v14 = v15;
  if ( v15 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4B505953u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_16:
      v14 = -1073741670;
      goto LABEL_9;
    }
    v14 = ZwQueryValueKey(v13, &DestinationString, KeyValuePartialInformation, PoolWithTag, ResultLength, (PULONG)&v20);
    if ( v14 < 0 )
      goto LABEL_9;
    if ( v8[1] == 1 )
    {
      ResultLength -= 12;
      v17 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4B505953u);
      *v6 = v17;
      if ( v17 )
      {
        memmove(v17, v8 + 3, ResultLength);
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
LABEL_9:
  if ( v13 )
    ZwClose(v13);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v14;
}
