/*
 * XREFs of pow @ 0x1C00117B0
 * Callers:
 *     USBCntrlGetSetDbLevel @ 0x1C002E8F0 (USBCntrlGetSetDbLevel.c)
 * Callees:
 *     _pow_special @ 0x1C0011170 (_pow_special.c)
 */

// local variable allocation has failed, the output may be wrong!
double __cdecl pow(double X, double Y)
{
  __m128i v2; // xmm5
  double v3; // r8
  double v4; // xmm6_8
  __m128i v5; // xmm2
  unsigned __int64 v6; // r8
  double v7; // xmm2_8
  double v8; // xmm1_8
  double v9; // xmm4_8
  double v10; // xmm5_8
  double v11; // xmm7_8
  double v12; // xmm2_8
  double v13; // xmm0_8
  double v14; // xmm1_8
  double v15; // xmm3_8
  double v16; // xmm7_8
  double v17; // xmm0_8
  double v18; // xmm7_8
  double v19; // xmm6_8
  double v20; // xmm3_8
  double v21; // xmm0_8
  double v22; // xmm6_8
  __m128d v23; // xmm7
  __int64 v24; // rdx
  __m128i v25; // xmm4
  double v26; // xmm1_8
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rcx
  double v30; // xmm2_8
  int v31; // r9d
  double v32; // xmm0_8
  double v33; // rcx
  double v34; // xmm1_8
  int v35; // r11d
  char v36; // cl
  unsigned __int64 v37; // xmm0_8
  __int64 v38; // r11
  __m128i v39; // xmm2
  __int64 v40; // r11
  signed __int64 v41; // r10
  double v42; // xmm0_8
  double v43; // xmm1_8
  double v44; // xmm3_8
  double v45; // xmm5_8
  double v46; // xmm7_8
  double v47; // xmm2_8
  double v48; // xmm1_8
  double v49; // xmm3_8
  double v50; // xmm2_8
  double v51; // xmm5_8
  double v52; // xmm7_8
  double v53; // xmm4_8
  double v54; // rax
  double v55; // r11
  double v56; // rax
  double v57; // r11
  __int64 v58; // rax
  __int64 v59; // r11
  double v60; // rax
  double v61; // rax
  unsigned int v62; // r9d
  double v63; // rax
  double v64; // r9
  double v65; // [rsp+40h] [rbp-D8h]
  __int64 v67; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+A0h] [rbp-78h]

  v65 = X;
  if ( (*(_QWORD *)&Y & qword_1C00185B8) == 0 )
    return *(double *)&xmmword_1C0018710;
  if ( *(_QWORD *)&Y != qword_1C00185A8 )
  {
    v67 = qword_1C00185B0;
    if ( (*(_QWORD *)&X & qword_1C0018580) != qword_1C0018580 )
    {
      if ( *(_QWORD *)&X == qword_1C00185A8 )
        return X;
      if ( *(_QWORD *)&X == qword_1C00185B0 )
        goto __x_is_zero;
      if ( (*(_QWORD *)&X & qword_1C0018590) == qword_1C0018590 )
        goto __x_is_inf_or_nan;
      if ( (*(_QWORD *)&Y & qword_1C0018590) <= qword_1C0018570 )
      {
        if ( (*(_QWORD *)&Y & qword_1C0018590) < qword_1C0018578 )
          return *(double *)&qword_1C00185A8 + Y;
__log_x:
        v3 = X;
        v4 = _mm_cvtepi32_pd(_mm_sub_epi64(_mm_srli_epi64(*(__m128i *)&X, 0x34u), (__m128i)xmmword_1C00186C0)).m128d_f64[0];
        v5 = _mm_and_si128(*(__m128i *)&X, (__m128i)xmmword_1C00186B0);
        if ( v4 == *(double *)&qword_1C00187A0 )
        {
          v39 = _mm_or_si128(v5, (__m128i)xmmword_1C0018710);
          *(double *)v39.m128i_i64 = *(double *)v39.m128i_i64 - *(double *)&xmmword_1C0018710;
          v2.m128i_i64[0] = v39.m128i_i64[0];
          v5 = _mm_and_si128(v39, (__m128i)xmmword_1C00186B0);
          v3 = *(double *)v5.m128i_i64;
          *(_QWORD *)&v4 = *(_OWORD *)&_mm_cvtepi32_pd(_mm_sub_epi32(_mm_srli_epi64(v2, 0x34u), (__m128i)xmmword_1C00187B0));
        }
        v68 = 2 * (qword_1C0018630 & *(_QWORD *)&v3) + (qword_1C0018628 & *(_QWORD *)&v3);
        v6 = v68 >> 44;
        *(_QWORD *)&v7 = _mm_or_si128(v5, (__m128i)xmmword_1C0018720).m128i_u64[0];
        *(_QWORD *)&v8 = _mm_or_si128((__m128i)v68, (__m128i)xmmword_1C0018720).m128i_u64[0];
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X - *(double *)&xmmword_1C0018710) & xmmword_1C00187D0) < *(double *)&qword_1C00187C0 )
        {
          v42 = v8;
          v43 = v8 - v7;
          v44 = dbl_1C0019800[v6] + dbl_1C001A010[v6];
          *(_QWORD *)&v45 = COERCE_UNSIGNED_INT64(v43 * v44) & xmmword_1C0018640;
          v46 = (v43 - v45 * v42) * v44;
          v47 = v46 + v45;
          v48 = (*(double *)&qword_1C0018760 * v47 + *(double *)&qword_1C0018750) * v47 * (v47 * v47);
          v49 = ((*(double *)&qword_1C0018790 * v47 + *(double *)&qword_1C0018780) * v47 + *(double *)&qword_1C0018770)
              * v47
              * (v47
               * v47
               * (v47
                * v47));
          v50 = v45;
          v51 = v45 * v46 + v46 * v46 * *(double *)&qword_1C0018740 + v46;
          v52 = v50;
          v53 = v50 * v50 * *(double *)&qword_1C0018740;
          v12 = v50 + v53;
          v14 = *(double *)&qword_1C00186F0 * v4 + dbl_1C0018FF0[v6] - (v48 + v49 + v52 - v12 + v53 + v51);
          v15 = v14 - v12;
          v13 = dbl_1C00187E0[v6];
        }
        else
        {
          v9 = v8 - v7;
          v10 = v9 * dbl_1C0019800[v6];
          v11 = v9 * dbl_1C001A010[v6];
          v12 = v10 + v11;
          v13 = dbl_1C00187E0[v6];
          v14 = dbl_1C0018FF0[v6]
              + *(double *)&qword_1C00186F0 * v4
              - ((*(double *)&qword_1C0018750 * v12 + *(double *)&qword_1C0018740) * (v12 * v12)
               + ((*(double *)&qword_1C0018780 * v12 + *(double *)&qword_1C0018770) * v12 + *(double *)&qword_1C0018760)
               * (v12
                * v12
                * (v12
                 * v12))
               + v11
               + v10
               - v12);
          v15 = v14 - v12;
        }
        v16 = v13 + *(double *)&qword_1C00186E0 * v4;
        *(_QWORD *)&v17 = COERCE_UNSIGNED_INT64(v16 + v15) & xmmword_1C0018640;
        v18 = v16 - (v16 + v15) + v15 + v14 - (v12 + v15) + v16 + v15 - v17;
        v19 = v17 * COERCE_DOUBLE(xmmword_1C0018640 & *(_QWORD *)&Y);
        v20 = (Y - COERCE_DOUBLE(xmmword_1C0018640 & *(_QWORD *)&Y)) * v18
            + (Y - COERCE_DOUBLE(xmmword_1C0018640 & *(_QWORD *)&Y)) * v17
            + v18 * COERCE_DOUBLE(xmmword_1C0018640 & *(_QWORD *)&Y);
        v21 = v19 + v20;
        v22 = v19 - v21 + v20;
        v23 = (__m128d)(unsigned __int64)qword_1C001A890;
        v23.m128d_f64[0] = *(double *)&qword_1C001A890 * v21;
        v24 = *(_QWORD *)&v21;
        if ( *(double *)&qword_1C001A890 * v21 <= *(double *)&qword_1C001A870 )
        {
          if ( v23.m128d_f64[0] < *(double *)&qword_1C001A880 )
          {
            v38 = v67 | qword_1C001A840;
__z_is_zero_or_inf:
            v62 = dword_1C0018558;
            if ( (v38 & qword_1C00185B8) != 0 )
              v62 = dword_1C0018560;
            *(_QWORD *)&X = pow_special(v65, Y, *(double *)&v38, v62).m128_u64[0];
            return X;
          }
          v25 = _mm_cvtpd_epi32(v23);
          v26 = _mm_cvtepi32_pd(v25).m128d_f64[0];
          v27 = _mm_cvtsi128_si32(v25);
          v28 = v27 & 0x3F;
          v29 = (unsigned int)((v27 - (int)v28) >> 6);
          v31 = 0;
          if ( (int)v29 <= dword_1C001A820 )
            v31 = v29;
          *(_QWORD *)&v33 = (v29 + 1023) << 52;
          v30 = v21 - *(double *)&qword_1C001A8A0 * v26 + v26 * *(double *)&qword_1C001A8B0 + v22;
          v32 = (*(double *)&qword_1C001A900 * v30 + *(double *)&xmmword_1C0018710) * v30
              + (*(double *)&qword_1C001A8E0 * v30 + *(double *)&qword_1C001A8F0) * (v30 * v30 * v30)
              + (*(double *)&qword_1C001A8C0 * v30 + *(double *)&qword_1C001A8D0) * (v30 * v30 * (v30 * v30 * v30));
          v34 = dbl_1C001A910[v28] * v32 + dbl_1C001AB10[v28] * v32 + dbl_1C001AB10[v28] + dbl_1C001A910[v28];
          if ( *(_QWORD *)&v33 != qword_1C0018690 )
          {
            if ( v31 )
            {
              v35 = 0;
              if ( v34 >= *(double *)&xmmword_1C0018710 )
                v35 = v31;
              if ( v35 == dword_1C001A820 )
              {
                *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * v33) | v67;
              }
              else
              {
                if ( v24 > qword_1C001A860 )
                {
                  v37 = qword_1C001A850 | v67;
                }
                else
                {
                  v36 = v31 + 50;
                  if ( v31 + 1074 < 0 )
                    v36 = 0;
                  v37 = COERCE_UNSIGNED_INT64(v34 * COERCE_DOUBLE(1LL << v36)) | v67;
                }
                *(_QWORD *)&X = pow_special(v65, Y, *(double *)&v37, dword_1C001855C).m128_u64[0];
              }
            }
            else
            {
              *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * v33) | v67;
            }
            return X;
          }
          if ( v34 < *(double *)&xmmword_1C0018710 )
          {
            *(_QWORD *)&X = *(_QWORD *)&v34 | xmmword_1C001A830 | v67;
            return X;
          }
        }
        v38 = v67 | qword_1C0018690;
        goto __z_is_zero_or_inf;
      }
      goto __ay_is_very_large;
    }
    if ( (*(_QWORD *)&Y & qword_1C0018590) > qword_1C0018570 )
    {
__ay_is_very_large:
      if ( (*(_QWORD *)&X & qword_1C0018590) != qword_1C0018590 )
      {
        if ( (*(_QWORD *)&X & qword_1C00185B8) != 0 )
        {
          if ( *(_QWORD *)&X != qword_1C00185E8 )
          {
            if ( (qword_1C00185B8 & *(_QWORD *)&X) < qword_1C00185A8 )
            {
              *(double *)&v38 = 0.0;
              if ( (*(_QWORD *)&Y & qword_1C0018580) != 0 )
                v38 = qword_1C00185A0;
            }
            else
            {
              *(double *)&v38 = 0.0;
              if ( (*(_QWORD *)&Y & qword_1C0018580) == 0 )
                v38 = qword_1C00185A0;
            }
            v61 = 0.0;
            if ( (*(_QWORD *)&Y & qword_1C0018590) == qword_1C0018590 )
              v61 = Y;
            if ( (*(_QWORD *)&v61 & qword_1C00185C0) == 0 )
            {
              if ( v61 != 0.0 )
                return *(double *)&v38;
              goto __z_is_zero_or_inf;
            }
            v57 = Y;
__y_is_nan:
            *(_QWORD *)&X = pow_special(X, Y, v57, dword_1C001854C).m128_u64[0];
            return X;
          }
__x_is_neg_one:
          v56 = 0.0;
          v57 = Y;
          if ( (*(_QWORD *)&Y & qword_1C0018590) == qword_1C0018590 )
            v56 = Y;
          if ( (*(_QWORD *)&v56 & qword_1C00185C0) == 0 )
          {
            *(_QWORD *)&X = v67 | qword_1C00185A8;
            return X;
          }
          goto __y_is_nan;
        }
__x_is_zero:
        if ( (*(_QWORD *)&Y & qword_1C0018590) == qword_1C0018590 )
        {
          v57 = Y;
          if ( *(_QWORD *)&Y != qword_1C0018598 )
          {
            if ( (*(_QWORD *)&Y & qword_1C00185C0) == 0 )
              return 0.0;
            goto __y_is_nan;
          }
          v58 = qword_1C00185A0;
        }
        else
        {
          if ( (*(_QWORD *)&Y & qword_1C0018580) == 0 )
            return *(double *)&v67;
          v58 = qword_1C00185A0;
        }
        *(_QWORD *)&X = pow_special(X, Y, COERCE_DOUBLE(v58 | v67), dword_1C0018544).m128_u64[0];
        return X;
      }
      goto __x_is_inf_or_nan;
    }
    v40 = *(_QWORD *)&Y & qword_1C00185B8;
    v41 = ((*(_QWORD *)&Y & (unsigned __int64)qword_1C00185B8) >> qword_1C00185F8) - qword_1C0018600;
    if ( v41 >= 0 )
    {
      if ( v41 > qword_1C0018610 )
      {
__continue_after_y_int_check:
        if ( *(_QWORD *)&X == qword_1C00185F0 )
          goto __x_is_zero;
        if ( *(_QWORD *)&X == qword_1C00185E8 )
          goto __x_is_neg_one;
        if ( (*(_QWORD *)&X & qword_1C0018590) != qword_1C0018590 )
        {
          *(_OWORD *)&X = *(_QWORD *)&X & (unsigned __int64)qword_1C00185B8;
          goto __log_x;
        }
__x_is_inf_or_nan:
        v59 = 0LL;
        if ( (*(_QWORD *)&Y & qword_1C0018580) == 0 )
          v59 = qword_1C00185A0;
        if ( (*(_QWORD *)&X & qword_1C00185C0) == 0 )
        {
          v60 = 0.0;
          if ( (*(_QWORD *)&Y & qword_1C0018590) == qword_1C0018590 )
            v60 = Y;
          if ( (*(_QWORD *)&v60 & qword_1C00185C0) == 0 )
          {
            *(_QWORD *)&X = v59 | v67;
            return X;
          }
          v57 = Y;
          goto __y_is_nan;
        }
        v55 = X;
        goto __x_is_nan;
      }
      if ( (v40 & ((unsigned __int64)qword_1C0018618 >> v41)) == 0 )
      {
        if ( (v40 & ((unsigned __int64)qword_1C0018620 >> v41)) != 0 )
          v67 = qword_1C0018580;
        goto __continue_after_y_int_check;
      }
    }
    if ( (*(_QWORD *)&X & qword_1C0018590) != qword_1C0018590 )
    {
      if ( *(_QWORD *)&X != qword_1C00185F0 )
      {
        *(_QWORD *)&X = pow_special(X, Y, *(double *)&qword_1C00185D0, dword_1C0018554).m128_u64[0];
        return X;
      }
      goto __x_is_zero;
    }
    goto __x_is_inf_or_nan;
  }
  v54 = 0.0;
  v55 = X;
  if ( (*(_QWORD *)&X & qword_1C0018590) == qword_1C0018590 )
    v54 = X;
  if ( (*(_QWORD *)&v54 & qword_1C00185C0) != 0 )
  {
__x_is_nan:
    v63 = 0.0;
    if ( (*(_QWORD *)&Y & qword_1C0018590) == qword_1C0018590 )
      v63 = Y;
    if ( (*(_QWORD *)&v63 & qword_1C00185C0) != 0 )
    {
      v64 = Y;
      if ( *(_QWORD *)&v55 == qword_1C00185C8 )
      {
        v55 = Y;
      }
      else
      {
        if ( *(_QWORD *)&Y == qword_1C00185C8 )
          v64 = v55;
        if ( (qword_1C0018580 & *(_QWORD *)&v64) != 0 )
          v64 = v55;
        if ( (qword_1C0018580 & *(_QWORD *)&v55) != 0 )
          v55 = v64;
      }
      *(_QWORD *)&X = pow_special(X, Y, v55, dword_1C0018550).m128_u64[0];
    }
    else
    {
      *(_QWORD *)&X = pow_special(X, Y, v55, dword_1C0018548).m128_u64[0];
    }
  }
  return X;
}
