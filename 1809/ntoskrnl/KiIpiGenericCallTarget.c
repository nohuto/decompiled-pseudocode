/*
 * XREFs of KiIpiGenericCallTarget @ 0x140175B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIpiGenericCallTarget(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        volatile signed __int32 *a4)
{
  _InterlockedDecrement(a4);
  while ( *a4 )
    _mm_pause();
  return a2(a3);
}
