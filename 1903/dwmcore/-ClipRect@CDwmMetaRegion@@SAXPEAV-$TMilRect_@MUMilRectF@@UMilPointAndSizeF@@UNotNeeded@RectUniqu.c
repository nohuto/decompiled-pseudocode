/*
 * XREFs of ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801818D4
 * Callers:
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DCE5C (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18003D270 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CDwmMetaRegion::ClipRect(float *a1, float *a2)
{
  float v4; // xmm0_4
  float v5; // r9d
  float v6; // xmm0_4
  int v7; // r8d
  float v8; // xmm0_4
  HRGN RectRgn; // rsi
  signed int LastError; // eax
  float v11; // xmm0_4
  float v12; // r9d
  float v13; // xmm0_4
  int v14; // r8d
  float v15; // xmm0_4
  HRGN v16; // rbp
  signed int v17; // eax
  int v18; // eax
  unsigned int *v19; // r8
  signed int v20; // eax
  signed int v21; // eax
  __int64 v22; // rcx
  _DWORD *v23; // rdi
  unsigned int v24; // eax
  int v25; // r8d
  _DWORD *v26; // rcx
  __int64 v27; // r9
  int v28; // r10d
  int v29; // edx
  int v30; // rcx^4
  unsigned __int64 v31; // rax
  __m128i v32; // xmm1
  float v33; // [rsp+30h] [rbp-48h]
  float v34; // [rsp+30h] [rbp-48h]
  void *lpMem[2]; // [rsp+38h] [rbp-40h] BYREF

  lpMem[0] = 0LL;
  SetLastError(0);
  v4 = a1[3] + 6291456.25;
  v5 = v4;
  v6 = a1[2] + 6291456.25;
  v7 = (int)(LODWORD(v6) << 10) >> 11;
  v8 = a1[1] + 6291456.25;
  v33 = *a1 + 6291456.25;
  RectRgn = CreateRectRgn(
              (int)(LODWORD(v33) << 10) >> 11,
              (int)(LODWORD(v8) << 10) >> 11,
              v7,
              (int)(LODWORD(v5) << 10) >> 11);
  if ( !RectRgn )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, LastError, 0x23Eu, 0LL);
    return;
  }
  SetLastError(0);
  v11 = a2[3] + 6291456.25;
  v12 = v11;
  v13 = a2[2] + 6291456.25;
  v14 = (int)(LODWORD(v13) << 10) >> 11;
  v15 = a2[1] + 6291456.25;
  v34 = *a2 + 6291456.25;
  v16 = CreateRectRgn(
          (int)(LODWORD(v34) << 10) >> 11,
          (int)(LODWORD(v15) << 10) >> 11,
          v14,
          (int)(LODWORD(v12) << 10) >> 11);
  if ( !v16 )
  {
    v17 = GetLastError();
    if ( v17 > 0 )
      v17 = (unsigned __int16)v17 | 0x80070000;
    if ( v17 >= 0 )
      v17 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, v17, 0x243u, 0LL);
    goto LABEL_35;
  }
  SetLastError(0);
  v18 = CombineRgn(RectRgn, RectRgn, v16, 4);
  if ( !v18 )
  {
    v20 = GetLastError();
    if ( v20 > 0 )
      v20 = (unsigned __int16)v20 | 0x80070000;
    if ( v20 >= 0 )
      v20 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, v20, 0x248u, 0LL);
    goto LABEL_35;
  }
  if ( v18 == 1 )
  {
    *a1 = 0.0;
    a1[2] = 0.0;
    a1[1] = 0.0;
    a1[3] = 0.0;
    goto LABEL_35;
  }
  v21 = HrgnToRgnData(RectRgn, (struct _RGNDATA **)lpMem, v19);
  v23 = lpMem[0];
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x254u, 0LL);
LABEL_33:
    if ( v23 )
      operator delete(v23);
    goto LABEL_35;
  }
  if ( lpMem[0] )
  {
    v24 = *((_DWORD *)lpMem[0] + 2);
    if ( v24 )
    {
      v25 = 0;
      *(_OWORD *)lpMem = *((_OWORD *)lpMem[0] + 2);
      v26 = v23 + 9;
      v27 = v24;
      do
      {
        v28 = v25;
        v29 = (v26[1] - *(v26 - 1)) * (v26[2] - *v26);
        if ( v29 > v25 )
          *(_OWORD *)lpMem = *(_OWORD *)(v26 - 1);
        v26 += 4;
        v25 = v29;
        if ( v29 <= v28 )
          v25 = v28;
        --v27;
      }
      while ( v27 );
      v30 = HIDWORD(lpMem[1]);
      v31 = (unsigned __int64)lpMem[0] >> 32;
      v32 = _mm_cvtsi32_si128((unsigned int)lpMem[1]);
      *a1 = (float)SLODWORD(lpMem[0]);
      a1[1] = (float)(int)v31;
      *((_DWORD *)a1 + 2) = _mm_cvtepi32_ps(v32).m128_u32[0];
      a1[3] = (float)v30;
    }
    goto LABEL_33;
  }
LABEL_35:
  DeleteObject(RectRgn);
  if ( v16 )
    DeleteObject(v16);
}
