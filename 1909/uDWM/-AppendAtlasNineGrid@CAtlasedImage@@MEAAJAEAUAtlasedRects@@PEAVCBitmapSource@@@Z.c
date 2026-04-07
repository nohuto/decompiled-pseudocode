/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001C330
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001AC50 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001BC60 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasNineGrid(
        struct tagRECT *this,
        struct AtlasedRects *a2,
        struct tagRECT *a3)
{
  LONG left; // esi
  int v5; // r9d
  LONG top; // edi
  int v8; // ecx
  struct tagRECT v9; // xmm0
  LONG v10; // ebx
  int v11; // r10d
  LONG right; // edx
  int v13; // r11d
  int v14; // eax
  int v15; // r11d
  int v16; // edx
  int v17; // edi
  LONG v18; // ecx
  int v19; // ebx
  int v20; // r10d
  LONG v21; // r8d
  int v22; // ecx
  int v23; // r9d
  LONG v24; // ecx
  int v25; // esi
  int v26; // edx
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // r10
  int v30; // r13d
  __int64 v31; // r11
  int v32; // r12d
  int v33; // r9d
  int v34; // r8d
  int v35; // edx
  bool v36; // zf
  bool v37; // zf
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  __m128 v42; // xmm0
  float v43; // xmm7_4
  float v44; // xmm5_4
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  int v47; // edi
  __m128 v48; // xmm0
  char v49; // si
  float v50; // xmm9_4
  float v51; // xmm1_4
  float v52; // xmm10_4
  float v53; // xmm8_4
  __int64 v54; // rax
  unsigned int v55; // ecx
  __int64 v56; // rax
  _QWORD *v57; // rcx
  unsigned int v58; // edx
  unsigned int v59; // eax
  LONG *p_top; // r9
  unsigned int v61; // r8d
  int v63; // ecx
  int v64; // r8d
  int v65; // edx
  int v66; // eax
  int v67; // r8d
  int v68; // edx
  struct tagRECT *v69; // rax
  float v70; // xmm11_4
  float v71; // xmm12_4
  float v72; // xmm5_4
  float v73; // xmm0_4
  int v74; // eax
  int v75; // eax
  int v76; // eax
  void *v77; // [rsp+28h] [rbp-D8h]
  unsigned int v78; // [rsp+30h] [rbp-D0h]
  __m128 v79; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v80; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v82[4]; // [rsp+70h] [rbp-90h]
  _DWORD v83[4]; // [rsp+80h] [rbp-80h]
  _DWORD v84[4]; // [rsp+90h] [rbp-70h]
  _DWORD v85[4]; // [rsp+A0h] [rbp-60h]

  left = a3[5].left;
  v5 = a3[5].right - left;
  top = a3[5].top;
  v78 = 0;
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
  v83[0] = top;
  v14 = top + v8;
  v83[2] = top + v13;
  v15 = this[1].left - a3[3].left;
  v16 = top + right;
  v17 = a3[3].left + a3[3].top + this[1].right;
  v18 = this[4].left;
  v82[1] = left + v10;
  v19 = a3[3].right + a3[3].bottom + this[1].bottom;
  v82[2] = left + v11;
  v20 = this[1].top - a3[3].right;
  v83[3] = v14;
  v82[0] = left;
  v83[1] = v16;
  v82[3] = left + v5;
  if ( (v18 & 1) != 0 )
  {
    v15 -= a3[2].left;
    v17 += a3[2].left;
  }
  if ( (v18 & 2) != 0 )
    v17 += a3[2].top;
  if ( (v18 & 4) != 0 )
  {
    v20 -= a3[2].right;
    v19 += a3[2].right;
  }
  if ( (v18 & 8) != 0 )
    v19 += a3[2].bottom;
  v21 = v9.left;
  rc = v9;
  v22 = v9.left + v9.top;
  if ( v9.left + v9.top > v17 )
  {
    v64 = v17 * v9.left;
    v65 = (v17 * v9.left) >> 31;
    if ( v22 == 2 )
      v66 = (v64 - v65) >> 1;
    else
      v66 = __SPAIR64__(v65, v64) / v22;
    v23 = v66;
    v21 = v66;
  }
  else
  {
    v23 = v17 - v9.top;
  }
  v24 = rc.right;
  v25 = rc.right + rc.bottom;
  if ( rc.right + rc.bottom > v19 )
  {
    v63 = v19 * rc.right;
    if ( v25 == 3 )
      v26 = v63 / 3;
    else
      v26 = v63 / v25;
    v24 = v26;
  }
  else
  {
    v26 = v19 - rc.bottom;
  }
  v27 = v20 + v19;
  v28 = 0;
  v85[3] = v27;
  v85[0] = v20;
  v84[0] = v15;
  v85[1] = v20 + v24;
  v84[1] = v15 + v21;
  v85[2] = v20 + v26;
  v84[2] = v15 + v23;
  v84[3] = v15 + v17;
  while ( 1 )
  {
    v29 = v28 / 3;
    v30 = v83[v29];
    v31 = v28 % 3;
    v32 = v82[v31];
    v33 = v84[v31];
    v34 = v85[v29];
    v35 = v85[(unsigned int)(v29 + 1)] - v34;
    if ( v84[(unsigned int)(v31 + 1)] - v33 <= 0 || v35 <= 0 )
      goto LABEL_53;
    if ( (_DWORD)v31 )
    {
      if ( (_DWORD)v31 != 2 )
        goto LABEL_28;
      v36 = (this[4].left & 2) == 0;
    }
    else
    {
      v36 = (this[4].left & 1) == 0;
    }
    if ( !v36 )
      goto LABEL_53;
LABEL_28:
    if ( (_DWORD)v29 )
    {
      if ( (_DWORD)v29 != 2 )
        break;
      v37 = (this[4].left & 8) == 0;
    }
    else
    {
      v37 = (this[4].left & 4) == 0;
    }
    if ( v37 )
      break;
LABEL_53:
    if ( ++v28 >= 9 )
      return v78;
  }
  v42 = 0LL;
  v38 = (float)v30;
  v39 = (float)v32;
  v40 = (float)(v82[(unsigned int)(v31 + 1)] - v32) + (float)v32;
  v41 = (float)(v83[(unsigned int)(v29 + 1)] - v30) + (float)v30;
  v42.m128_f32[0] = (float)v33;
  v43 = (float)v34;
  if ( (_DWORD)v31 == 1 )
  {
    v39 = v39 + 0.5;
    v40 = v40 - 0.5;
    if ( v39 > v40 )
      v40 = v39;
  }
  if ( (_DWORD)v29 == 1 )
  {
    v38 = v38 + 0.5;
    v41 = v41 - 0.5;
    if ( v38 > v41 )
      v41 = v38;
  }
  v44 = (float)(v84[(unsigned int)(v31 + 1)] - v33) + v42.m128_f32[0];
  *(_QWORD *)&v80 = __PAIR64__(LODWORD(v38), LODWORD(v39));
  v45 = _mm_shuffle_ps(v42, v42, 225);
  v45.m128_f32[0] = v43;
  v46 = _mm_shuffle_ps(v45, v45, 198);
  v47 = 0;
  v36 = this[3].left == 0x80000000;
  v46.m128_f32[0] = v44;
  *((_QWORD *)&v80 + 1) = __PAIR64__(LODWORD(v41), LODWORD(v40));
  v48 = _mm_shuffle_ps(v46, v46, 39);
  v48.m128_f32[0] = (float)v35 + v43;
  v78 = 0;
  v79 = _mm_shuffle_ps(v48, v48, 57);
  if ( v36 && this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
  {
    v49 = 0;
    if ( !*((_QWORD *)a2 + 12) )
    {
      v50 = v79.m128_f32[2];
      v51 = v79.m128_f32[0];
      goto LABEL_40;
    }
  }
  else
  {
    v49 = 1;
  }
  v67 = this[1].top;
  v68 = this[1].left;
  rc = this[3];
  OffsetRect(&rc, v68, v67);
  v69 = (struct tagRECT *)*((_QWORD *)a2 + 12);
  if ( v69 )
  {
    if ( v49 )
      IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
    else
      rc = *v69;
  }
  v50 = v79.m128_f32[2];
  v51 = v79.m128_f32[0];
  v70 = v79.m128_f32[2] - v79.m128_f32[0];
  if ( (float)(v79.m128_f32[2] - v79.m128_f32[0]) <= 0.0 )
  {
LABEL_40:
    v52 = v79.m128_f32[1];
    v53 = v79.m128_f32[3];
  }
  else
  {
    v53 = v79.m128_f32[3];
    v52 = v79.m128_f32[1];
    v71 = v79.m128_f32[3] - v79.m128_f32[1];
    if ( (float)(v79.m128_f32[3] - v79.m128_f32[1]) > 0.0 )
    {
      v79.m128_u64[0] = __PAIR64__(
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.top, v79.m128_f32[1])),
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.left, v79.m128_f32[0])));
      v72 = v79.m128_f32[0] - v51;
      v51 = v79.m128_f32[0];
      v50 = fminf((float)rc.right, v79.m128_f32[2]);
      v79.m128_f32[2] = v50;
      v53 = fminf((float)rc.bottom, v79.m128_f32[3]);
      v79.m128_f32[3] = v53;
      v73 = v79.m128_f32[1] - v52;
      v52 = v79.m128_f32[1];
      *(float *)&v80 = (float)((float)(v72 * (float)(*((float *)&v80 + 2) - *(float *)&v80)) / v70) + *(float *)&v80;
      *((float *)&v80 + 1) = (float)((float)((float)(*((float *)&v80 + 3) - *((float *)&v80 + 1)) * v73) / v71)
                           + *((float *)&v80 + 1);
      *((float *)&v80 + 2) = (float)((float)((float)(v50 - v79.m128_f32[0])
                                           * (float)(*((float *)&v80 + 2) - *(float *)&v80))
                                   / v70)
                           + *(float *)&v80;
      *((float *)&v80 + 3) = (float)((float)((float)(*((float *)&v80 + 3) - *((float *)&v80 + 1))
                                           * (float)(v53 - v79.m128_f32[1]))
                                   / v71)
                           + *((float *)&v80 + 1);
    }
  }
  if ( (float)(v50 - v51) > 0.0 && (float)(v53 - v52) > 0.0 )
  {
    v54 = *((unsigned int *)a2 + 6);
    v55 = v54 + 1;
    if ( (int)v54 + 1 < (unsigned int)v54 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v77);
      v47 = -2147024362;
      v78 = -2147024362;
      goto LABEL_84;
    }
    if ( v55 <= *((_DWORD *)a2 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16 * v54) = v80;
      *((_DWORD *)a2 + 6) = v55;
      goto LABEL_46;
    }
    v74 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 16, 1, &v80);
    v78 = v74;
    v47 = v74;
    if ( v74 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0xC0u, v77);
    if ( v47 < 0 )
    {
LABEL_84:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x365u, v77);
      goto LABEL_52;
    }
LABEL_46:
    v56 = *((unsigned int *)a2 + 14);
    v57 = (_QWORD *)((char *)a2 + 32);
    v58 = v56 + 1;
    if ( (int)v56 + 1 < (unsigned int)v56 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v77);
      v47 = -2147024362;
      v78 = -2147024362;
      goto LABEL_89;
    }
    if ( v58 <= *((_DWORD *)a2 + 13) )
    {
      *(__m128 *)(*v57 + 16 * v56) = v79;
      *((_DWORD *)a2 + 14) = v58;
      goto LABEL_49;
    }
    v75 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v57, 16, 1, &v79);
    v78 = v75;
    v47 = v75;
    if ( v75 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0xC0u, v77);
    if ( v47 >= 0 )
    {
LABEL_49:
      v59 = *((_DWORD *)a2 + 22);
      p_top = &this[4].top;
      v61 = v59 + 1;
      if ( v59 + 1 < v59 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v77);
        v47 = -2147024362;
        v78 = -2147024362;
      }
      else
      {
        if ( v61 <= *((_DWORD *)a2 + 21) )
        {
          v47 = 0;
          v78 = 0;
          *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v59) = *p_top;
          *((_DWORD *)a2 + 22) = v61;
          goto LABEL_52;
        }
        v76 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 64, 4, 1, p_top);
        v78 = v76;
        v47 = v76;
        if ( v76 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0xC0u, v77);
        if ( v47 >= 0 )
          goto LABEL_53;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x369u, v77);
    }
    else
    {
LABEL_89:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x368u, v77);
    }
  }
LABEL_52:
  if ( v47 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x325u, v77);
  return (unsigned int)v47;
}
