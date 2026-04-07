/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x180015D50
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x1800147C0 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x180015A50 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasNineGrid(
        struct tagRECT *this,
        struct AtlasedRects *a2,
        struct tagRECT *a3)
{
  LONG left; // r14d
  int v5; // r9d
  LONG top; // esi
  int v8; // ecx
  struct tagRECT v9; // xmm0
  LONG v10; // ebx
  int v11; // r10d
  LONG right; // edx
  int v13; // r11d
  int v14; // eax
  int v15; // r11d
  int v16; // edx
  int v17; // esi
  LONG v18; // ecx
  int v19; // ebx
  int v20; // r10d
  LONG v21; // ecx
  int v22; // r8d
  int v23; // r8d
  LONG v24; // eax
  LONG v25; // edx
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // r10
  int v29; // r13d
  __int64 v30; // r11
  int v31; // r12d
  int v32; // r9d
  int v33; // r8d
  int v34; // edx
  bool v35; // zf
  bool v36; // zf
  float v37; // xmm3_4
  float v38; // xmm4_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  __m128 v41; // xmm0
  float v42; // xmm7_4
  float v43; // xmm5_4
  __m128 v44; // xmm0
  __m128 v45; // xmm0
  int v46; // r14d
  __m128 v47; // xmm0
  char v48; // si
  float v49; // xmm9_4
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm8_4
  __int64 v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // rax
  _QWORD *v56; // rcx
  unsigned int v57; // edx
  unsigned int v58; // eax
  LONG *p_top; // r9
  unsigned int v60; // r8d
  int v62; // r8d
  int v63; // edx
  struct tagRECT *v64; // rax
  float v65; // xmm10_4
  float v66; // xmm11_4
  float v67; // xmm5_4
  int v68; // ecx
  int v69; // edx
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  unsigned int v74; // [rsp+30h] [rbp-D0h]
  __m128 v75; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v76; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v78[4]; // [rsp+70h] [rbp-90h]
  _DWORD v79[4]; // [rsp+80h] [rbp-80h]
  _DWORD v80[4]; // [rsp+90h] [rbp-70h]
  _DWORD v81[4]; // [rsp+A0h] [rbp-60h]

  left = a3[5].left;
  v5 = a3[5].right - left;
  top = a3[5].top;
  v74 = 0;
  if ( v5 < 0 )
    v5 = 0;
  v8 = a3[5].bottom - top;
  if ( v8 < 0 )
    v8 = 0;
  v9 = a3[2];
  rc = v9;
  v10 = v9.left;
  if ( rc.top + rc.left > v5 )
  {
    v11 = rc.left * v5 / (rc.top + rc.left);
    v10 = v11;
  }
  else
  {
    v11 = v5 - v9.top;
  }
  right = rc.right;
  if ( rc.bottom + rc.right > v8 )
  {
    v13 = rc.right * v8 / (rc.bottom + rc.right);
    right = v13;
  }
  else
  {
    v13 = v8 - rc.bottom;
  }
  v79[0] = top;
  v14 = top + v8;
  v79[2] = top + v13;
  v15 = this[1].left - a3[3].left;
  v16 = top + right;
  v17 = a3[3].right + a3[3].bottom + this[1].bottom;
  v18 = this[4].left;
  v78[1] = left + v10;
  v19 = a3[3].left + a3[3].top + this[1].right;
  v78[2] = left + v11;
  v20 = this[1].top - a3[3].right;
  v79[3] = v14;
  v78[0] = left;
  v79[1] = v16;
  v78[3] = left + v5;
  if ( (v18 & 1) != 0 )
  {
    v15 -= a3[2].left;
    v19 += a3[2].left;
  }
  if ( (v18 & 2) != 0 )
    v19 += a3[2].top;
  if ( (v18 & 4) != 0 )
  {
    v20 -= a3[2].right;
    v17 += a3[2].right;
  }
  if ( (v18 & 8) != 0 )
    v17 += a3[2].bottom;
  v21 = v9.left;
  rc = v9;
  v22 = v9.left + v9.top;
  if ( v9.left + v9.top > v19 )
  {
    v68 = v19 * v9.left;
    v69 = (v19 * v9.left) >> 31;
    if ( v22 == 2 )
      v70 = (v68 - v69) >> 1;
    else
      v70 = __SPAIR64__(v69, v68) / v22;
    v23 = v70;
    v21 = v70;
  }
  else
  {
    v23 = v19 - v9.top;
  }
  v24 = rc.right;
  if ( rc.right + rc.bottom > v17 )
  {
    v24 = v17 * rc.right / (rc.right + rc.bottom);
    v25 = v24;
  }
  else
  {
    v25 = v17 - rc.bottom;
  }
  v81[1] = v20 + v24;
  v81[3] = v20 + v17;
  v26 = v19 + v15;
  v27 = 0;
  v80[3] = v26;
  v81[0] = v20;
  v80[0] = v15;
  v80[1] = v15 + v21;
  v81[2] = v20 + v25;
  v80[2] = v15 + v23;
  while ( 1 )
  {
    v28 = v27 / 3;
    v29 = v79[v28];
    v30 = v27 % 3;
    v31 = v78[v30];
    v32 = v80[v30];
    v33 = v81[v28];
    v34 = v81[(unsigned int)(v28 + 1)] - v33;
    if ( v80[(unsigned int)(v30 + 1)] - v32 <= 0 || v34 <= 0 )
      goto LABEL_53;
    if ( (_DWORD)v30 )
    {
      if ( (_DWORD)v30 != 2 )
        goto LABEL_28;
      v35 = (this[4].left & 2) == 0;
    }
    else
    {
      v35 = (this[4].left & 1) == 0;
    }
    if ( !v35 )
      goto LABEL_53;
LABEL_28:
    if ( (_DWORD)v28 )
    {
      if ( (_DWORD)v28 != 2 )
        break;
      v36 = (this[4].left & 8) == 0;
    }
    else
    {
      v36 = (this[4].left & 4) == 0;
    }
    if ( v36 )
      break;
LABEL_53:
    if ( ++v27 >= 9 )
      return v74;
  }
  v41 = 0LL;
  v37 = (float)v29;
  v38 = (float)v31;
  v39 = (float)(v78[(unsigned int)(v30 + 1)] - v31) + (float)v31;
  v40 = (float)(v79[(unsigned int)(v28 + 1)] - v29) + (float)v29;
  v41.m128_f32[0] = (float)v32;
  v42 = (float)v33;
  if ( (_DWORD)v30 == 1 )
  {
    v38 = v38 + 0.5;
    v39 = v39 - 0.5;
    if ( v38 > v39 )
      v39 = v38;
  }
  if ( (_DWORD)v28 == 1 )
  {
    v37 = v37 + 0.5;
    v40 = v40 - 0.5;
    if ( v37 > v40 )
      v40 = v37;
  }
  v43 = (float)(v80[(unsigned int)(v30 + 1)] - v32) + v41.m128_f32[0];
  *(_QWORD *)&v76 = __PAIR64__(LODWORD(v37), LODWORD(v38));
  v44 = _mm_shuffle_ps(v41, v41, 225);
  v44.m128_f32[0] = v42;
  v45 = _mm_shuffle_ps(v44, v44, 198);
  v46 = 0;
  v35 = this[3].left == 0x80000000;
  v45.m128_f32[0] = v43;
  *((_QWORD *)&v76 + 1) = __PAIR64__(LODWORD(v40), LODWORD(v39));
  v47 = _mm_shuffle_ps(v45, v45, 39);
  v47.m128_f32[0] = (float)v34 + v42;
  v74 = 0;
  v75 = _mm_shuffle_ps(v47, v47, 57);
  if ( v35 && this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
  {
    v48 = 0;
    if ( !*((_QWORD *)a2 + 12) )
    {
      v49 = v75.m128_f32[2];
      v50 = v75.m128_f32[0];
      goto LABEL_40;
    }
  }
  else
  {
    v48 = 1;
  }
  v62 = this[1].top;
  v63 = this[1].left;
  rc = this[3];
  OffsetRect(&rc, v63, v62);
  v64 = (struct tagRECT *)*((_QWORD *)a2 + 12);
  if ( v64 )
  {
    if ( v48 )
      IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
    else
      rc = *v64;
  }
  v49 = v75.m128_f32[2];
  v50 = v75.m128_f32[0];
  v65 = v75.m128_f32[2] - v75.m128_f32[0];
  if ( (float)(v75.m128_f32[2] - v75.m128_f32[0]) <= 0.0 )
  {
LABEL_40:
    v51 = v75.m128_f32[1];
    v52 = v75.m128_f32[3];
  }
  else
  {
    v52 = v75.m128_f32[3];
    v51 = v75.m128_f32[1];
    v66 = v75.m128_f32[3] - v75.m128_f32[1];
    if ( (float)(v75.m128_f32[3] - v75.m128_f32[1]) > 0.0 )
    {
      v75.m128_u64[0] = __PAIR64__(
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.top, v75.m128_f32[1])),
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.left, v75.m128_f32[0])));
      v67 = v75.m128_f32[0] - v50;
      v50 = v75.m128_f32[0];
      v49 = fminf((float)rc.right, v75.m128_f32[2]);
      v75.m128_f32[2] = v49;
      v52 = fminf((float)rc.bottom, v75.m128_f32[3]);
      v75.m128_f32[3] = v52;
      *(float *)&v76 = (float)((float)(v67 * (float)(*((float *)&v76 + 2) - *(float *)&v76)) / v65) + *(float *)&v76;
      *((float *)&v76 + 1) = (float)((float)((float)(v75.m128_f32[1] - v51)
                                           * (float)(*((float *)&v76 + 3) - *((float *)&v76 + 1)))
                                   / v66)
                           + *((float *)&v76 + 1);
      *((float *)&v76 + 2) = (float)((float)((float)(v49 - v75.m128_f32[0])
                                           * (float)(*((float *)&v76 + 2) - *(float *)&v76))
                                   / v65)
                           + *(float *)&v76;
      *((float *)&v76 + 3) = (float)((float)((float)(*((float *)&v76 + 3) - *((float *)&v76 + 1))
                                           * (float)(v52 - v75.m128_f32[1]))
                                   / v66)
                           + *((float *)&v76 + 1);
      v51 = v75.m128_f32[1];
    }
  }
  if ( (float)(v49 - v50) > 0.0 && (float)(v52 - v51) > 0.0 )
  {
    v53 = *((unsigned int *)a2 + 6);
    v54 = v53 + 1;
    if ( (int)v53 + 1 < (unsigned int)v53 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v46 = -2147024362;
      v74 = -2147024362;
      goto LABEL_81;
    }
    if ( v54 <= *((_DWORD *)a2 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16 * v53) = v76;
      *((_DWORD *)a2 + 6) = v54;
      goto LABEL_46;
    }
    v71 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v76);
    v74 = v71;
    v46 = v71;
    if ( v71 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0xC0u);
    if ( v46 < 0 )
    {
LABEL_81:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x36Du);
      goto LABEL_52;
    }
LABEL_46:
    v55 = *((unsigned int *)a2 + 14);
    v56 = (_QWORD *)((char *)a2 + 32);
    v57 = v55 + 1;
    if ( (int)v55 + 1 < (unsigned int)v55 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v46 = -2147024362;
      v74 = -2147024362;
      goto LABEL_86;
    }
    if ( v57 <= *((_DWORD *)a2 + 13) )
    {
      *(__m128 *)(*v56 + 16 * v55) = v75;
      *((_DWORD *)a2 + 14) = v57;
      goto LABEL_49;
    }
    v72 = DynArrayImpl<0>::AddMultipleAndSet(v56, 16LL, 1LL, &v75);
    v74 = v72;
    v46 = v72;
    if ( v72 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0xC0u);
    if ( v46 >= 0 )
    {
LABEL_49:
      v58 = *((_DWORD *)a2 + 22);
      p_top = &this[4].top;
      v60 = v58 + 1;
      if ( v58 + 1 < v58 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v46 = -2147024362;
        v74 = -2147024362;
      }
      else
      {
        if ( v60 <= *((_DWORD *)a2 + 21) )
        {
          v46 = 0;
          v74 = 0;
          *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v58) = *p_top;
          *((_DWORD *)a2 + 22) = v60;
          goto LABEL_52;
        }
        v73 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 64, 4LL, 1LL, p_top);
        v74 = v73;
        v46 = v73;
        if ( v73 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0xC0u);
        if ( v46 >= 0 )
          goto LABEL_53;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x371u);
    }
    else
    {
LABEL_86:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x370u);
    }
  }
LABEL_52:
  if ( v46 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x32Au);
  return (unsigned int)v46;
}
