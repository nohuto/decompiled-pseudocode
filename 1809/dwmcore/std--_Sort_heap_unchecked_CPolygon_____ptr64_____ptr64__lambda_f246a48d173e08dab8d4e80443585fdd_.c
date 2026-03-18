/*
 * XREFs of std::_Sort_heap_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230CF8
 * Callers:
 *     std::_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230D90 (std--_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_CPolygon_____ptr64_____ptr64_CPolygon_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230C2C (std--_Pop_heap_hole_by_index_CPolygon_____ptr64_____ptr64_CPolygon_____ptr64__lambda_f246a48d173.c)
 */

__int64 __fastcall std::_Sort_heap_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  result = (a2 - (__int64)a1) >> 3;
  if ( result >= 2 )
  {
    v4 = (__int64 *)(a2 - 8);
    v5 = 8LL - (_QWORD)a1;
    do
    {
      v6 = *v4;
      *v4 = *a1;
      std::_Pop_heap_hole_by_index_CPolygon_____ptr64_____ptr64_CPolygon_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
        (__int64)a1,
        0LL,
        v4 - a1,
        &v6);
      result = ((__int64)--v4 + v5) >> 3;
    }
    while ( result >= 2 );
  }
  return result;
}
