/*
 * XREFs of vFillGLYPHDATA @ 0x1C0221048
 * Callers:
 *     lQueryTTOutline @ 0x1C021DB14 (lQueryTTOutline.c)
 *     lGGOBitmap @ 0x1C021F1E4 (lGGOBitmap.c)
 *     lGetGlyphBitmap @ 0x1C021F444 (lGetGlyphBitmap.c)
 *     vShiftOutlineInfo @ 0x1C0224288 (vShiftOutlineInfo.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     bGetFastAdvanceWidth @ 0x1C021E3B4 (bGetFastAdvanceWidth.c)
 *     b_fxA_and_fxAB_are_Ok @ 0x1C021EED8 (b_fxA_and_fxAB_are_Ok.c)
 *     vGetNotionalGlyphMetrics @ 0x1C0221CE4 (vGetNotionalGlyphMetrics.c)
 *     vGetVertNotionalMetrics @ 0x1C0221E50 (vGetVertNotionalMetrics.c)
 *     vLTimesVtfl @ 0x1C022AD5C (vLTimesVtfl.c)
 */

__int64 __fastcall vFillGLYPHDATA(int a1, unsigned int a2, __int64 a3, __int64 a4, _QWORD *a5, int *a6, __int64 *a7)
{
  _DWORD *v7; // rbx
  unsigned int v9; // r9d
  unsigned int v11; // r12d
  int v12; // r13d
  int v13; // r15d
  int v14; // eax
  int v15; // eax
  int *v16; // rsi
  int v17; // r10d
  int v18; // ecx
  int v19; // edx
  int v20; // r11d
  int v21; // r9d
  int v22; // eax
  int v23; // r8d
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // r15d
  int v29; // eax
  int v30; // ecx
  unsigned int *v31; // r15
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  __int64 result; // rax
  int v45; // r9d
  int v46; // edx
  int v47; // r9d
  int v48; // ecx
  int v49; // ecx
  int v50; // eax
  unsigned int v51; // r9d
  bool v52; // cf
  float v53; // xmm0_4
  int v54; // ecx
  int v55; // eax
  int v56; // edx
  float v57; // xmm0_4
  int v58; // ecx
  __m128i v59; // xmm0
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // eax
  int v64; // r11d
  int v65; // eax
  int v66; // eax
  int v67; // eax
  unsigned int v68; // r14d
  int v69; // edx
  __int16 v70; // [rsp+30h] [rbp-18h] BYREF
  __int16 v71; // [rsp+32h] [rbp-16h]
  unsigned __int16 v72; // [rsp+34h] [rbp-14h]
  __int16 v73; // [rsp+36h] [rbp-12h]
  __int16 v74; // [rsp+38h] [rbp-10h]
  __int16 v75; // [rsp+3Ah] [rbp-Eh]
  int v76; // [rsp+90h] [rbp+48h]
  __int64 v78; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v79; // [rsp+A8h] [rbp+60h] BYREF

  v7 = a5;
  v9 = a2;
  if ( !*(_DWORD *)(a3 + 308) || (v11 = 1, (*(_DWORD *)(a3 + 304) & 2) == 0) )
    v11 = 0;
  v12 = *(__int16 *)(a4 + 104) - *(__int16 *)(a4 + 100);
  v13 = *(__int16 *)(a4 + 102) - *(__int16 *)(a4 + 98);
  *a5 = 0LL;
  v7[2] = a1;
  v14 = *(__int16 *)(a4 + 100);
  v79 = v11;
  v76 = v13;
  if ( v14 > *(_DWORD *)(a3 + 156)
    || *(__int16 *)(a4 + 104) < *(_DWORD *)(a3 + 152)
    || -*(__int16 *)(a4 + 102) > *(_DWORD *)(a3 + 164)
    || (v15 = 0, -*(__int16 *)(a4 + 98) < *(_DWORD *)(a3 + 160)) )
  {
    v15 = 1;
  }
  v16 = a6;
  if ( !v12 )
  {
LABEL_36:
    v29 = *(_DWORD *)(a3 + 200);
    v7[8] = v29;
    v30 = *(_DWORD *)(a3 + 204);
    v7[10] = v29 + 1;
    v7[9] = v30;
    v7[11] = v30 + 1;
    if ( v16 )
      *((_QWORD *)v16 + 2) = 0LL;
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( !v13 || v15 )
    {
LABEL_35:
      v9 = a2;
      goto LABEL_36;
    }
    v17 = *(__int16 *)(a4 + 100);
    v18 = -*(__int16 *)(a4 + 98);
    v7[11] = v18;
    v19 = -*(__int16 *)(a4 + 102);
    v7[9] = v19;
    v20 = v17 + v12;
    if ( !v16 )
      goto LABEL_44;
    v21 = *(_DWORD *)(a3 + 160) - v19;
    v22 = *(_DWORD *)(a3 + 164);
    if ( v19 >= *(_DWORD *)(a3 + 160) )
      v21 = 0;
    v23 = v18 - v22;
    if ( v18 <= v22 )
      v23 = 0;
    if ( !v21 && !v23 )
      break;
    v13 -= v23 + v21;
    v7[11] = v18 - v23;
    v76 = v13;
    v24 = 10;
    v7[9] = v21 + v19;
    if ( *(int *)(a3 + 124) > 10 )
      v24 = *(_DWORD *)(a3 + 124);
    if ( v21 <= v24 && v23 <= v24 )
      break;
LABEL_34:
    v15 = 1;
    if ( !v12 )
      goto LABEL_35;
  }
  v25 = *(_DWORD *)(a3 + 152) - v17;
  v26 = *(_DWORD *)(a3 + 156);
  if ( v17 >= *(_DWORD *)(a3 + 152) )
    v25 = 0;
  v27 = v20 - v26;
  if ( v20 <= v26 )
    v27 = 0;
  if ( !v25 && !v27 )
    goto LABEL_43;
  v17 += v25;
  v12 -= v27 + v25;
  v20 -= v27;
  v28 = 10;
  if ( *(_DWORD *)(a3 + 168) >> 2 > 0xAu )
    v28 = *(_DWORD *)(a3 + 168) >> 2;
  if ( v25 > v28 || v27 > v28 )
  {
    v13 = v76;
    goto LABEL_34;
  }
  v13 = v76;
LABEL_43:
  *v16 = v21;
  v16[1] = v23;
  v16[2] = v25;
  v16[3] = v27;
  v16[4] = v12;
  v16[5] = v13;
LABEL_44:
  v9 = a2;
  v7[8] = v17;
  v7[10] = v20;
LABEL_38:
  v31 = v7 + 3;
  if ( (*(_DWORD *)(a3 + 116) & 1) == 0 )
  {
    LODWORD(v78) = *(_DWORD *)(a3 + 40) & 0x2000;
    vGetNotionalGlyphMetrics(a3, v9, &v70);
    LODWORD(a5) = 0;
    bFToL((float)v75 * *(float *)(a3 + 224), (int *)&a5, 0);
    v45 = (int)a5;
    *v31 = (unsigned int)a5;
    if ( (*(_DWORD *)(a3 + 116) & 2) == 0 )
    {
      if ( v79 )
      {
        vGetVertNotionalMetrics(a3, a2, v72, (unsigned int)&a5, (__int64)&v79);
        vLTimesVtfl((unsigned int)a5, a3 + 208, v7 + 12);
        LODWORD(v78) = 0;
        bFToL((float)(int)a5 * *(float *)(a3 + 224), (int *)&v78, 0);
        v59 = _mm_cvtsi32_si128(v79);
        *v31 = v78;
        LODWORD(v78) = ((*(int *)(a4 + 80) >> 15) + 1) >> 1;
        v60 = *(_DWORD *)(a4 + 84);
        LODWORD(a5) = 0;
        HIDWORD(v78) = -(((v60 >> 15) + 1) >> 1);
        bFToL(_mm_cvtepi32_ps(v59).m128_f32[0] * *(float *)(a3 + 224), (int *)&a5, 0);
        v61 = v73 - (__int16)v72;
        v7[4] = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)(int)(v79 + v61) * *(float *)(a3 + 224), (int *)&a5, 0);
        v62 = v71;
        v7[5] = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)v62 * *(float *)(a3 + 264), (int *)&a5, 0);
        v63 = v70;
      }
      else
      {
        vLTimesVtfl((unsigned int)v75, a3 + 208, v7 + 12);
        v64 = *(_DWORD *)(a4 + 80);
        HIDWORD(v78) = -(((*(int *)(a4 + 84) >> 15) + 1) >> 1);
        LODWORD(v78) = ((v64 >> 15) + 1) >> 1;
        LODWORD(a5) = 0;
        bFToL((float)v74 * *(float *)(a3 + 224), (int *)&a5, 0);
        v65 = v71;
        v7[4] = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)v65 * *(float *)(a3 + 224), (int *)&a5, 0);
        v66 = (__int16)v72;
        v7[5] = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)v66 * *(float *)(a3 + 264), (int *)&a5, 0);
        v63 = v73;
      }
      v7[6] = -(int)a5;
      LODWORD(a5) = 0;
      bFToL((float)v63 * *(float *)(a3 + 264), (int *)&a5, 0);
      v7[7] = -(int)a5;
      if ( (*(_DWORD *)(a3 + 40) & 0x2000) != 0 )
      {
        if ( v7[13] || v7[15] )
        {
          v7[12] += *(_DWORD *)(a3 + 232);
          v7[13] += *(_DWORD *)(a3 + 236) + (v7[12] < *(_DWORD *)(a3 + 232));
          v7[14] += *(_DWORD *)(a3 + 240);
          v7[15] += *(_DWORD *)(a3 + 244) + (v7[14] < *(_DWORD *)(a3 + 240));
          *v31 += 16;
        }
        v7[5] += 16 * *(unsigned __int16 *)(a3 + 400);
      }
      v67 = v7[5];
      v7[4] &= 0xFFFFFFF0;
      v7[7] &= 0xFFFFFFF0;
      v7[5] = (v67 + 15) & 0xFFFFFFF0;
      result = (v7[6] + 15) & 0xFFFFFFF0;
      v7[6] = result;
      if ( v16 && v16[4] && v16[5] )
      {
        v68 = 0;
        while ( 1 )
        {
          result = b_fxA_and_fxAB_are_Ok(a3, (__int64)v7, (int *)&v78, v16[4], v16[5]);
          if ( (_DWORD)result )
            break;
          result = v68++;
          if ( (int)result >= 2000 )
            break;
          v7[4] -= 16;
          v7[5] += 16;
          v69 = v7[6] + 16;
          if ( v69 >= 16 * *(_DWORD *)(a3 + 144) )
            v69 = v7[6];
          else
            v7[6] = v69;
          if ( v7[7] - 16 > -16 * *(_DWORD *)(a3 + 148) )
            v7[6] = v69 - 16;
        }
      }
      if ( a7 )
      {
        result = v78;
        *a7 = v78;
      }
      goto LABEL_104;
    }
    if ( v11 )
    {
      v46 = v7[11] - v7[9];
      v47 = ((*(int *)(a4 + 204) >> 15) + 1) >> 1;
      v48 = ((*(int *)(a4 + 216) >> 15) + 1) >> 1;
      if ( *(int *)(a3 + 84) >= 0 )
      {
        v47 = -v47;
        v50 = v46 - v48;
        v49 = -v48;
      }
      else
      {
        v49 = -v48;
        v50 = v49 + v46;
      }
      v7[9] = v49;
      v7[11] = v50;
      *((_QWORD *)v7 + 6) = 0LL;
      v7[14] = 0;
      v51 = 16 * v47;
    }
    else
    {
      *((_QWORD *)v7 + 6) = 0LL;
      v7[14] = 0;
      v51 = ((v45 & 0xFFFFFFF8) + 8) & 0xFFFFFFF0;
      *v31 = v51;
      if ( !v51 )
      {
LABEL_72:
        v53 = *(float *)(a3 + 220);
        v54 = -16 * v7[9];
        if ( v53 >= 0.0 )
          v54 = 16 * v7[11];
        v55 = -v51;
        if ( v53 >= 0.0 )
          v55 = v51;
        v56 = -16 * v7[11];
        if ( v53 >= 0.0 )
          v56 = 16 * v7[9];
        v7[4] = v56;
        v7[5] = v54;
        v7[15] = v55;
        v57 = *(float *)(a3 + 256);
        result = (unsigned int)(-16 * v7[10]);
        if ( v57 >= 0.0 )
          result = (unsigned int)(16 * v7[8]);
        v58 = -16 * v7[8];
        if ( v57 >= 0.0 )
          v58 = 16 * v7[10];
        v7[6] = v58;
        v7[7] = result;
        goto LABEL_104;
      }
      v52 = (_DWORD)v78 != 0;
      LODWORD(v78) = -(int)v78;
      v51 += v52 ? 0x10 : 0;
    }
    *v31 = v51;
    goto LABEL_72;
  }
  if ( v11 )
  {
    v32 = *(_DWORD *)(a4 + 208);
    goto LABEL_41;
  }
  if ( (unsigned int)bGetFastAdvanceWidth(a3, v9, v7 + 3) )
  {
    v33 = *v31;
    if ( *v31 )
    {
      v34 = (*(_DWORD *)(a3 + 40) & 0x2000) != 0 ? 0x10 : 0;
      if ( *(int *)(a3 + 80) >= 0 )
        v33 += v34;
      else
        v33 -= v34;
      goto LABEL_51;
    }
  }
  else
  {
    v32 = *(_DWORD *)(a4 + 72);
LABEL_41:
    v33 = (((v32 >> 12) & 0xFFFFFFF8) + 8) & 0xFFFFFFF0;
LABEL_51:
    *v31 = v33;
  }
  v7[13] = v33;
  v7[12] = 0;
  if ( *(int *)(a3 + 80) < 0 )
    *v31 = -v33;
  *((_QWORD *)v7 + 7) = 0LL;
  v35 = v7[8];
  v36 = v7[10];
  if ( v11 )
  {
    v37 = v36 - v35;
    v38 = ((*(int *)(a4 + 212) >> 15) + 1) >> 1;
    if ( *(int *)(a3 + 80) >= 0 )
    {
      v7[8] = v38;
      v39 = v38 + v37;
    }
    else
    {
      v39 = v38 + v37;
      v7[8] = v38;
      v38 = -(v38 + v37);
    }
    v40 = 16 * v38;
    v7[10] = v39;
    v7[4] = v40;
    v7[5] = v40 + 16 * v37;
  }
  else
  {
    v41 = 16 * v35;
    v42 = 16 * v36;
    v7[4] = v41;
    v7[5] = v42;
    if ( *(int *)(a3 + 80) < 0 )
    {
      v7[4] = -v42;
      v7[5] = -v41;
    }
  }
  v43 = -16 * v7[9];
  result = (unsigned int)(-16 * v7[11]);
  v7[6] = v43;
  v7[7] = result;
  if ( *(int *)(a3 + 96) < 0 )
  {
    result = (unsigned int)-(int)result;
    v7[6] = result;
    v7[7] = -v43;
  }
LABEL_104:
  if ( !v12 || !v76 || v16 && (!v16[4] || !v16[5]) )
  {
    result = 1LL;
    v7[4] = 0;
    v7[10] = 1;
    v7[11] = 1;
    *(_QWORD *)(v7 + 5) = 16LL;
    *(_QWORD *)(v7 + 7) = 16LL;
    v7[9] = 0;
  }
  return result;
}
