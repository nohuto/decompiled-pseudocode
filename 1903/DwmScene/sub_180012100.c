/*
 * XREFs of sub_180012100 @ 0x180012100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011F18 @ 0x180011F18 (sub_180011F18.c)
 *     sub_180095D8C @ 0x180095D8C (sub_180095D8C.c)
 *     sub_180096BAC @ 0x180096BAC (sub_180096BAC.c)
 *     sub_180096CE0 @ 0x180096CE0 (sub_180096CE0.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 *     sub_180097220 @ 0x180097220 (sub_180097220.c)
 *     sub_180097364 @ 0x180097364 (sub_180097364.c)
 *     sub_180097494 @ 0x180097494 (sub_180097494.c)
 *     sub_1800976EC @ 0x1800976EC (sub_1800976EC.c)
 *     sub_180097820 @ 0x180097820 (sub_180097820.c)
 *     sub_180097954 @ 0x180097954 (sub_180097954.c)
 */

__int64 __fastcall sub_180012100(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_180097954(v4);
    sub_180096CE0(*(_QWORD *)(a1 + 16), a2[14]);
    if ( *a2 )
    {
      if ( *((_QWORD *)a2 + 1) )
        sub_180097364(*(_QWORD *)(a1 + 16));
      v5 = *((_QWORD *)a2 + 2);
      if ( v5 )
        sub_180097220(*(_QWORD *)(a1 + 16), v5, 0LL);
      v6 = *((_QWORD *)a2 + 3);
      if ( v6 )
        sub_180097494(*(_QWORD *)(a1 + 16), v6, 0LL);
      if ( *((_QWORD *)a2 + 4) )
        sub_180096BAC(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 5) )
        sub_1800976EC(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 6) )
        sub_180097820(*(_QWORD *)(a1 + 16));
      if ( a2[14] && *((_QWORD *)a2 + 8) )
        sub_180096CF0(*(_QWORD *)(a1 + 16));
      sub_180095D8C(*(_QWORD *)(a1 + 16), 3LL);
      sub_180011F18((_DWORD *)(a1 + 32), *a2, *((unsigned __int64 **)a2 + 1), 12LL);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *(_DWORD *)(a1 + 52) = 0;
    }
  }
  catch ( ... )
  {
    sub_18000C338(retaddr, 86, (__int64)"SpectreMesh.cpp", 0x80004005);
    return 2147500037LL;
  }
  return 0LL;
}
