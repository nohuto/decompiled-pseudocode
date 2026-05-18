/*
 * XREFs of sub_180088418 @ 0x180088418
 * Callers:
 *     sub_180088E3C @ 0x180088E3C (sub_180088E3C.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_18008D1F0 @ 0x18008D1F0 (sub_18008D1F0.c)
 */

__int64 __fastcall sub_180088418(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h]

  v4 = sub_18008D1F0(a1);
  v5 = v4;
  v9 = v4;
  *(_WORD *)(v4 + 24) = 0;
  v6 = *a3;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  try
  {
    sub_18001110C((_QWORD *)(v4 + 32), v6);
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    result = v5;
  }
  catch ( ... )
  {
    Concurrency::details::cache_aligned_allocator<Concurrency::details::_Concurrent_queue_iterator_rep>::allocate(
      a1,
      v9);
    throw;
  }
  return result;
}
