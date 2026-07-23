/*
 * XREFs of atan2 @ 0x1800921F0
 * Callers:
 *     <none>
 * Callees:
 *     _controlfp @ 0x180097CE8 (_controlfp.c)
 *     _handle_error @ 0x180097E24 (_handle_error.c)
 */

double __cdecl atan2(double Y, double X)
{
  double v2; // xmm8_8
  double v3; // rdi
  double v4; // xmm9_8
  __int64 v5; // r15
  __int64 v6; // rdx
  int v7; // esi
  unsigned __int64 v8; // r13
  int v9; // r8d
  unsigned __int64 v10; // rbx
  __int64 v11; // xmm6_8
  __int64 v12; // xmm0_8
  double v13; // xmm0_8
  unsigned __int64 v14; // rcx
  __int64 v15; // xmm0_8
  double v16; // xmm0_8
  double v17; // rsi
  unsigned int v18; // edx
  unsigned int v19; // ecx
  double v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // r8d
  double v24; // xmm0_8
  double v25; // xmm5_8
  __int64 v26; // rcx
  double v27; // xmm7_8
  double v28; // xmm10_8
  double v29; // xmm6_8
  int v30; // kr00_4
  double v31; // xmm3_8
  double v32; // xmm4_8
  double v33; // xmm10_8

  v2 = Y;
  v3 = Y;
  v4 = X;
  v5 = (*(_QWORD *)&X >> 52) & 0x7FFLL;
  v6 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v7 = ((*(_QWORD *)&Y >> 52) & 0x7FF) - v5;
  v8 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    v9 = LODWORD(X);
LABEL_3:
    handle_error((unsigned int)"atan2", 16, v9, 1, 0, 33, *(__int64 *)&X, *(__int64 *)&Y, 2);
    return Y;
  }
  v10 = 0LL;
  if ( v8 > 0x7FF0000000000000LL )
  {
    v9 = LODWORD(Y);
    goto LABEL_3;
  }
  if ( !v8 )
  {
    if ( X >= 0.0 )
      return Y;
    goto LABEL_8;
  }
  if ( !v6 )
  {
    if ( Y < 0.0 )
    {
      v11 = qword_18015FAE0;
      goto LABEL_32;
    }
    controlfp(0x10u, 0x10u);
    v6 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( (unsigned int)v5 < 0x3FD && ((unsigned __int16)(*(_QWORD *)&Y >> 52) & 0x7FFu) < 0x3FD )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0 )
    {
      v14 = *(_QWORD *)&X + 0x4000000000000000LL;
    }
    else
    {
      v12 = *(_QWORD *)&X | 0x4010000000000000LL;
      if ( X >= 0.0 )
        v13 = *(double *)&v12 + -4.0;
      else
        v13 = *(double *)&v12 + 4.0;
      *(double *)&v14 = v13;
    }
    if ( (*(_QWORD *)&v3 & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)&v3 + 0x4000000000000000LL;
    }
    else
    {
      v15 = *(_QWORD *)&v3 | 0x4010000000000000LL;
      if ( v3 >= 0.0 )
        v16 = *(double *)&v15 + -4.0;
      else
        v16 = *(double *)&v15 + 4.0;
      v17 = v16;
    }
    v4 = *(double *)&v14;
    v2 = v17;
    v7 = ((*(_QWORD *)&v17 >> 52) & 0x7FF) - ((v14 >> 52) & 0x7FF);
  }
  if ( v7 > 56 )
  {
    v11 = qword_18015FAE0;
    goto LABEL_31;
  }
  if ( v7 >= -28 || X < 0.0 )
  {
    if ( v7 < -56 && X < 0.0 )
    {
LABEL_8:
      v11 = qword_18015FAD8;
      if ( v3 < 0.0 )
        v11 = qword_18015FAD8 ^ _xmm;
      goto LABEL_33;
    }
    if ( v8 == 0x7FF0000000000000LL && v6 == 0x7FF0000000000000LL )
    {
      if ( X >= 0.0 )
        v11 = qword_18015FAE8;
      else
        v11 = qword_18015FAF0;
LABEL_31:
      if ( v3 >= 0.0 )
      {
LABEL_33:
        v18 = 16;
        v19 = 16;
        goto LABEL_34;
      }
LABEL_32:
      v11 ^= _xmm;
      goto LABEL_33;
    }
    if ( X < 0.0 )
      *(_QWORD *)&v4 ^= _xmm;
    if ( v3 < 0.0 )
      *(_QWORD *)&v2 ^= _xmm;
    v23 = 0;
    LOBYTE(v23) = v2 > v4;
    if ( v2 > v4 )
    {
      v24 = v4;
      v4 = v2;
      v2 = v24;
    }
    v25 = v2 / v4;
    if ( v2 / v4 <= 0.0625 )
    {
      v28 = 0.0;
      if ( v25 >= 0.00000001 )
        v25 = (v2
             - COERCE_DOUBLE(*(_QWORD *)&v25 & 0xFFFFFFFF00000000uLL)
             * COERCE_DOUBLE(*(_QWORD *)&v4 & 0xFFFFFFFF00000000uLL)
             - (v4 - COERCE_DOUBLE(*(_QWORD *)&v4 & 0xFFFFFFFF00000000uLL))
             * COERCE_DOUBLE(*(_QWORD *)&v25 & 0xFFFFFFFF00000000uLL)
             - (v25 - COERCE_DOUBLE(*(_QWORD *)&v25 & 0xFFFFFFFF00000000uLL)) * v4)
            / v4
            - (0.3333333333333317
             - (0.1999999999939322
              - (0.1428571356180717 - (0.1111073628351453 - v25 * v25 * 0.09002981028544979) * (v25 * v25))
              * (v25
               * v25))
             * (v25
              * v25))
            * (v25
             * v25
             * v25)
            + v25;
    }
    else
    {
      v26 = (unsigned int)((int)(v25 * 256.0 + 0.5) - 16);
      v27 = qword_18011E4F0[v26];
      v28 = qword_18011DD60[v26];
      v29 = (double)(int)(v25 * 256.0 + 0.5) * 0.00390625;
      v30 = 1023 - ((*(_QWORD *)&v4 >> 52) & 0x7FF);
      LODWORD(v26) = v30 - v30 / 2;
      v31 = COERCE_DOUBLE((v30 / 2 + 1023LL) << 52) * v2 * COERCE_DOUBLE(((int)v26 + 1023LL) << 52);
      v32 = (v31
           - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(COERCE_DOUBLE((v30 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v26 + 1023LL) << 52)) & 0xFFFFFFFFF8000000uLL)
           * v29
           - (COERCE_DOUBLE((v30 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v26 + 1023LL) << 52)
            - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(COERCE_DOUBLE((v30 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v26 + 1023LL) << 52)) & 0xFFFFFFFFF8000000uLL))
           * v29)
          / (v29 * v31 + COERCE_DOUBLE((v30 / 2 + 1023LL) << 52) * v4 * COERCE_DOUBLE(((int)v26 + 1023LL) << 52));
      v25 = v32 + v27 - (0.333333333332241 - v32 * v32 * 0.1999991803898914) * (v32 * v32) * v32;
    }
    if ( v23 )
    {
      v28 = *(double *)&qword_18015FB08 - v28;
      v25 = *(double *)&qword_18015FB10 - v25;
    }
    if ( X < 0.0 )
    {
      v28 = *(double *)&qword_18015FAF8 - v28;
      v25 = *(double *)&qword_18015FB00 - v25;
    }
    v33 = v28 + v25;
    if ( v3 < 0.0 )
      *(_QWORD *)&v33 ^= _xmm;
    return v33;
  }
  else if ( v7 >= -1074 )
  {
    if ( v7 < -1022 )
    {
      v20 = fabs(1.267650600228229e30 * v2 / v4);
      v21 = *(_QWORD *)&v20 >> 52;
      if ( (unsigned int)(*(_QWORD *)&v20 >> 52) <= 0x64 )
      {
        v22 = *(_QWORD *)&v20 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
        if ( 101 - (int)v21 <= 54 )
          v10 = ((v22 >> (101 - (unsigned __int8)v21 - 1)) & 1) + (v22 >> (101 - (unsigned __int8)v21 - 1) >> 1);
      }
      else
      {
        v10 = *(_QWORD *)&v20 & 0x800FFFFFFFFFFFFFuLL | ((v21 - 100) << 52);
      }
      v11 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v2 / v4) & 0x8000000000000000uLL | v10;
      if ( (v10 & 0x7FF0000000000000LL) != 0 )
        return *(double *)&v11;
      v19 = 18;
      v18 = 18;
LABEL_34:
      controlfp(v19, v18);
      return *(double *)&v11;
    }
    return v2 / v4;
  }
  else
  {
    controlfp(0x12u, 0x12u);
    if ( v3 >= 0.0 )
      return 0.0;
    else
      return DOUBLE_N0_0;
  }
}
