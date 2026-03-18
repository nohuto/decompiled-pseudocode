/*
 * XREFs of std::_Pop_heap_hole_by_index_CPolygon_____ptr64_____ptr64_CPolygon_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230C2C
 * Callers:
 *     std::_Make_heap_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x18023092C (std--_Make_heap_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd_.c)
 *     std::_Sort_heap_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___ @ 0x180230CF8 (std--_Sort_heap_unchecked_CPolygon_____ptr64_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_CPolygon_____ptr64_____ptr64_CPolygon_____ptr64__lambda_f246a48d173e08dab8d4e80443585fdd___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 i; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax

  v5 = (a3 - 1) >> 1;
  v6 = a2;
  for ( i = a2; i < v5; v6 = i )
  {
    i = 2 * i
      + 2LL
      - (*(_DWORD *)(*(_QWORD *)(a1 + 16 * i + 16) + 264LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16 * i + 8) + 264LL));
    *(_QWORD *)(a1 + 8 * v6) = *(_QWORD *)(a1 + 8 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 8 * v6) = *(_QWORD *)(a1 + 8 * a3 - 8);
    v6 = a3 - 1;
  }
  if ( a2 < v6 )
  {
    do
    {
      v9 = (v6 - 1) >> 1;
      v10 = *(_QWORD *)(a1 + 8 * v9);
      if ( *(_DWORD *)(v10 + 264) >= *(_DWORD *)(*a4 + 264) )
        break;
      *(_QWORD *)(a1 + 8 * v6) = v10;
      v6 = (v6 - 1) >> 1;
    }
    while ( a2 < v9 );
  }
  result = *a4;
  *(_QWORD *)(a1 + 8 * v6) = *a4;
  return result;
}
