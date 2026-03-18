/*
 * XREFs of MiCreateInitialPfns @ 0x140188BF4
 * Callers:
 *     MiInitializeUnusablePfns @ 0x140188A34 (MiInitializeUnusablePfns.c)
 *     MxCreateFreePfns @ 0x1409F2AC8 (MxCreateFreePfns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiCreateInitialPfns(__m128i *a1, unsigned __int64 a2, __m128i *a3)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  unsigned __int64 result; // rax
  __m128i *v7; // rdx

  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  if ( a2 <= 1 || (_DWORD)InitializationPhase )
  {
    result = (unsigned __int64)&a1[3 * a2];
    while ( a1 != (__m128i *)result )
    {
      *a1 = v3;
      a1[1] = v4;
      a1[2] = v5;
      a1 += 3;
    }
  }
  else
  {
    result = 48 * a2;
    v7 = &a1[3 * a2];
    if ( result > 0x1000 )
    {
      while ( a1 != v7 )
      {
        _mm_stream_si128(a1, v3);
        _mm_stream_si128(a1 + 1, v4);
        _mm_stream_si128(a1 + 2, v5);
        a1 += 3;
      }
      _mm_sfence();
    }
    else
    {
      while ( a1 != v7 )
      {
        *a1 = v3;
        a1[1] = v4;
        a1[2] = v5;
        a1 += 3;
      }
    }
  }
  return result;
}
