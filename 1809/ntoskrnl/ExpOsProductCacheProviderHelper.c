/*
 * XREFs of ExpOsProductCacheProviderHelper @ 0x1406A79E0
 * Callers:
 *     ExpCloudbookHardwareLockedProvider @ 0x1406A76B0 (ExpCloudbookHardwareLockedProvider.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A77C0 (ExpGenuinePolicyPostProcess.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1408CEF00 (ExpCloudbookHardwareIDProvider.c)
 *     ExpGetSubscriptionPfn @ 0x1408CF0A4 (ExpGetSubscriptionPfn.c)
 *     ExpOsProductContentIdCacheProvider @ 0x1408CF370 (ExpOsProductContentIdCacheProvider.c)
 *     ExpOsProductPfnCacheProvider @ 0x1408CF3B0 (ExpOsProductPfnCacheProvider.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B8450 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
  ValueKey = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_140909E10);
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
