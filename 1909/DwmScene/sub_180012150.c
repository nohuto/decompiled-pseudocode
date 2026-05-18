/*
 * XREFs of sub_180012150 @ 0x180012150
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011F68 @ 0x180011F68 (sub_180011F68.c)
 *     sub_180095E9C @ 0x180095E9C (sub_180095E9C.c)
 *     sub_180096CBC @ 0x180096CBC (sub_180096CBC.c)
 *     sub_180096DF0 @ 0x180096DF0 (sub_180096DF0.c)
 *     sub_180096E00 @ 0x180096E00 (sub_180096E00.c)
 *     sub_180097330 @ 0x180097330 (sub_180097330.c)
 *     sub_180097474 @ 0x180097474 (sub_180097474.c)
 *     sub_1800975A4 @ 0x1800975A4 (sub_1800975A4.c)
 *     sub_1800977FC @ 0x1800977FC (sub_1800977FC.c)
 *     sub_180097930 @ 0x180097930 (sub_180097930.c)
 *     sub_180097A64 @ 0x180097A64 (sub_180097A64.c)
 */

__int64 __fastcall sub_180012150(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 16);
  try
  {
    sub_180097A64(v4);
    sub_180096DF0(*(_QWORD *)(a1 + 16), a2[14]);
    if ( *a2 )
    {
      if ( *((_QWORD *)a2 + 1) )
        sub_180097474(*(_QWORD *)(a1 + 16));
      v5 = *((_QWORD *)a2 + 2);
      if ( v5 )
        sub_180097330(*(_QWORD *)(a1 + 16), v5, 0LL);
      v6 = *((_QWORD *)a2 + 3);
      if ( v6 )
        sub_1800975A4(*(_QWORD *)(a1 + 16), v6, 0LL);
      if ( *((_QWORD *)a2 + 4) )
        sub_180096CBC(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 5) )
        sub_1800977FC(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 6) )
        sub_180097930(*(_QWORD *)(a1 + 16));
      if ( a2[14] && *((_QWORD *)a2 + 8) )
        sub_180096E00(*(_QWORD *)(a1 + 16));
      sub_180095E9C(*(_QWORD *)(a1 + 16), 3LL);
      sub_180011F68((_DWORD *)(a1 + 32), *a2, *((unsigned __int64 **)a2 + 1), 12LL);
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
