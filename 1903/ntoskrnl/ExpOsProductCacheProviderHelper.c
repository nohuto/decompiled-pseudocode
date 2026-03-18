/*
 * XREFs of ExpOsProductCacheProviderHelper @ 0x1406D2DD0
 * Callers:
 *     ExpCloudbookHardwareLockedProvider @ 0x1406D2AA0 (ExpCloudbookHardwareLockedProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406D2BB0 (ExpGenuinePolicyPostProcess.c)
 *     ExpCloudbookHardwareIDProvider @ 0x14090C530 (ExpCloudbookHardwareIDProvider.c)
 *     ExpOsProductContentIdCacheProvider @ 0x14090CAD0 (ExpOsProductContentIdCacheProvider.c)
 *     ExpOsProductPfnCacheProvider @ 0x14090CB10 (ExpOsProductPfnCacheProvider.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpOsProductCacheProviderHelper(
        PUNICODE_STRING ValueName,
        _DWORD *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *ResultLength)
{
  NTSTATUS ValueKey; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rdi
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF

  KeyHandle = 0LL;
  *ResultLength = 1;
  ValueKey = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_1409484D0);
  if ( ValueKey >= 0 )
  {
    ValueKey = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&ResultLength);
    if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)ResultLength, 0x20534C53u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        ValueKey = ZwQueryValueKey(
                     KeyHandle,
                     ValueName,
                     KeyValuePartialInformation,
                     PoolWithTag,
                     (ULONG)ResultLength,
                     (PULONG)&ResultLength);
        if ( ValueKey >= 0 )
        {
          *a5 = v12[2];
          if ( a2 )
            *a2 = v12[1];
          if ( a4 >= v12[2] )
          {
            if ( a3 )
              memmove(a3, v12 + 3, (unsigned int)v12[2]);
          }
          else
          {
            ValueKey = -1073741789;
          }
        }
        ExFreePoolWithTag(v12, 0);
      }
      else
      {
        ValueKey = -1073741801;
      }
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)ValueKey;
}
