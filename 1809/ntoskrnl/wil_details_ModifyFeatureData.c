/*
 * XREFs of wil_details_ModifyFeatureData @ 0x1400F2C4C
 * Callers:
 *     wil_details_RecordUsageInPropertyCache @ 0x1400F2B84 (wil_details_RecordUsageInPropertyCache.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        volatile signed __int32 *a1,
        __int64 (__fastcall *a2)(volatile signed __int32 *, __int64),
        __int64 a3)
{
  signed __int32 v6; // ebp
  __int64 result; // rax
  volatile signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v8 = *a1;
    v6 = v8;
    result = a2(&v8, a3);
    if ( !(_DWORD)result )
      break;
    if ( v6 == _InterlockedCompareExchange(a1, v8, v6) )
      return 1LL;
  }
  return result;
}
