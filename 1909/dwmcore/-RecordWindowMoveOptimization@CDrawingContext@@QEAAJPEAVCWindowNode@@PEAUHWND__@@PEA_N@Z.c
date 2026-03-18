/*
 * XREFs of ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006A664
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x180012E40 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x1800130B8 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007E00C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016B1E0 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18016B4C0 (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUHRGN__@@@Z @ 0x18016DB70 (-ExcludeLocalRenderingRectFromRegion@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     McTemplateU0xff @ 0x180170738 (McTemplateU0xff.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017F290 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180180B7C (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18019A540 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801C199C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x1801C32A0 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
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
  int v11; // r11d
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
  int v27; // r9d
  int v28; // edx
  int v29; // r8d
  signed int v30; // eax
  int v31; // eax
  unsigned int v32; // ecx
  CGdiSpriteBitmap *v33; // rbx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // [rsp+28h] [rbp-E0h]
  int v37; // [rsp+30h] [rbp-D8h]
  bool v38[8]; // [rsp+48h] [rbp-C0h] BYREF
  CGdiSpriteBitmap *v39; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v40[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v41; // [rsp+98h] [rbp-70h]
  _OWORD v42[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v43; // [rsp+E8h] [rbp-20h]
  _OWORD v44[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v45; // [rsp+138h] [rbp+30h]
  unsigned __int64 v46; // [rsp+148h] [rbp+40h] BYREF
  float v47; // [rsp+150h] [rbp+48h]
  float v48; // [rsp+154h] [rbp+4Ch]
  struct MilRectF *v49; // [rsp+158h] [rbp+50h] BYREF
  float v50; // [rsp+160h] [rbp+58h]
  float v51; // [rsp+164h] [rbp+5Ch]

  v7 = 0;
  v39 = 0LL;
  v8 = 0LL;
  v38[0] = 0;
  if ( !*((_BYTE *)this + 6348) )
    goto LABEL_2;
  v41 = 0;
  v42[0] = _xmm;
  v42[1] = _xmm;
  v42[2] = _xmm;
  v42[3] = _xmm;
  v43 = 32085;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v40);
  v10 = (const struct CMILMatrix *)v42;
  v44[0] = v40[0];
  v44[1] = v40[1];
  if ( v11 < 5 )
    v10 = 0LL;
  v45 = v41;
  v44[2] = v40[2];
  v44[3] = v40[3];
  LocalToWorldTransform = CVisual::SetLastLocalToWorldTransform(
                            a2,
                            (const struct CMILMatrix *)v40,
                            v10,
                            v38,
                            (struct CMILMatrix *)v44,
                            this);
  v7 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v36 = 61;
    goto LABEL_54;
  }
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this) )
    goto LABEL_2;
  if ( *((_BYTE *)this + 6133) )
    goto LABEL_2;
  if ( CDrawingContext::IsInLayer(v14) )
    goto LABEL_2;
  if ( !v38[0] )
    goto LABEL_2;
  v49 = 0LL;
  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(a2, this);
  CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
  v8 = (HRGN)*((_QWORD *)MoveRenderPassInfoRef + 2);
  *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
  if ( !v8 )
    goto LABEL_2;
  v38[1] = 0;
  if ( CWindowNode::GetWindowNodeDirtyRects(a2, &v46, (unsigned int *)&v38[4], &v49)
    && *(_QWORD *)(*((_QWORD *)this + 4) + 384LL) == v46 )
  {
    v16 = 0;
    v17 = *(_DWORD *)&v38[4];
    if ( *(_DWORD *)&v38[4] )
    {
      while ( 1 )
      {
        LocalToWorldTransform = CDrawingContext::ExcludeLocalRenderingRectFromRegion(
                                  this,
                                  (char *)v49 + 16 * v16,
                                  v44,
                                  v8);
        v7 = LocalToWorldTransform;
        if ( LocalToWorldTransform < 0 )
          break;
        if ( ++v16 >= v17 )
          goto LABEL_20;
      }
      v36 = 105;
      goto LABEL_54;
    }
  }
LABEL_20:
  LocalToWorldTransform = CDwmMetaRegion::GetMaxRectFromRegion(v8, &v38[1], &v46);
  v7 = LocalToWorldTransform;
  if ( LocalToWorldTransform < 0 )
  {
    v36 = 111;
LABEL_54:
    v27 = LocalToWorldTransform;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v27, v36, 0LL);
    goto LABEL_2;
  }
  if ( v38[1] )
  {
    v18 = *((_DWORD *)CVisual::GetMoveRenderPassInfoRef(a2, this) + 15);
    CScopedClipStack::GetClipBoundsWorld((__int64)this + 1008, (__int64)&v49);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xff(v19, (unsigned int)&MILEVENT_MEDIA_UCE_WINDOW_MOVE_DETECTED, (_DWORD)a2, v20, v18);
    v21 = *(float *)&v46;
    if ( *(float *)&v49 > *(float *)&v46 )
    {
      LODWORD(v46) = (_DWORD)v49;
      v21 = *(float *)&v49;
    }
    v22 = *((float *)&v46 + 1);
    if ( *((float *)&v49 + 1) > *((float *)&v46 + 1) )
    {
      HIDWORD(v46) = HIDWORD(v49);
      v22 = *((float *)&v49 + 1);
    }
    v23 = v47;
    if ( v47 > v50 )
    {
      v47 = v50;
      v23 = v50;
    }
    v24 = v48;
    if ( v48 > v51 )
    {
      v48 = v51;
      v24 = v51;
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
        v36 = 133;
LABEL_40:
        if ( v7 >= 0 )
          v7 = -2003304445;
        v27 = v7;
        goto LABEL_55;
      }
      SetLastError(0);
      if ( !CombineRgn(RectRgn, RectRgn, v8, 2) )
      {
        v30 = GetLastError();
        v7 = v30;
        if ( v30 > 0 )
          v7 = (unsigned __int16)v30 | 0x80070000;
        v36 = 138;
        goto LABEL_40;
      }
      v31 = MoveOptimizationInfo::Create((_DWORD)a2, v28, v29, (unsigned int)&v46, (__int64)RectRgn, v37, (__int64)&v39);
      v33 = v39;
      v7 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x92u, 0LL);
      }
      else
      {
        v34 = CDrawingContext::CombineMove(this, v39, &v49);
        v7 = v34;
        if ( v34 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x98u, 0LL);
      }
      if ( v33 )
        CGdiSpriteBitmap::Release(v33);
    }
  }
LABEL_2:
  if ( a4 )
    *a4 = v38[0];
  if ( v8 )
    DeleteObject(v8);
  return (unsigned int)v7;
}
