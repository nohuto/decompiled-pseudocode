/*
 * XREFs of std::_Make_heap_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x18023092C
 * Callers:
 *     std::_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230D90 (std--_Sort_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_CPolygon_____ptr64_____ptr64_CPolygon_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230C2C (std--_Pop_heap_hole_by_index_CPolygon_____ptr64_____ptr64_CPolygon_____ptr64__lambda_f246a48d173.c)
 */

__int64 __fastcall std::_Make_heap_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v5 = (a2 - a1) >> 3;
  for ( i = (a2 - a1) >> 4;
        i > 0;
        result = std::_Pop_heap_hole_by_index_CPolygon_____ptr64_____ptr64_CPolygon_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
                   a1,
                   i,
                   v5,
                   &v9,
                   v8) )
  {
    --i;
    LOBYTE(v8) = a3;
    v9 = *(_QWORD *)(a1 + 8 * i);
  }
  return result;
}
