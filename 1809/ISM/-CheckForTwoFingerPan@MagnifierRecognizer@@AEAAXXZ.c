/*
 * XREFs of ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1800D0398
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CECD0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     sqrt @ 0x18012BF30 (sqrt.c)
 */

void __fastcall MagnifierRecognizer::CheckForTwoFingerPan(MagnifierRecognizer *this)
{
  int v2; // ecx
  int v3; // ecx
  __int64 *v4; // rcx
  __int64 *j; // rax
  __int64 **v6; // rdx
  __int64 *v7; // r8
  __int64 *i; // rdx
  __int64 *m; // rax
  __int64 **v10; // rcx
  __int64 *v11; // rdx
  __int64 *k; // rcx
  __m128i v13; // xmm1
  __int64 v14; // rax
  unsigned __int64 v15; // xmm0_8
  int v16; // edi
  int v17; // ebx
  double v18; // xmm6_8
  double v19; // xmm0_8
  _QWORD *v20; // rax
  __int128 v21; // [rsp+20h] [rbp-58h]

  if ( !*((_BYTE *)this + 3) || *((_BYTE *)this + 2) )
    return;
  v2 = *((_DWORD *)this + 1);
  if ( !v2 )
    goto LABEL_36;
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( *((_DWORD *)this + 2) <= 1u )
    {
      v20 = (_QWORD *)**((_QWORD **)this + 2);
      if ( 1000000LL * *((_QWORD *)this + 5) < v20[8] - v20[7] )
        *((_BYTE *)this + 3) = 0;
      if ( (int)((v20[6] - v20[5]) * (v20[6] - v20[5])
               + (HIDWORD(v20[6]) - HIDWORD(v20[5])) * (HIDWORD(v20[6]) - HIDWORD(v20[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)this + 12) * *((_DWORD *)this + 12)) )
        return;
    }
LABEL_36:
    *((_BYTE *)this + 3) = 0;
    return;
  }
  if ( v3 != 1 )
    goto LABEL_36;
  v4 = (__int64 *)*((_QWORD *)this + 2);
  j = (__int64 *)*v4;
  if ( (__int64 *)*v4 != v4 )
  {
    while ( (int)((j[6] - j[5]) * (j[6] - j[5]) + (HIDWORD(j[6]) - HIDWORD(j[5])) * (HIDWORD(j[6]) - HIDWORD(j[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)this + 13) * *((_DWORD *)this + 13)) )
    {
      if ( !*((_BYTE *)j + 25) )
      {
        v6 = (__int64 **)j[2];
        if ( *((_BYTE *)v6 + 25) )
        {
          for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
            j = i;
          j = i;
        }
        else
        {
          v7 = *v6;
          for ( j = (__int64 *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
            j = v7;
        }
      }
      if ( j == v4 )
        return;
    }
    *((_BYTE *)this + 3) = 0;
    m = (__int64 *)*v4;
    v21 = *(_OWORD *)(*v4 + 40);
    if ( !*(_BYTE *)(*v4 + 25) )
    {
      v10 = (__int64 **)m[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25) && m == (__int64 *)k[2]; k = (__int64 *)k[1] )
          m = k;
        m = k;
      }
      else
      {
        v11 = *v10;
        for ( m = (__int64 *)m[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
          m = v11;
      }
    }
    v13 = *(__m128i *)(m + 5);
    v14 = m[5];
    v15 = _mm_srli_si128(v13, 8).m128i_u64[0];
    v16 = v15 - v14;
    v17 = HIDWORD(v15) - HIDWORD(v14);
    v18 = sqrt((double)((DWORD2(v21) - (int)v21) * (DWORD2(v21) - (int)v21)
                      + (HIDWORD(v21) - DWORD1(v21)) * (HIDWORD(v21) - DWORD1(v21))));
    v19 = sqrt((double)(v16 * v16 + v17 * v17));
    if ( (double)v17 / v19 * ((double)(HIDWORD(v21) - DWORD1(v21)) / v18)
       + (double)v16 / v19 * ((double)(DWORD2(v21) - (int)v21) / v18) >= *((double *)this + 7) )
      *((_BYTE *)this + 2) = 1;
  }
}
