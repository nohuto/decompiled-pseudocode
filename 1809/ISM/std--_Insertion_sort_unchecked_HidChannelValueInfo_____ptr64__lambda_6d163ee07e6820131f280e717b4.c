/*
 * XREFs of std::_Insertion_sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007D094
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x18007C94C (std--_Sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Insertion_sort_unchecked_HidChannelValueInfo_____ptr64__lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rax
  __m128i v4; // xmm2
  __int64 v5; // rdx
  __int128 v6; // xmm3
  __int128 v7; // xmm4
  __int128 v8; // xmm5
  __int64 v9; // xmm6_8
  unsigned int v10; // r10d
  __int64 j; // r9

  if ( a1 != a2 )
  {
    for ( i = a1 + 72; i != a2; i += 72LL )
    {
      v4 = *(__m128i *)i;
      v5 = i;
      v6 = *(_OWORD *)(i + 16);
      v7 = *(_OWORD *)(i + 32);
      v8 = *(_OWORD *)(i + 48);
      v9 = *(_QWORD *)(i + 64);
      v10 = _mm_cvtsi128_si32(*(__m128i *)i);
      if ( v10 >= *(_DWORD *)a1 )
      {
        for ( j = i - 72; v10 < *(_DWORD *)j; j -= 72LL )
        {
          *(_OWORD *)v5 = *(_OWORD *)j;
          *(_OWORD *)(v5 + 16) = *(_OWORD *)(j + 16);
          *(_OWORD *)(v5 + 32) = *(_OWORD *)(j + 32);
          *(_OWORD *)(v5 + 48) = *(_OWORD *)(j + 48);
          *(_QWORD *)(v5 + 64) = *(_QWORD *)(j + 64);
          v5 = j;
        }
        *(__m128i *)v5 = v4;
        *(_OWORD *)(v5 + 16) = v6;
        *(_OWORD *)(v5 + 32) = v7;
        *(_OWORD *)(v5 + 48) = v8;
        *(_QWORD *)(v5 + 64) = v9;
      }
      else
      {
        if ( i != a1 )
        {
          do
          {
            v5 -= 72LL;
            *(_OWORD *)(v5 + 72) = *(_OWORD *)v5;
            *(_OWORD *)(v5 + 88) = *(_OWORD *)(v5 + 16);
            *(_OWORD *)(v5 + 104) = *(_OWORD *)(v5 + 32);
            *(_OWORD *)(v5 + 120) = *(_OWORD *)(v5 + 48);
            *(_QWORD *)(v5 + 136) = *(_QWORD *)(v5 + 64);
          }
          while ( v5 != a1 );
        }
        *(__m128i *)a1 = v4;
        *(_OWORD *)(a1 + 16) = v6;
        *(_OWORD *)(a1 + 32) = v7;
        *(_OWORD *)(a1 + 48) = v8;
        *(_QWORD *)(a1 + 64) = v9;
      }
    }
  }
  return a2;
}
