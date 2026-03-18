/*
 * XREFs of ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C00544C4
 * Callers:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C005430C (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 * Callees:
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00546C8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0054704 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C015667C (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 */

void __fastcall vGetNtoW(struct MATRIX *a1, struct tagLOGFONTW *a2, struct IFIOBJ *a3, struct DCOBJ *a4)
{
  LONG lfHeight; // eax
  bool v9; // cc
  float v10; // xmm10_4
  float v11; // xmm0_4
  __m128i v12; // xmm10
  __m128i v13; // xmm0
  LONG lfWidth; // eax
  float v15; // xmm10_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  unsigned int v18; // ebx
  unsigned int lfOrientation; // edx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // xmm0_4
  unsigned int v23; // ebx
  __int16 v24; // r8
  __m128i v25; // xmm0
  float v26; // xmm7_4
  float v27; // eax
  float v28; // xmm7_4
  int v29; // xmm0_4
  float v30; // xmm6_4
  float v31; // xmm6_4
  struct MATRIX *v32; // [rsp+20h] [rbp-60h] BYREF
  int v33; // [rsp+2Ch] [rbp-54h]
  __int64 v34; // [rsp+A0h] [rbp+20h] BYREF

  lfHeight = a2->lfHeight;
  v9 = a2->lfHeight <= 0;
  if ( !a2->lfHeight )
  {
    lfHeight = lGetDefaultWorldHeight(a4);
    v9 = lfHeight <= 0;
  }
  if ( !v9 )
  {
    v12 = _mm_cvtsi32_si128(lfHeight);
    v13 = _mm_cvtsi32_si128(*(__int16 *)(*(_QWORD *)a3 + 60LL) + *(__int16 *)(*(_QWORD *)a3 + 62LL));
    goto LABEL_6;
  }
  v10 = 0.0;
  v11 = 0.0;
  if ( lfHeight < 0 )
  {
    v12 = _mm_cvtsi32_si128(-lfHeight);
    v13 = _mm_cvtsi32_si128(*(__int16 *)(*(_QWORD *)a3 + 56LL));
LABEL_6:
    LODWORD(v11) = _mm_cvtepi32_ps(v13).m128_u32[0];
    LODWORD(v10) = _mm_cvtepi32_ps(v12).m128_u32[0];
  }
  lfWidth = a2->lfWidth;
  v15 = v10 / v11;
  if ( lfWidth && (v24 = *(_WORD *)(*(_QWORD *)a3 + 76LL), v24 >= 0) )
  {
    v16 = (float)(int)abs32(lfWidth) / (float)v24;
    v17 = v16;
  }
  else
  {
    v16 = v15;
    v17 = v15;
  }
  v34 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
  if ( v34 )
  {
    v18 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v34);
    if ( v18 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v34) )
    {
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v34);
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v34);
    }
  }
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  lfOrientation = a2->lfOrientation;
  v20 = 3600 - lfOrientation;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0 )
    v20 = lfOrientation;
  v21 = lNormAngle(v20);
  switch ( v21 )
  {
    case 0:
      *(float *)a1 = v17;
      *((float *)a1 + 3) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
        break;
      v22 = *((_DWORD *)a1 + 3) ^ _xmm;
      goto LABEL_17;
    case 900:
      *((float *)a1 + 1) = v17;
      *((float *)a1 + 2) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0 )
        *((_DWORD *)a1 + 1) ^= _xmm;
      *((_DWORD *)a1 + 2) ^= _xmm;
      break;
    case 1800:
      *(float *)a1 = v17;
      v29 = *(_DWORD *)a1;
      *((float *)a1 + 3) = v15;
      *(_DWORD *)a1 = v29 ^ _xmm;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
      {
        v22 = *((_DWORD *)a1 + 3) ^ _xmm;
LABEL_17:
        *((_DWORD *)a1 + 3) = v22;
      }
      break;
    case 2700:
      *((float *)a1 + 1) = v17;
      *((float *)a1 + 2) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
        *((_DWORD *)a1 + 1) ^= _xmm;
      break;
    default:
      v25 = (__m128i)COERCE_UNSIGNED_INT((float)v21);
      *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 / 10.0;
      v26 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v25)));
      v27 = COERCE_FLOAT(efSin((unsigned int)_mm_cvtsi128_si32(v25)));
      *(float *)v25.m128i_i32 = v26 * v16;
      v28 = v26 * v15;
      *(_DWORD *)a1 = v25.m128i_i32[0];
      *((float *)a1 + 3) = v28;
      *((float *)a1 + 1) = v27 * v16;
      *((_DWORD *)a1 + 2) = COERCE_UNSIGNED_INT(v27 * v15) ^ _xmm;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0 )
      {
        *((_DWORD *)a1 + 1) = COERCE_UNSIGNED_INT(v27 * v16) ^ _xmm;
        *((_DWORD *)a1 + 3) = LODWORD(v28) ^ _xmm;
      }
      break;
  }
  v23 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v34);
  if ( v23 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v34) )
  {
    v30 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v34);
    v31 = v30 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v34);
    if ( a2->lfWidth )
      *((float *)a1 + 1) = *((float *)a1 + 1) / v31;
    else
      *(float *)a1 = v31 * *(float *)a1;
    *((float *)a1 + 2) = v31 * *((float *)a1 + 2);
  }
  v32 = a1;
  v33 = 0;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v32);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v32, 8u);
}
