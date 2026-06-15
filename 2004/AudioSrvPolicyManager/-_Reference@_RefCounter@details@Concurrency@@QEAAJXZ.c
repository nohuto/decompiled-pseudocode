/*
 * XREFs of ?_Reference@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x18000A450
 * Callers:
 *     sub_180019790 @ 0x180019790 (sub_180019790.c)
 *     sub_1800197B0 @ 0x1800197B0 (sub_1800197B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::_RefCounter::_Reference(Concurrency::details::_RefCounter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
