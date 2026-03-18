/*
 * XREFs of wil_details_ModifyFeatureData @ 0x1C0006748
 * Callers:
 *     wil_details_RecordUsageInPropertyCache @ 0x1C00066A4 (wil_details_RecordUsageInPropertyCache.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        __int64 a1,
        unsigned int (__fastcall *a2)(signed __int32 *, __int64),
        __int64 a3)
{
  signed __int32 v5; // ebx
  signed __int32 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v8 = HIDWORD(a1);
  v7 = 0;
  while ( 1 )
  {
    v7 = Feature_Pldr_Ignore_Vetoes__private_propertyCache;
    v5 = Feature_Pldr_Ignore_Vetoes__private_propertyCache;
    if ( !a2(&v7, a3) )
      break;
    if ( v5 == _InterlockedCompareExchange(&Feature_Pldr_Ignore_Vetoes__private_propertyCache, v7, v5) )
      return 1LL;
  }
  return 0LL;
}
