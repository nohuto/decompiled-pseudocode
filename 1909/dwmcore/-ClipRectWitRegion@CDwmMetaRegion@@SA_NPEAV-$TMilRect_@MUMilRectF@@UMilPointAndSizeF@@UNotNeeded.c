/*
 * XREFs of ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180180548
 * Callers:
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18016F734 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019A584 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180062110 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

char __fastcall CDwmMetaRegion::ClipRectWitRegion(float *a1, HRGN a2, HRGN *a3)
{
  char v6; // bp
  float v7; // xmm0_4
  float v8; // r9d
  float v9; // xmm0_4
  int v10; // r8d
  float v11; // xmm0_4
  HRGN RectRgn; // rdi
  signed int v13; // eax
  int v14; // eax
  unsigned int *v15; // r8
  signed int LastError; // eax
  signed int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // rbx
  unsigned int v20; // eax
  int v21; // r8d
  _DWORD *v22; // rcx
  __int64 v23; // r9
  int v24; // r10d
  int v25; // edx
  int v26; // rcx^4
  unsigned __int64 v27; // rax
  __m128i v28; // xmm1
  float v30; // [rsp+30h] [rbp-48h]
  void *lpMem[2]; // [rsp+38h] [rbp-40h] BYREF

  lpMem[0] = 0LL;
  v6 = 0;
  SetLastError(0);
  v7 = a1[3] + 6291456.25;
  v8 = v7;
  v9 = a1[2] + 6291456.25;
  v10 = (int)(LODWORD(v9) << 10) >> 11;
  v11 = a1[1] + 6291456.25;
  v30 = *a1 + 6291456.25;
  RectRgn = CreateRectRgn(
              (int)(LODWORD(v30) << 10) >> 11,
              (int)(LODWORD(v11) << 10) >> 11,
              v10,
              (int)(LODWORD(v8) << 10) >> 11);
  if ( RectRgn )
  {
    SetLastError(0);
    v14 = CombineRgn(RectRgn, RectRgn, a2, 1);
    if ( v14 )
    {
      if ( v14 == 1 )
        goto LABEL_28;
      v17 = HrgnToRgnData(RectRgn, (struct _RGNDATA **)lpMem, v15);
      v19 = lpMem[0];
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x34Fu, 0LL);
      }
      else
      {
        if ( !lpMem[0] )
          goto LABEL_28;
        v20 = *((_DWORD *)lpMem[0] + 2);
        if ( v20 )
        {
          v21 = 0;
          v6 = 1;
          *(_OWORD *)lpMem = *((_OWORD *)lpMem[0] + 2);
          v22 = v19 + 9;
          v23 = v20;
          do
          {
            v24 = v21;
            v25 = (v22[1] - *(v22 - 1)) * (v22[2] - *v22);
            if ( v25 > v21 )
              *(_OWORD *)lpMem = *(_OWORD *)(v22 - 1);
            v22 += 4;
            v21 = v25;
            if ( v25 <= v24 )
              v21 = v24;
            --v23;
          }
          while ( v23 );
          v26 = HIDWORD(lpMem[1]);
          v27 = (unsigned __int64)lpMem[0] >> 32;
          v28 = _mm_cvtsi32_si128((unsigned int)lpMem[1]);
          *a1 = (float)SLODWORD(lpMem[0]);
          a1[1] = (float)(int)v27;
          *((_DWORD *)a1 + 2) = _mm_cvtepi32_ps(v28).m128_u32[0];
          a1[3] = (float)v26;
        }
      }
      if ( v19 )
        operator delete(v19);
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, LastError, 0x347u, 0LL);
    }
  }
  else
  {
    v13 = GetLastError();
    if ( v13 > 0 )
      v13 = (unsigned __int16)v13 | 0x80070000;
    if ( v13 >= 0 )
      v13 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, v13, 0x342u, 0LL);
  }
LABEL_28:
  if ( a3 )
  {
    *a3 = RectRgn;
  }
  else if ( RectRgn )
  {
    DeleteObject(RectRgn);
  }
  return v6;
}
