/*
 * XREFs of ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x18017FF5C
 * Callers:
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x1801667A8 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180166A58 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A5298 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
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
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  bool v17; // sf
  int v18; // eax
  unsigned int *v19; // r8
  signed int LastError; // eax
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  bool v24; // sf
  int v25; // eax
  __int64 v26; // rcx
  struct _RGNDATA *v27; // rbx
  DWORD nCount; // eax
  int v29; // r8d
  struct _RGNDATA *v30; // rcx
  __int64 v31; // r9
  int v32; // r10d
  int v33; // edx
  int v34; // rcx^4
  unsigned __int64 v35; // rax
  __m128i v36; // xmm1
  float v38; // [rsp+30h] [rbp-48h]
  struct _RGNDATA *v39[2]; // [rsp+38h] [rbp-40h] BYREF

  v39[0] = 0LL;
  v6 = 0;
  SetLastError(0);
  v7 = a1[3] + 6291456.25;
  v8 = v7;
  v9 = a1[2] + 6291456.25;
  v10 = (int)(LODWORD(v9) << 10) >> 11;
  v11 = a1[1] + 6291456.25;
  v38 = *a1 + 6291456.25;
  RectRgn = CreateRectRgn(
              (int)(LODWORD(v38) << 10) >> 11,
              (int)(LODWORD(v11) << 10) >> 11,
              v10,
              (int)(LODWORD(v8) << 10) >> 11);
  if ( RectRgn )
  {
    SetLastError(0);
    v18 = CombineRgn(RectRgn, RectRgn, a2, 1);
    if ( v18 )
    {
      if ( v18 == 1 )
        goto LABEL_28;
      v25 = HrgnToRgnData(RectRgn, v39, v19);
      v27 = v39[0];
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x34Fu);
      }
      else
      {
        if ( !v39[0] )
          goto LABEL_28;
        nCount = v39[0]->rdh.nCount;
        if ( nCount )
        {
          v29 = 0;
          v6 = 1;
          *(_OWORD *)v39 = *(_OWORD *)v39[0]->Buffer;
          v30 = v27 + 1;
          v31 = nCount;
          do
          {
            v32 = v29;
            v33 = (v30->rdh.iType - *(_DWORD *)v30[-1].Buffer) * (v30->rdh.nCount - v30->rdh.dwSize);
            if ( v33 > v29 )
              *(_OWORD *)v39 = *(_OWORD *)v30[-1].Buffer;
            v30 = (struct _RGNDATA *)((char *)v30 + 16);
            v29 = v33;
            if ( v33 <= v32 )
              v29 = v32;
            --v31;
          }
          while ( v31 );
          v34 = HIDWORD(v39[1]);
          v35 = (unsigned __int64)v39[0] >> 32;
          v36 = _mm_cvtsi32_si128((unsigned int)v39[1]);
          *a1 = (float)SLODWORD(v39[0]);
          a1[1] = (float)(int)v35;
          *((_DWORD *)a1 + 2) = _mm_cvtepi32_ps(v36).m128_u32[0];
          a1[3] = (float)v34;
        }
      }
      if ( v27 )
        WPF::ProcessHeapImpl::Free(v27);
    }
    else
    {
      LastError = GetLastError();
      v24 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v24 = LastError < 0;
      }
      if ( !v24 )
        LastError = CheckGUIHandleQuota(v22, v21, v23);
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, LastError, 0x347u);
    }
  }
  else
  {
    v13 = GetLastError();
    v17 = v13 < 0;
    if ( v13 > 0 )
    {
      v13 = (unsigned __int16)v13 | 0x80070000;
      v17 = v13 < 0;
    }
    if ( !v17 )
      v13 = CheckGUIHandleQuota(v15, v14, v16);
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v13, 0x342u);
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
