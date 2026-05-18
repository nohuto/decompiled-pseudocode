/*
 * XREFs of sub_1801098BC @ 0x1801098BC
 * Callers:
 *     sub_1800D58E8 @ 0x1800D58E8 (sub_1800D58E8.c)
 *     sub_1800D5BE4 @ 0x1800D5BE4 (sub_1800D5BE4.c)
 *     sub_1800D5D40 @ 0x1800D5D40 (sub_1800D5D40.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 *     sub_180069BD8 @ 0x180069BD8 (sub_180069BD8.c)
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 *     sub_18006A584 @ 0x18006A584 (sub_18006A584.c)
 *     sub_1800D6234 @ 0x1800D6234 (sub_1800D6234.c)
 *     sub_1800D673C @ 0x1800D673C (sub_1800D673C.c)
 *     sub_1800E0F38 @ 0x1800E0F38 (sub_1800E0F38.c)
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     sub_1800E10CC @ 0x1800E10CC (sub_1800E10CC.c)
 *     sub_1800E1248 @ 0x1800E1248 (sub_1800E1248.c)
 *     sub_1800E14B0 @ 0x1800E14B0 (sub_1800E14B0.c)
 *     sub_1800E1548 @ 0x1800E1548 (sub_1800E1548.c)
 *     sub_180108368 @ 0x180108368 (sub_180108368.c)
 *     sub_1801088E4 @ 0x1801088E4 (sub_1801088E4.c)
 *     sub_180108E94 @ 0x180108E94 (sub_180108E94.c)
 *     sub_18010A020 @ 0x18010A020 (sub_18010A020.c)
 *     sub_18010A0E0 @ 0x18010A0E0 (sub_18010A0E0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1801098BC(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __m128i *v6; // rax
  char v7; // si
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 **v10; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v13; // r14
  __int128 *v14; // rax
  __int128 *v15; // rax
  __int128 *v16; // rax
  _OWORD *v17; // rax
  bool v18; // al
  __int64 v19; // r8
  __int64 v20; // rcx
  double v21; // xmm6_8
  double v22; // xmm0_8
  double v23; // xmm0_8
  double v24; // xmm0_8
  double v25; // xmm2_8
  _QWORD *v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 **v31; // rax
  __int64 k; // rax
  __int64 *m; // rcx
  __int64 result; // rax
  __int128 v35; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+50h] [rbp-B8h]
  _BYTE v38[96]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-40h]
  __int128 v41; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-28h]
  __int128 v43; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-10h]
  _OWORD v45[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v46; // [rsp+120h] [rbp+18h]
  __int64 v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  __int64 v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  __int64 v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  __int64 v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  __int64 v55; // [rsp+168h] [rbp+60h]
  __int64 v56; // [rsp+170h] [rbp+68h]
  char v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  __int128 v59; // [rsp+188h] [rbp+80h] BYREF
  __m128i v60; // [rsp+1B0h] [rbp+A8h]
  __int64 v61; // [rsp+1C0h] [rbp+B8h]
  __int64 v62; // [rsp+1C8h] [rbp+C0h]
  _BYTE v63[24]; // [rsp+1D0h] [rbp+C8h] BYREF
  _OWORD v64[7]; // [rsp+1E8h] [rbp+E0h] BYREF

  v62 = -2LL;
  v4 = a2;
  v37 = a2;
  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  *(_QWORD *)&v59 = sub_18006945C();
  sub_180108E94(v4, (__int64)v45);
  sub_180069F04((__int64 ***)&v59, (__int64 **)&v35, *(__int64 **)v59, (__int64 *)v59);
  j_j__o_free(v59);
  if ( *(_DWORD *)(a1 + 920) == 2 )
  {
    if ( a3 )
      sub_18006A584(*(_QWORD ***)(a1 + 896));
    if ( sub_1800E1248() )
    {
      v6 = (__m128i *)sub_1800E14B0(a1, (__int64)&v39);
    }
    else
    {
      LODWORD(v35) = 4;
      *((_QWORD *)&v35 + 1) = 0LL;
      LOBYTE(v36) = 1;
      v43 = (unsigned __int64)v35;
      v44 = v36;
      v6 = (__m128i *)&v43;
    }
    v60 = *v6;
    v61 = v6[1].m128i_i64[0];
    if ( _mm_cvtsi128_si32(v60) == 2 )
    {
      v7 = 1;
      v8 = *(_QWORD **)(a1 + 880);
      v9 = (_QWORD *)*v8;
      while ( v9 != v8 )
      {
        v7 = (unsigned __int8)sub_18010A0E0(v9 + 8) != 0 ? v7 : 0;
        v10 = (__int64 **)v9[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = v9[1]; !*(_BYTE *)(i + 25) && v9 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            v9 = (_QWORD *)i;
          v9 = (_QWORD *)i;
        }
        else
        {
          v9 = (_QWORD *)v9[2];
          for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v9 = j;
        }
      }
      v13 = a1 + 176;
      if ( sub_1800E1248() )
      {
        v14 = (__int128 *)sub_1800E14B0(a1 + 176, (__int64)&v39);
      }
      else
      {
        LODWORD(v35) = 4;
        *((_QWORD *)&v35 + 1) = 0LL;
        LOBYTE(v36) = 1;
        v41 = (unsigned __int64)v35;
        v42 = v36;
        v14 = &v41;
      }
      v43 = *v14;
      if ( sub_1800E1248() )
      {
        v15 = (__int128 *)sub_1800E14B0(a1 + 352, (__int64)v63);
      }
      else
      {
        LODWORD(v35) = 4;
        *((_QWORD *)&v35 + 1) = 0LL;
        LOBYTE(v36) = 1;
        v39 = (unsigned __int64)v35;
        v40 = v36;
        v15 = &v39;
      }
      v41 = *v15;
      if ( sub_1800E1248() )
      {
        v16 = (__int128 *)sub_1800E14B0(a1 + 528, (__int64)v63);
      }
      else
      {
        LODWORD(v35) = 4;
        *((_QWORD *)&v35 + 1) = 0LL;
        LOBYTE(v36) = 1;
        v39 = (unsigned __int64)v35;
        v40 = v36;
        v16 = &v39;
      }
      v35 = *v16;
      v36 = *((_QWORD *)v16 + 2);
      if ( sub_1800E1248() )
      {
        v17 = (_OWORD *)sub_1800E1548(a1 + 704, (__int64)v45);
      }
      else
      {
        *(_DWORD *)v38 = 4;
        memset(&v38[8], 0, 88);
        v64[0] = *(_OWORD *)v38;
        v64[1] = *(_OWORD *)&v38[16];
        v64[2] = *(_OWORD *)&v38[32];
        memset(&v64[3], 0, 48);
        v17 = v64;
      }
      *(_OWORD *)v38 = *v17;
      *(_OWORD *)&v38[16] = v17[1];
      *(_OWORD *)&v38[32] = v17[2];
      *(_OWORD *)&v38[48] = v17[3];
      *(_OWORD *)&v38[64] = v17[4];
      *(_OWORD *)&v38[80] = v17[5];
      v18 = _mm_cvtsi128_si32(*(__m128i *)v38) == 2;
      if ( v7 && (_DWORD)v43 == 2 && (_DWORD)v41 == 2 && (_DWORD)v35 == 2 && v18 )
      {
        sub_180069BD8((_QWORD *)(a1 + 1064));
        if ( (_BYTE)v61 )
        {
          *(_QWORD *)(a1 + 936) = 0LL;
          *(_QWORD *)(a1 + 952) = 0LL;
          *(_QWORD *)(a1 + 928) = 0LL;
          *(_QWORD *)(a1 + 944) = 0LL;
        }
        else
        {
          v19 = *((_QWORD *)&v41 + 1);
          v20 = *((_QWORD *)&v41 + 1) - *((_QWORD *)&v43 + 1);
          v21 = (double)v60.m128i_i32[2];
          if ( v60.m128i_i64[1] < 0 )
            v21 = v21 + 1.844674407370955e19;
          v22 = (double)SDWORD2(v43);
          if ( v43 < 0 )
            v22 = v22 + 1.844674407370955e19;
          *(double *)(a1 + 936) = v22 / v21 * 1000.0;
          v23 = (double)(int)v19;
          if ( v19 < 0 )
            v23 = v23 + 1.844674407370955e19;
          *(double *)(a1 + 944) = v23 / v21 * 1000.0;
          v24 = (double)SDWORD2(v35);
          if ( v35 < 0 )
            v24 = v24 + 1.844674407370955e19;
          *(double *)(a1 + 952) = v24 / v21 * 1000.0;
          v25 = (double)(int)v20;
          if ( v20 < 0 )
            v25 = v25 + 1.844674407370955e19;
          *(double *)(a1 + 928) = v25 / v21 * 1000.0;
          *(_OWORD *)(a1 + 960) = *(_OWORD *)&v38[8];
          *(_OWORD *)(a1 + 976) = *(_OWORD *)&v38[24];
          *(_OWORD *)(a1 + 992) = *(_OWORD *)&v38[40];
          *(_OWORD *)(a1 + 1008) = *(_OWORD *)&v38[56];
          *(_OWORD *)(a1 + 1024) = *(_OWORD *)&v38[72];
          *(_QWORD *)(a1 + 1040) = *(_QWORD *)&v38[88];
          *(_BYTE *)(a1 + 1048) = 1;
          v26 = *(_QWORD **)(a1 + 880);
          v27 = (_QWORD *)*v26;
          if ( (_QWORD *)*v26 != v26 )
          {
            do
            {
              v28 = sub_18010A020(v27 + 8, v63);
              *(_QWORD *)&v38[16] = 0LL;
              *(_QWORD *)&v38[24] = 0LL;
              sub_18000F444(v38, (__int64)(v27 + 4));
              *(_OWORD *)&v38[32] = *(_OWORD *)v28;
              *(_QWORD *)&v38[48] = *(_QWORD *)(v28 + 16);
              v29 = sub_180108368((_QWORD *)(a1 + 1064), (__int64)v38);
              sub_1801088E4((_QWORD *)(a1 + 1064), (__int64)&v35, 0, v29 + 4, v29);
              if ( *(_QWORD *)&v38[24] >= 0x10uLL )
              {
                v30 = *(_QWORD *)v38;
                if ( (unsigned __int64)(*(_QWORD *)&v38[24] + 1LL) >= 0x1000 )
                {
                  v30 = *(_QWORD *)(*(_QWORD *)v38 - 8LL);
                  if ( (unsigned __int64)(*(_QWORD *)v38 - v30 - 8) > 0x1F )
                  {
                    o__invalid_parameter_noinfo_noreturn(v30, *(_QWORD *)&v38[24] + 40LL);
                    JUMPOUT(0x18010A01ELL);
                  }
                }
                j_j__o_free(v30);
              }
              v31 = (__int64 **)v27[2];
              if ( *((_BYTE *)v31 + 25) )
              {
                for ( k = v27[1]; !*(_BYTE *)(k + 25) && v27 == *(_QWORD **)(k + 16); k = *(_QWORD *)(k + 8) )
                  v27 = (_QWORD *)k;
                v27 = (_QWORD *)k;
              }
              else
              {
                v27 = (_QWORD *)v27[2];
                for ( m = *v31; !*((_BYTE *)m + 25); m = (__int64 *)*m )
                  v27 = m;
              }
            }
            while ( v27 != v26 );
            v13 = a1 + 176;
          }
        }
        sub_1800E0F38((__int64)v45);
        sub_1800E10CC(a1, (__int64 *)v45);
        sub_1800E0FAC(v45);
        sub_1800E0F38((__int64)v45);
        sub_1800E10CC(v13, (__int64 *)v45);
        sub_1800E0FAC(v45);
        sub_1800E0F38((__int64)v45);
        sub_1800E10CC(a1 + 352, (__int64 *)v45);
        sub_1800E0FAC(v45);
        sub_1800E0F38((__int64)v45);
        sub_1800E10CC(a1 + 528, (__int64 *)v45);
        sub_1800E0FAC(v45);
        sub_1800E0F38((__int64)v45);
        sub_1800E10CC(a1 + 704, (__int64 *)v45);
        sub_1800E0FAC(v45);
        sub_1800D6234((_QWORD *)(a1 + 880));
        *(_DWORD *)(a1 + 920) = 3;
      }
      v4 = v37;
    }
  }
  result = *(unsigned int *)(a1 + 920);
  if ( (_DWORD)result == 3 )
  {
    sub_1800D673C(v4, a1 + 928);
    return *(unsigned int *)(a1 + 920);
  }
  return result;
}
