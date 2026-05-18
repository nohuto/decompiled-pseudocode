/*
 * XREFs of sub_1800A02C4 @ 0x1800A02C4
 * Callers:
 *     sub_1800A205C @ 0x1800A205C (sub_1800A205C.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18008D300 @ 0x18008D300 (sub_18008D300.c)
 */

_QWORD *__fastcall sub_1800A02C4(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  _QWORD *result; // rax
  __int64 v9; // [rsp+58h] [rbp+20h]

  v4 = sub_18008D300(a1);
  v5 = v4;
  v9 = (__int64)v4;
  *((_WORD *)v4 + 12) = 0;
  v6 = *a3;
  v4[6] = 0LL;
  v4[7] = 0LL;
  try
  {
    sub_18000F444(v4 + 4, v6);
    v5[8] = 0LL;
    v5[9] = 0LL;
    result = v5;
  }
  catch ( ... )
  {
    Concurrency::details::cache_aligned_allocator<Concurrency::details::_Concurrent_queue_iterator_rep>::allocate(
      (__int64)a1,
      v9);
    throw;
  }
  return result;
}
