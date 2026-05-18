/*
 * XREFs of ?allocate@?$cache_aligned_allocator@V_Concurrent_queue_iterator_rep@details@Concurrency@@@details@Concurrency@@QEAAPEAV_Concurrent_queue_iterator_rep@23@_KPEBX@Z @ 0x18008D3B8
 * Callers:
 *     sub_18012E5A7 @ 0x18012E5A7 (sub_18012E5A7.c)
 *     sub_18012E5CB @ 0x18012E5CB (sub_18012E5CB.c)
 *     sub_18012F505 @ 0x18012F505 (sub_18012F505.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::cache_aligned_allocator<Concurrency::details::_Concurrent_queue_iterator_rep>::allocate(
        __int64 a1,
        __int64 a2)
{
  return j_j__o_free(a2);
}
