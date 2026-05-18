/*
 * XREFs of sub_18012E6B7 @ 0x18012E6B7
 * Callers:
 *     <none>
 * Callees:
 *     ?allocate@?$cache_aligned_allocator@V_Concurrent_queue_iterator_rep@details@Concurrency@@@details@Concurrency@@QEAAPEAV_Concurrent_queue_iterator_rep@23@_KPEBX@Z @ 0x18008D4C8 (-allocate@-$cache_aligned_allocator@V_Concurrent_queue_iterator_rep@details@Concurrency@@@detail.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E6B7(__int64 a1, __int64 a2)
{
  Concurrency::details::cache_aligned_allocator<Concurrency::details::_Concurrent_queue_iterator_rep>::allocate(
    *(_QWORD *)(a2 + 80),
    *(_QWORD *)(a2 + 88));
  throw;
}
