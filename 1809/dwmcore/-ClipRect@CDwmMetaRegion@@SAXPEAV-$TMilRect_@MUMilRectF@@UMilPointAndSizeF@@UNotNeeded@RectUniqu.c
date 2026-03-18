/*
 * XREFs of ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18017FC00
 * Callers:
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EA838 (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A5298 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
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
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  bool v14; // sf
  float v15; // xmm0_4
  float v16; // r9d
  float v17; // xmm0_4
  int v18; // r8d
  float v19; // xmm0_4
  HRGN v20; // rbp
  signed int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  bool v25; // sf
  int v26; // eax
  unsigned int *v27; // r8
  signed int v28; // eax
  int v29; // edx
  __int64 v30; // rcx
  int v31; // r8d
  bool v32; // sf
  int v33; // eax
  __int64 v34; // rcx
  struct _RGNDATA *v35; // rdi
  DWORD nCount; // eax
  int v37; // r8d
  struct _RGNDATA *v38; // rcx
  __int64 v39; // r9
  int v40; // r10d
  int v41; // edx
  int v42; // rcx^4
  unsigned __int64 v43; // rax
  __m128i v44; // xmm1
  float v45; // [rsp+30h] [rbp-48h]
  float v46; // [rsp+30h] [rbp-48h]
  struct _RGNDATA *v47[2]; // [rsp+38h] [rbp-40h] BYREF

  v47[0] = 0LL;
  SetLastError(0);
  v4 = a1[3] + 6291456.25;
  v5 = v4;
  v6 = a1[2] + 6291456.25;
  v7 = (int)(LODWORD(v6) << 10) >> 11;
  v8 = a1[1] + 6291456.25;
  v45 = *a1 + 6291456.25;
  RectRgn = CreateRectRgn(
              (int)(LODWORD(v45) << 10) >> 11,
              (int)(LODWORD(v8) << 10) >> 11,
              v7,
              (int)(LODWORD(v5) << 10) >> 11);
  if ( !RectRgn )
  {
    LastError = GetLastError();
    v14 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v14 = LastError < 0;
    }
    if ( !v14 )
      LastError = CheckGUIHandleQuota(v12, v11, v13);
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, LastError, 0x23Eu);
    return;
  }
  SetLastError(0);
  v15 = a2[3] + 6291456.25;
  v16 = v15;
  v17 = a2[2] + 6291456.25;
  v18 = (int)(LODWORD(v17) << 10) >> 11;
  v19 = a2[1] + 6291456.25;
  v46 = *a2 + 6291456.25;
  v20 = CreateRectRgn(
          (int)(LODWORD(v46) << 10) >> 11,
          (int)(LODWORD(v19) << 10) >> 11,
          v18,
          (int)(LODWORD(v16) << 10) >> 11);
  if ( !v20 )
  {
    v21 = GetLastError();
    v25 = v21 < 0;
    if ( v21 > 0 )
    {
      v21 = (unsigned __int16)v21 | 0x80070000;
      v25 = v21 < 0;
    }
    if ( !v25 )
      v21 = CheckGUIHandleQuota(v23, v22, v24);
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v21, 0x243u);
    goto LABEL_35;
  }
  SetLastError(0);
  v26 = CombineRgn(RectRgn, RectRgn, v20, 4);
  if ( !v26 )
  {
    v28 = GetLastError();
    v32 = v28 < 0;
    if ( v28 > 0 )
    {
      v28 = (unsigned __int16)v28 | 0x80070000;
      v32 = v28 < 0;
    }
    if ( !v32 )
      v28 = CheckGUIHandleQuota(v30, v29, v31);
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v28, 0x248u);
    goto LABEL_35;
  }
  if ( v26 == 1 )
  {
    *a1 = 0.0;
    a1[2] = 0.0;
    a1[1] = 0.0;
    a1[3] = 0.0;
    goto LABEL_35;
  }
  v33 = HrgnToRgnData(RectRgn, v47, v27);
  v35 = v47[0];
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x254u);
LABEL_33:
    if ( v35 )
      WPF::ProcessHeapImpl::Free(v35);
    goto LABEL_35;
  }
  if ( v47[0] )
  {
    nCount = v47[0]->rdh.nCount;
    if ( nCount )
    {
      v37 = 0;
      *(_OWORD *)v47 = *(_OWORD *)v47[0]->Buffer;
      v38 = v35 + 1;
      v39 = nCount;
      do
      {
        v40 = v37;
        v41 = (v38->rdh.iType - *(_DWORD *)v38[-1].Buffer) * (v38->rdh.nCount - v38->rdh.dwSize);
        if ( v41 > v37 )
          *(_OWORD *)v47 = *(_OWORD *)v38[-1].Buffer;
        v38 = (struct _RGNDATA *)((char *)v38 + 16);
        v37 = v41;
        if ( v41 <= v40 )
          v37 = v40;
        --v39;
      }
      while ( v39 );
      v42 = HIDWORD(v47[1]);
      v43 = (unsigned __int64)v47[0] >> 32;
      v44 = _mm_cvtsi32_si128((unsigned int)v47[1]);
      *a1 = (float)SLODWORD(v47[0]);
      a1[1] = (float)(int)v43;
      *((_DWORD *)a1 + 2) = _mm_cvtepi32_ps(v44).m128_u32[0];
      a1[3] = (float)v42;
    }
    goto LABEL_33;
  }
LABEL_35:
  DeleteObject(RectRgn);
  if ( v20 )
    DeleteObject(v20);
}
