/*
 * XREFs of ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800ADF38
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x1800133C4 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x180013440 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180162074 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x180162334 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x180164DF8 (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1801657B8 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     McTemplateU0xff @ 0x1801679D8 (McTemplateU0xff.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017ED50 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018056C (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801B69A0 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x1801B84B8 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDrawingContext::RecordWindowMoveOptimization(
        CDrawingContext *this,
        struct CWindowNode *a2,
        HWND a3,
        bool *a4)
{
  signed int v7; // edi
  HRGN v8; // r14
  const struct CMILMatrix *v10; // r8
  int v11; // r10d
  int LocalToWorldTransform; // eax
  unsigned int v13; // ecx
  CDrawingContext *v14; // rcx
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  unsigned int v16; // ebx
  unsigned int v17; // r12d
  int v18; // xmm7_4
  int v19; // ecx
  int v20; // r9d
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  HRGN RectRgn; // rbx
  signed int LastError; // eax
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // edx
  int v31; // r8d
  signed int v32; // eax
  int v33; // edx
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // ecx
  CGdiSpriteBitmap *v37; // rbx
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // [rsp+28h] [rbp-E0h]
  int v41; // [rsp+30h] [rbp-D8h]
  bool v42[8]; // [rsp+48h] [rbp-C0h] BYREF
  CGdiSpriteBitmap *v43; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v44[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v45; // [rsp+98h] [rbp-70h]
  _OWORD v46[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v47; // [rsp+E8h] [rbp-20h]
  _OWORD v48[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v49; // [rsp+138h] [rbp+30h]
  unsigned __int64 v50; // [rsp+148h] [rbp+40h] BYREF
  float v51; // [rsp+150h] [rbp+48h]
  float v52; // [rsp+154h] [rbp+4Ch]
  struct MilRectF *v53; // [rsp+158h] [rbp+50h] BYREF
  float v54; // [rsp+160h] [rbp+58h]
  float v55; // [rsp+164h] [rbp+5Ch]

  v7 = 0;
  v43 = 0LL;
  v8 = 0LL;
  v42[0] = 0;
  if ( !*((_BYTE *)this + 6348) )
    goto LABEL_2;
  v45 = 0;
  v46[0] = _xmm;
  v46[1] = _xmm;
  v46[2] = _xmm;
  v46[3] = _xmm;
  v47 = 32085;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v44);
  v10 = (const struct CMILMatrix *)v46;
  v48[0] = v44[0];
  v48[1] = v44[1];
  if ( v11 < 5 )
    v10 = 0LL;
  v49 = v45;
  v48[2] = v44[2];
  v48[3] = v44[3];
  LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                            a2,
                            (const struct CMILMatrix *)v44,
                            v10,
                            v42,
                            (struct CMILMatrix *)v48,
                            this);
  v7 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v40 = 7116;
    goto LABEL_56;
  }
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 6133) )
    goto LABEL_2;
  if ( CDrawingContext::IsInLayer(v14) )
    goto LABEL_2;
  if ( !v42[0] )
    goto LABEL_2;
  v53 = 0LL;
  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a2, this);
  CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
  v8 = (HRGN)*((_QWORD *)MoveRenderPassInfoRef + 2);
  *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
  if ( !v8 )
    goto LABEL_2;
  v42[1] = 0;
  if ( CWindowNode::GetWindowNodeDirtyRects(a2, &v50, (unsigned int *)&v42[4], &v53)
    && *(_QWORD *)(*((_QWORD *)this + 4) + 368LL) == v50 )
  {
    v16 = 0;
    v17 = *(_DWORD *)&v42[4];
    if ( *(_DWORD *)&v42[4] )
    {
      while ( 1 )
      {
        LocalToWorldTransform = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                                  this,
                                  (char *)v53 + 16 * v16,
                                  v48,
                                  v8);
        v7 = LocalToWorldTransform;
        if ( LocalToWorldTransform < 0 )
          break;
        if ( ++v16 >= v17 )
          goto LABEL_20;
      }
      v40 = 7160;
      goto LABEL_56;
    }
  }
LABEL_20:
  LocalToWorldTransform = CDwmMetaRegion::GetMaxRectFromRegion(v8, &v42[1], &v50);
  v7 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v40 = 7166;
LABEL_56:
    v29 = LocalToWorldTransform;
    goto LABEL_57;
  }
  if ( v42[1] )
  {
    v18 = *((_DWORD *)CVisual::GetMoveRenderPassInfoRef(a2, this) + 15);
    CScopedClipStack::GetClipBoundsWorld((CDrawingContext *)((char *)this + 1008), (__int64)&v53);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xff(v19, (unsigned int)&MILEVENT_MEDIA_UCE_WINDOW_MOVE_DETECTED, (_DWORD)a2, v20, v18);
    v21 = *(float *)&v50;
    if ( *(float *)&v53 > *(float *)&v50 )
    {
      LODWORD(v50) = (_DWORD)v53;
      v21 = *(float *)&v53;
    }
    v22 = *((float *)&v50 + 1);
    if ( *((float *)&v53 + 1) > *((float *)&v50 + 1) )
    {
      HIDWORD(v50) = HIDWORD(v53);
      v22 = *((float *)&v53 + 1);
    }
    v23 = v51;
    if ( v51 > v54 )
    {
      v51 = v54;
      v23 = v54;
    }
    v24 = v52;
    if ( v52 > v55 )
    {
      v52 = v55;
      v24 = v55;
    }
    if ( v23 > v21 && v24 > v22 )
    {
      SetLastError(0);
      RectRgn = CreateRectRgn(0, 0, 0, 0);
      if ( !RectRgn )
      {
        LastError = GetLastError();
        v7 = LastError;
        if ( LastError > 0 )
          v7 = (unsigned __int16)LastError | 0x80070000;
        if ( v7 >= 0 )
          v7 = CheckGUIHandleQuota(v13, v27, v28);
        v40 = 7188;
LABEL_42:
        v29 = v7;
LABEL_57:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v29, v40);
        goto LABEL_2;
      }
      SetLastError(0);
      if ( !CombineRgn(RectRgn, RectRgn, v8, 2) )
      {
        v32 = GetLastError();
        v7 = v32;
        if ( v32 > 0 )
          v7 = (unsigned __int16)v32 | 0x80070000;
        if ( v7 >= 0 )
          v7 = CheckGUIHandleQuota(v13, v33, v34);
        v40 = 7193;
        goto LABEL_42;
      }
      v35 = MoveOptimizationInfo::Create((_DWORD)a2, v30, v31, (unsigned int)&v50, (__int64)RectRgn, v41, (__int64)&v43);
      v37 = v43;
      v7 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x1C21u);
      }
      else
      {
        v38 = CDrawingContext::CombineMove(this, v43, &v53);
        v7 = v38;
        if ( v38 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x1C27u);
      }
      if ( v37 )
        CGdiSpriteBitmap::Release(v37);
    }
  }
LABEL_2:
  if ( a4 )
    *a4 = v42[0];
  if ( v8 )
    DeleteObject(v8);
  return (unsigned int)v7;
}
