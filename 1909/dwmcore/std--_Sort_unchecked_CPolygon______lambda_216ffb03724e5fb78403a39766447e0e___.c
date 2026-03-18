/*
 * XREFs of std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180259C18
 * Callers:
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180259C18 (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x180259E84 (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180259718 (std--_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 *     std::_Make_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1802597CC (std--_Make_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 *     std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180259898 (std--_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e_.c)
 *     std::_Sort_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180259B80 (std--_Sort_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180259C18 (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 */

__int64 __fastcall std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        __int64 *a1,
        char *a2,
        __int64 a3,
        char a4)
{
  __int64 result; // rax
  char *v7; // rdi
  __int64 *v8; // rsi
  __int64 v9; // r9
  char *v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-10h]

  result = (a2 - (char *)a1) >> 3;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
      (__int64 **)&v10,
      v8,
      (unsigned __int64)v7);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v9) = a4;
    if ( (__int64)((v10 - (char *)v8) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((v7 - (char *)v11) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v11, v7, a3, v9);
      v7 = v10;
    }
    else
    {
      std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v8, v10, a3, v9);
      v8 = v11;
    }
    result = (v7 - (char *)v8) >> 3;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_9:
    if ( result >= 2 )
      return (__int64)std::_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
                        (char *)v8,
                        v7);
  }
  else
  {
    std::_Make_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___((__int64)v8, (__int64)v7, a4);
    return std::_Sort_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v8, (__int64)v7);
  }
  return result;
}
