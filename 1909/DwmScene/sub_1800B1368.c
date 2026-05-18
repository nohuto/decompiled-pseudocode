/*
 * XREFs of sub_1800B1368 @ 0x1800B1368
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B1368(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v4; // rdi
  __m128 v5; // xmm6
  __m128 v6; // xmm6
  __int64 result; // rax
  __m128 v8; // xmm6
  __m128 v9; // xmm6

  v4 = (_DWORD *)(a1 + 344);
  v5 = 0LL;
  v5.m128_f32[0] = *(float *)&a2;
  v6 = _mm_unpacklo_ps(v5, (__m128)HIDWORD(a2));
  if ( a1 == -344 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  result = _mm_movemask_ps(_mm_cmpeq_ps(_mm_unpacklo_ps((__m128)(unsigned int)*v4, (__m128)*(unsigned int *)(a1 + 348)), v6)) & 3;
  if ( (_BYTE)result != 3 )
    goto LABEL_8;
  v8 = 0LL;
  v8.m128_f32[0] = *(float *)&a3;
  v9 = _mm_unpacklo_ps(v8, (__m128)HIDWORD(a3));
  if ( a1 == -352 )
    wassert(L"pSource", L"d:\\os\\public\\amd64fre\\sdk\\inc\\DirectXMathConvert.inl", 0x140u);
  result = _mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 352), v9)) & 3;
  if ( (_BYTE)result != 3 || a4 != *(_DWORD *)(a1 + 360) )
  {
LABEL_8:
    *v4 = a2;
    *(_DWORD *)(a1 + 348) = HIDWORD(a2);
    *(_QWORD *)(a1 + 352) = a3;
    *(_DWORD *)(a1 + 544) |= 4u;
    *(_DWORD *)(a1 + 360) = a4;
    *(_BYTE *)(a1 + 1612) = 1;
  }
  return result;
}
