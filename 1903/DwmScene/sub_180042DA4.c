/*
 * XREFs of sub_180042DA4 @ 0x180042DA4
 * Callers:
 *     sub_180043040 @ 0x180043040 (sub_180043040.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_180042370 @ 0x180042370 (sub_180042370.c)
 *     sub_1800432AC @ 0x1800432AC (sub_1800432AC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180042DA4(__int64 a1, __int64 **a2)
{
  __int64 *v4; // r14
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdx
  const void **v9; // rax
  const void *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int128 v17; // [rsp+28h] [rbp-29h] BYREF
  __int128 v18; // [rsp+38h] [rbp-19h]
  __int64 v19; // [rsp+48h] [rbp-9h]
  __int64 v20; // [rsp+50h] [rbp-1h]
  __int128 v21; // [rsp+58h] [rbp+7h] BYREF
  __int64 v22; // [rsp+68h] [rbp+17h]
  _QWORD Src[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __m128i si128; // [rsp+80h] [rbp+2Fh]

  v19 = -2LL;
  v20 = a1;
  v22 = 0LL;
  v21 = 0LL;
  v4 = a2[1];
  v5 = *a2;
  v6 = ((char *)v4 - (char *)*a2) / 48;
  if ( v6 )
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_1800432AC(&v21);
    v5 = *a2;
    v4 = a2[1];
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(Src[0]) = 0;
  while ( v5 != v4 )
  {
    v7 = v5;
    if ( (unsigned __int64)v5[3] >= 0x10 )
      v7 = (__int64 *)*v5;
    *(_QWORD *)&v17 = v7;
    DWORD2(v17) = *((_DWORD *)v5 + 8);
    HIDWORD(v17) = dword_180150A20[6 * *((unsigned __int8 *)v5 + 40) - 6 + *((int *)v5 + 9)];
    v18 = *((unsigned int *)v5 + 11);
    v8 = *((_QWORD *)&v21 + 1);
    if ( v22 == *((_QWORD *)&v21 + 1) )
    {
      sub_180042370((const void **)&v21, *((_BYTE **)&v21 + 1), &v17);
    }
    else
    {
      **((_OWORD **)&v21 + 1) = v17;
      *(_OWORD *)(v8 + 16) = v18;
      *((_QWORD *)&v21 + 1) += 32LL;
    }
    v9 = sub_18002BFD4((const void **)&v17, v5, " ");
    v10 = v9;
    if ( (unsigned __int64)v9[3] >= 0x10 )
      v10 = *v9;
    std::string::append(Src, v10, (unsigned __int64)v9[2]);
    if ( *((_QWORD *)&v18 + 1) >= 0x10uLL )
    {
      v11 = v17;
      if ( (unsigned __int64)(*((_QWORD *)&v18 + 1) + 1LL) >= 0x1000 )
      {
        v11 = *(_QWORD *)(v17 - 8);
        if ( (unsigned __int64)(v17 - v11 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v11, *((_QWORD *)&v18 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v11);
    }
    v5 += 6;
  }
  *(_OWORD *)a1 = v21;
  *(_QWORD *)(a1 + 16) = v22;
  v21 = 0LL;
  v22 = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_18000F3F4((_QWORD *)(a1 + 24), (__int64)Src);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = Src[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(Src[0] - 8LL);
      if ( (unsigned __int64)(Src[0] - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(Src[0]) = 0;
  v13 = v21;
  if ( (_QWORD)v21 )
  {
    v14 = (v22 - v21) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v14 >= 0x1000 )
    {
      v15 = v14 + 39;
      v13 = *(_QWORD *)(v21 - 8);
      if ( (unsigned __int64)(v21 - v13 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v13, v15);
        __debugbreak();
      }
    }
    j_j__o_free(v13);
  }
  return a1;
}
