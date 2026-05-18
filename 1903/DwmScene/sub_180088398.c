/*
 * XREFs of sub_180088398 @ 0x180088398
 * Callers:
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_18008D1F0 @ 0x18008D1F0 (sub_18008D1F0.c)
 */

__int64 __fastcall sub_180088398(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+58h] [rbp+10h]

  v5 = sub_18008D1F0(a1);
  v6 = v5;
  v10 = v5;
  *(_WORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  try
  {
    sub_18001110C((_QWORD *)(v5 + 32), a2);
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
    v7 = a3[1];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *(_QWORD *)(v6 + 64) = *a3;
    *(_QWORD *)(v6 + 72) = a3[1];
    result = v6;
  }
  catch ( ... )
  {
    Concurrency::details::cache_aligned_allocator<Concurrency::details::_Concurrent_queue_iterator_rep>::allocate(
      a1,
      v10);
    throw;
  }
  return result;
}
