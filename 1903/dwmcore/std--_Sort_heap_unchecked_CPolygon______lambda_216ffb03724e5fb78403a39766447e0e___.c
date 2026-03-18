/*
 * XREFs of std::_Sort_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x18025B440
 * Callers:
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x18025B4D8 (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x18025B374 (std--_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___.c)
 */

__int64 __fastcall std::_Sort_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
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
      std::_Pop_heap_hole_by_index_CPolygon_____CPolygon____lambda_216ffb03724e5fb78403a39766447e0e___(
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
