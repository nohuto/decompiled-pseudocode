/*
 * XREFs of __remainder_piby2 @ 0x180097F54
 * Callers:
 *     cos @ 0x180092C70 (cos.c)
 *     sin @ 0x180093090 (sin.c)
 *     tan @ 0x180095450 (tan.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall _remainder_piby2(double a1, double *a2, double *a3, _DWORD *a4)
{
  __int64 v5; // r10
  int v6; // r11d
  int v9; // edx
  __int64 v10; // r8
  int v11; // r11d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r9
  int v45; // edx
  unsigned int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rdi
  unsigned __int64 v49; // r9
  _QWORD *v50; // r8
  __int64 v51; // r8
  _QWORD *v52; // rax
  unsigned __int64 v53; // r8
  int v54; // r11d
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  double v57; // xmm8_8
  double v58; // xmm7_8
  double v59; // xmm7_8
  unsigned __int64 result; // rax
  double v61; // xmm5_8
  __int64 v62; // [rsp+18h] [rbp-F0h]
  _QWORD v63[499]; // [rsp+20h] [rbp-E8h] BYREF

  v63[18] = 0LL;
  v5 = *(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  v6 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) - 1023;
  v9 = v6 / 10;
  v10 = v6 / 10;
  v11 = v6 % 10;
  v12 = v5 * qword_18015FB30[v9 + 18];
  v13 = (v12 >> 10) + v5 * qword_18015FB30[v10 + 17];
  v14 = qword_18015FB30[v10 + 16];
  v63[17] = v12 & 0x3FF;
  v63[16] = v13 & 0x3FF;
  v15 = (v13 >> 10) + v5 * v14;
  v16 = (v15 >> 10) + v5 * qword_18015FB30[v10 + 15];
  v17 = v15 & 0x3FF;
  v18 = qword_18015FB30[v10 + 14];
  v63[15] = v17;
  v63[14] = v16 & 0x3FF;
  v19 = (v16 >> 10) + v5 * v18;
  v20 = (v19 >> 10) + v5 * qword_18015FB30[v10 + 13];
  v21 = v19 & 0x3FF;
  v22 = qword_18015FB30[v10 + 12];
  v63[13] = v21;
  v63[12] = v20 & 0x3FF;
  v23 = (v20 >> 10) + v5 * v22;
  v24 = (v23 >> 10) + v5 * qword_18015FB30[v10 + 11];
  v63[11] = v23 & 0x3FF;
  v63[10] = v24 & 0x3FF;
  v25 = (v24 >> 10) + v5 * qword_18015FB30[v10 + 10];
  v26 = qword_18015FB30[v10 + 9];
  v63[9] = v25 & 0x3FF;
  v27 = (v25 >> 10) + v5 * v26;
  v28 = (v27 >> 10) + v5 * qword_18015FB30[v10 + 8];
  v29 = v27 & 0x3FF;
  v30 = qword_18015FB30[v10 + 7];
  v63[8] = v29;
  v63[7] = v28 & 0x3FF;
  v31 = (v28 >> 10) + v5 * v30;
  v32 = (v31 >> 10) + v5 * qword_18015FB30[v10 + 6];
  v33 = v31 & 0x3FF;
  v34 = qword_18015FB30[v10 + 5];
  v63[6] = v33;
  v63[5] = v32 & 0x3FF;
  v35 = (v32 >> 10) + v5 * v34;
  LOWORD(v33) = v35;
  v36 = (v35 >> 10) + v5 * qword_18015FB30[v10 + 4];
  v37 = qword_18015FB30[v10 + 3];
  v63[4] = v33 & 0x3FF;
  v63[3] = v36 & 0x3FF;
  v38 = (v36 >> 10) + v5 * v37;
  v39 = (v38 >> 10) + v5 * qword_18015FB30[v10 + 2];
  v63[2] = v38 & 0x3FF;
  v63[1] = v39 & 0x3FF;
  v40 = qword_18015FB30[v10 + 1];
  v41 = v5 * qword_18015FB30[v10];
  v42 = (v39 >> 10) + v5 * v40;
  v43 = v42 >> 10;
  v44 = v42 & 0x3FF;
  v63[0] = v44;
  v62 = ((_WORD)v43 + (_WORD)v41) & 0x3FF;
  v45 = 1;
  v46 = (((v44 | (v62 << 10)) >> (10 - (unsigned __int8)v11 - 1)) & 7) >> 1;
  v47 = (1LL << (10 - (unsigned __int8)v11)) - 1;
  v48 = ((v44 | (v62 << 10)) >> (10 - (unsigned __int8)v11 - 1)) & 1;
  if ( (_DWORD)v48 )
  {
    v49 = v47 & ~v44;
    *a4 = ((_BYTE)v46 + 1) & 3;
    if ( v49 < 0x20000000000000LL )
    {
      v50 = v63;
      do
      {
        ++v50;
        ++v45;
        v49 = (v49 << 10) | ~*v50 & 0x3FFLL;
      }
      while ( v49 < 0x20000000000000LL );
    }
    v51 = ~v63[v45];
  }
  else
  {
    *a4 = v46;
    v52 = v63;
    v49 = v47 & v44;
    do
    {
      v49 = *++v52 | (v49 << 10);
      ++v45;
    }
    while ( v49 < 0x20000000000000LL );
    v51 = v63[v45];
  }
  v53 = v51 << 54;
  v54 = v11 - 10 * v45 + 52;
  while ( v49 >= 0x20000000000000LL )
  {
    ++v54;
    v53 = (v53 >> 1) | (v49 << 63);
    v49 >>= 1;
  }
  v55 = (__int64)v54 << 52;
  v56 = v49 & 0xFFFFFFFFFFFFFLL | (v55 + 0x3FF0000000000000LL) | 0x8000000000000000uLL;
  if ( !(_DWORD)v48 )
    v56 = v49 & 0xFFFFFFFFFFFFFLL | (v55 + 0x3FF0000000000000LL);
  v57 = *(double *)&v56;
  v58 = COERCE_DOUBLE((v55 + 0x3CA0000000000000LL) | (v53 >> 12)) - COERCE_DOUBLE(v55 + 0x3CA0000000000000LL);
  if ( (_DWORD)v48 )
    v59 = v58 * -2.0;
  else
    v59 = v58 + v58;
  result = v56 & 0xFFFFFFFFF8000000uLL;
  v61 = COERCE_DOUBLE(*(_QWORD *)&v57 & 0xFFFFFFFFF8000000uLL) * 1.570796310901642
      - v57 * 1.570796326794897
      + (v57 - COERCE_DOUBLE(*(_QWORD *)&v57 & 0xFFFFFFFFF8000000uLL)) * 1.570796310901642
      + COERCE_DOUBLE(*(_QWORD *)&v57 & 0xFFFFFFFFF8000000uLL) * 0.00000001589325471229586
      + (v57 - COERCE_DOUBLE(*(_QWORD *)&v57 & 0xFFFFFFFFF8000000uLL)) * 0.00000001589325471229586
      + v59 * 1.570796326794897
      + v57 * 6.123233995736765e-17;
  *a2 = v61 + v57 * 1.570796326794897;
  *a3 = v57 * 1.570796326794897 - (v61 + v57 * 1.570796326794897) + v61;
  return result;
}
