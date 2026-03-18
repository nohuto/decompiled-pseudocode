/*
 * XREFs of ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x180233B1C
 * Callers:
 *     ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1802335E0 (-ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x18005C888 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x18007303C (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor @ 0x1800EC5F8 (floor.c)
 */

__int64 __fastcall CBitmapColorKey::InitColorKey(CBitmapColorKey *this, const __m128i *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  __m128i v6; // xmm0
  const __m128i *v7; // r12
  struct _D3DCOLORVALUE v8; // xmm1
  unsigned __int32 v9; // xmm9_4
  unsigned __int32 v10; // xmm8_4
  unsigned __int32 v11; // xmm7_4
  __m128 v12; // xmm6
  D3DVALUE a; // xmm5_4
  D3DVALUE b; // xmm4_4
  D3DVALUE g; // xmm3_4
  __m128 v16; // xmm2
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // si
  unsigned __int8 v20; // r15
  int v21; // ebx
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  unsigned __int8 v25; // al
  int v26; // eax
  unsigned __int8 v27; // si
  unsigned __int8 v28; // r15
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  unsigned __int8 v34; // al
  int v35; // ebx
  unsigned int v36; // edx
  unsigned int v37; // ebx
  __int16 v38; // bx
  unsigned __int32 v39; // eax
  int v40; // ecx
  unsigned __int32 v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // edx
  int v44; // r11d
  __int16 v45; // r11
  unsigned int v46; // eax
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // edx
  int v51; // r10d
  __int16 v52; // r10
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  unsigned int v57; // edx
  int v58; // r8d
  __int16 v59; // r8
  unsigned int v60; // eax
  int v61; // ecx
  unsigned int v62; // edx
  unsigned int v63; // ecx
  unsigned int v64; // edx
  unsigned int v65; // ebx
  __int16 v66; // bx
  unsigned __int32 v67; // eax
  int v68; // ecx
  unsigned __int32 v69; // edx
  unsigned int v70; // ecx
  unsigned int v71; // edx
  int v72; // r11d
  __int16 v73; // r11
  unsigned int v74; // eax
  int v75; // ecx
  unsigned int v76; // edx
  unsigned int v77; // ecx
  unsigned int v78; // edx
  int v79; // r10d
  __int16 v80; // r10
  unsigned int v81; // eax
  int v82; // ecx
  unsigned int v83; // edx
  unsigned int v84; // ecx
  unsigned int v85; // edx
  int v86; // r8d
  __int16 v87; // r8
  unsigned int v88; // eax
  int v89; // esi
  unsigned int v90; // edx
  unsigned int v91; // ecx
  unsigned int v93; // [rsp+28h] [rbp-39h]
  __m128i v94; // [rsp+38h] [rbp-29h]
  struct _D3DCOLORVALUE v95; // [rsp+48h] [rbp-19h] BYREF

  v3 = 0;
  *((_BYTE *)this + 52) = a2[2].m128i_i8[0];
  v5 = *((unsigned int *)this + 12);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 1 )
    {
      v93 = 433;
LABEL_4:
      v3 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003292288, v93);
      return v3;
    }
    v6 = _mm_loadu_si128(a2);
    v7 = a2 + 1;
    *(struct _D3DCOLORVALUE *)&v8.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(a2 + 1);
    v9 = v6.m128i_u32[3];
    v10 = v6.m128i_u32[2];
    v11 = v6.m128i_u32[1];
    v12.m128_i32[0] = v6.m128i_i32[0];
    *(struct _D3DCOLORVALUE *)&v95.r = *(struct _D3DCOLORVALUE *)&v8.r;
    a = v8.a;
    b = v8.b;
    g = v8.g;
    v16.m128_i32[0] = LODWORD(v8.r);
  }
  else
  {
    v7 = a2 + 1;
    v12 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(
                                                     &v95,
                                                     (const struct _D3DCOLORVALUE *)a2));
    v94.m128i_i32[0] = v12.m128_i32[0];
    v11 = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    v10 = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
    v9 = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
    v94.m128i_i32[1] = v11;
    v94.m128i_i64[1] = __PAIR64__(v9, v10);
    v6 = v94;
    v16 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(
                                                     &v95,
                                                     (const struct _D3DCOLORVALUE *)&a2[1]));
    LODWORD(v95.r) = v16.m128_i32[0];
    LODWORD(g) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
    LODWORD(b) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
    LODWORD(a) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
    v95.g = g;
    v95.b = b;
    v95.a = a;
    *(struct _D3DCOLORVALUE *)&v8.r = *(struct _D3DCOLORVALUE *)&v95.r;
  }
  v17 = *((_DWORD *)this + 10);
  switch ( v17 )
  {
    case 2:
      *(__m128i *)((char *)this + 72) = v6;
      *(struct _D3DCOLORVALUE *)((char *)this + 104) = *(struct _D3DCOLORVALUE *)&v8.r;
      return v3;
    case 10:
      v36 = v12.m128_i32[0] & 0x7FFFFFFF;
      v37 = HIWORD(v12.m128_i32[0]) & 0x8000;
      if ( (v12.m128_i32[0] & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v39 = v12.m128_i32[0] & 0x7FFFFFFF;
        if ( v36 >= 0x38800000 )
        {
          v42 = v36 - 939520001;
        }
        else
        {
          v40 = 113 - (v36 >> 23);
          if ( v40 >= 24 )
            v41 = 0;
          else
            v41 = (v12.m128_i32[0] & 0x7FFFFF | 0x800000u) >> v40;
          v39 = v41;
          v42 = v41 + 4095;
        }
        v38 = ((((v39 >> 13) & 1) + v42) >> 13) | v37;
      }
      else
      {
        v38 = v37 | 0x7FFF;
      }
      v43 = v11 & 0x7FFFFFFF;
      v44 = HIWORD(v11) & 0x8000;
      if ( (v11 & 0x7FFFFFFF) <= 0x47FFEFFF )
      {
        v46 = v11 & 0x7FFFFFFF;
        if ( v43 >= 0x38800000 )
        {
          v49 = v43 - 939520001;
        }
        else
        {
          v47 = 113 - (v43 >> 23);
          if ( v47 >= 24 )
            v48 = 0;
          else
            v48 = (v11 & 0x7FFFFF | 0x800000) >> v47;
          v46 = v48;
          v49 = v48 + 4095;
        }
        v45 = ((((v46 >> 13) & 1) + v49) >> 13) | v44;
      }
      else
      {
        v45 = v44 | 0x7FFF;
      }
      v50 = v10 & 0x7FFFFFFF;
      v51 = HIWORD(v10) & 0x8000;
      if ( (v10 & 0x7FFFFFFF) <= 0x47FFEFFF )
      {
        v53 = v10 & 0x7FFFFFFF;
        if ( v50 >= 0x38800000 )
        {
          v56 = v50 - 939520001;
        }
        else
        {
          v54 = 113 - (v50 >> 23);
          if ( v54 >= 24 )
            v55 = 0;
          else
            v55 = (v10 & 0x7FFFFF | 0x800000) >> v54;
          v53 = v55;
          v56 = v55 + 4095;
        }
        v52 = ((((v53 >> 13) & 1) + v56) >> 13) | v51;
      }
      else
      {
        v52 = v51 | 0x7FFF;
      }
      v57 = v9 & 0x7FFFFFFF;
      v58 = HIWORD(v9) & 0x8000;
      if ( (v9 & 0x7FFFFFFF) <= 0x47FFEFFF )
      {
        v60 = v9 & 0x7FFFFFFF;
        if ( v57 >= 0x38800000 )
        {
          v63 = v57 - 939520001;
        }
        else
        {
          v61 = 113 - (v57 >> 23);
          if ( v61 >= 24 )
            v62 = 0;
          else
            v62 = (v9 & 0x7FFFFF | 0x800000) >> v61;
          v60 = v62;
          v63 = v62 + 4095;
        }
        v59 = ((((v60 >> 13) & 1) + v63) >> 13) | v58;
      }
      else
      {
        v59 = v58 | 0x7FFF;
      }
      *((_WORD *)this + 32) = v38;
      *((_WORD *)this + 34) = v52;
      *((_WORD *)this + 35) = v59;
      v64 = v16.m128_i32[0] & 0x7FFFFFFF;
      *((_WORD *)this + 33) = v45;
      v65 = HIWORD(v16.m128_i32[0]) & 0x8000;
      if ( (v16.m128_i32[0] & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v67 = v16.m128_i32[0] & 0x7FFFFFFF;
        if ( v64 >= 0x38800000 )
        {
          v70 = v64 - 939520001;
        }
        else
        {
          v68 = 113 - (v64 >> 23);
          if ( v68 >= 24 )
            v69 = 0;
          else
            v69 = (v16.m128_i32[0] & 0x7FFFFF | 0x800000u) >> v68;
          v67 = v69;
          v70 = v69 + 4095;
        }
        v66 = ((((v67 >> 13) & 1) + v70) >> 13) | v65;
      }
      else
      {
        v66 = v65 | 0x7FFF;
      }
      v71 = LODWORD(g) & 0x7FFFFFFF;
      v72 = HIWORD(LODWORD(g)) & 0x8000;
      if ( (LODWORD(g) & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v74 = LODWORD(g) & 0x7FFFFFFF;
        if ( v71 >= 0x38800000 )
        {
          v77 = v71 - 939520001;
        }
        else
        {
          v75 = 113 - (v71 >> 23);
          if ( v75 >= 24 )
            v76 = 0;
          else
            v76 = (LODWORD(g) & 0x7FFFFF | 0x800000u) >> v75;
          v74 = v76;
          v77 = v76 + 4095;
        }
        v73 = ((((v74 >> 13) & 1) + v77) >> 13) | v72;
      }
      else
      {
        v73 = v72 | 0x7FFF;
      }
      v78 = LODWORD(b) & 0x7FFFFFFF;
      v79 = HIWORD(LODWORD(b)) & 0x8000;
      if ( (LODWORD(b) & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v81 = LODWORD(b) & 0x7FFFFFFF;
        if ( v78 >= 0x38800000 )
        {
          v84 = v78 - 939520001;
        }
        else
        {
          v82 = 113 - (v78 >> 23);
          if ( v82 >= 24 )
            v83 = 0;
          else
            v83 = (LODWORD(b) & 0x7FFFFF | 0x800000u) >> v82;
          v81 = v83;
          v84 = v83 + 4095;
        }
        v80 = ((((v81 >> 13) & 1) + v84) >> 13) | v79;
      }
      else
      {
        v80 = v79 | 0x7FFF;
      }
      v85 = LODWORD(a) & 0x7FFFFFFF;
      v86 = HIWORD(LODWORD(a)) & 0x8000;
      if ( (LODWORD(a) & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v88 = LODWORD(a) & 0x7FFFFFFF;
        if ( v85 >= 0x38800000 )
        {
          v91 = v85 - 939520001;
        }
        else
        {
          v89 = 113 - (v85 >> 23);
          if ( v89 >= 24 )
            v90 = 0;
          else
            v90 = (LODWORD(a) & 0x7FFFFF | 0x800000u) >> v89;
          v88 = v90;
          v91 = v90 + 4095;
        }
        v87 = ((((v88 >> 13) & 1) + v91) >> 13) | v86;
      }
      else
      {
        v87 = v86 | 0x7FFF;
      }
      *((_WORD *)this + 48) = v66;
      *((_WORD *)this + 49) = v73;
      *((_WORD *)this + 50) = v80;
      *((_WORD *)this + 51) = v87;
      break;
    case 28:
      *(struct _D3DCOLORVALUE *)&v95.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(a2);
      v26 = (int)floor((float)(_mm_shuffle_ps(*(__m128 *)&v95.r, *(__m128 *)&v95.r, 255).m128_f32[0] * 255.0) + 0.5);
      v27 = -1;
      if ( v26 <= 255 )
      {
        v28 = 0;
        if ( v26 >= 0 )
          v28 = v26;
      }
      else
      {
        v28 = -1;
      }
      v29 = ((v28 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v95.r)) << 8;
      v30 = (Convert_scRGB_Channel_To_sRGB_Byte(v95.g) | v29) << 8;
      v31 = Convert_scRGB_Channel_To_sRGB_Byte(v95.b) | v30;
      *((_BYTE *)this + 62) = v31;
      *((_BYTE *)this + 60) = BYTE2(v31);
      *((_BYTE *)this + 61) = BYTE1(v31);
      *((_BYTE *)this + 63) = HIBYTE(v31);
      *(struct _D3DCOLORVALUE *)&v95.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(v7);
      v32 = (int)floor((float)(_mm_shuffle_ps(*(__m128 *)&v95.r, *(__m128 *)&v95.r, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v32 <= 255 )
      {
        v27 = 0;
        if ( v32 >= 0 )
          v27 = v32;
      }
      v33 = ((v27 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v95.r)) << 8;
      v34 = Convert_scRGB_Channel_To_sRGB_Byte(v95.g);
      v35 = Convert_scRGB_Channel_To_sRGB_Byte(v95.b) | ((v34 | v33) << 8);
      *((_BYTE *)this + 94) = v35;
      *((_BYTE *)this + 92) = BYTE2(v35);
      *((_BYTE *)this + 95) = HIBYTE(v35);
      *((_BYTE *)this + 93) = BYTE1(v35);
      break;
    default:
      if ( (unsigned int)(v17 - 87) > 1 )
      {
        v93 = 518;
        goto LABEL_4;
      }
      *(struct _D3DCOLORVALUE *)&v95.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(a2);
      v18 = (int)floor((float)(_mm_shuffle_ps(*(__m128 *)&v95.r, *(__m128 *)&v95.r, 255).m128_f32[0] * 255.0) + 0.5);
      v19 = -1;
      if ( v18 <= 255 )
      {
        v20 = 0;
        if ( v18 >= 0 )
          v20 = v18;
      }
      else
      {
        v20 = -1;
      }
      v21 = ((v20 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v95.r)) << 8;
      v22 = (Convert_scRGB_Channel_To_sRGB_Byte(v95.g) | v21) << 8;
      *((_DWORD *)this + 14) = Convert_scRGB_Channel_To_sRGB_Byte(v95.b) | v22;
      *(struct _D3DCOLORVALUE *)&v95.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(v7);
      v23 = (int)floor((float)(_mm_shuffle_ps(*(__m128 *)&v95.r, *(__m128 *)&v95.r, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v23 <= 255 )
      {
        v19 = 0;
        if ( v23 >= 0 )
          v19 = v23;
      }
      v24 = ((v19 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v95.r)) << 8;
      v25 = Convert_scRGB_Channel_To_sRGB_Byte(v95.g);
      *((_DWORD *)this + 22) = Convert_scRGB_Channel_To_sRGB_Byte(v95.b) | ((v25 | v24) << 8);
      break;
  }
  return v3;
}
