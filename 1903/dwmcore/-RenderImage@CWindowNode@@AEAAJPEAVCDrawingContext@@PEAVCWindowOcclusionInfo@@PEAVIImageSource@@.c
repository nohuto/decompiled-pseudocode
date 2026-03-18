/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004EEE0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800088FC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180014388 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800168FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180017E1C (-CalculateSubtractionRectangles@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001EFDC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800282CC (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18003A3DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180044490 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800444E8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004ED8C (-ClipAgainstMargins@CWindowNode@@QEAAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x180050310 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMil.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180050470 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180050734 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800513E0 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18005164C (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800583E0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18006FC34 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180070580 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180079B34 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180085E5C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A2200 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800B55D8 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x1800B5684 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800BCA70 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18016C780 (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 *     ?FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016F508 (-FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18016FE00 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1801700C0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1801719DC (-VisualWasRendered@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180180990 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x1801823A4 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019BE44 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C24F8 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C2FDC (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801C313C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1801F0350 (-Deflate@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x18024B5A0 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CWindowOcclusionInfo *a3,
        struct IImageSource *a4,
        const struct CShape *a5,
        struct _MARGINS *a6,
        unsigned int a7,
        bool a8,
        bool a9,
        struct _D3DCOLORVALUE *a10)
{
  unsigned int v10; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // r15d
  int RenderBounds; // eax
  unsigned int v18; // ecx
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  bool v23; // r12
  int v24; // ecx
  HWND v25; // r8
  int v26; // r12d
  int v27; // r13d
  bool v28; // zf
  float v29; // xmm4_4
  float v30; // xmm15_4
  float v31; // xmm13_4
  float v32; // xmm14_4
  int v33; // eax
  void *v34; // rcx
  float v35; // xmm9_4
  float v36; // xmm7_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm1_4
  __int64 v40; // rcx
  float v41; // xmm1_4
  float v42; // xmm3_4
  float v43; // xmm11_4
  float v44; // xmm2_4
  float v45; // xmm12_4
  float v46; // xmm7_4
  float v47; // xmm6_4
  float v48; // xmm4_4
  int v49; // r14d
  int v50; // eax
  unsigned int v51; // ecx
  struct IImageSource *v52; // rcx
  int v53; // eax
  unsigned int v54; // ecx
  float v55; // xmm6_4
  float v56; // xmm7_4
  float v57; // xmm8_4
  float v58; // xmm9_4
  float v59; // xmm7_4
  bool v60; // si
  bool v61; // r14
  float v62; // xmm9_4
  float v63; // xmm15_4
  float v64; // xmm6_4
  float v65; // xmm8_4
  __int64 v66; // rcx
  struct CShape *v67; // rbx
  void ***v68; // r9
  struct CShape *v69; // rsi
  int v71; // r9d
  int v72; // r8d
  int v73; // eax
  int v74; // edx
  __int64 v75; // rdx
  __int64 v76; // r9
  char v77; // r10
  struct IImageSource *v78; // r14
  int v79; // r11d
  __int64 v80; // r8
  int v81; // eax
  int v82; // eax
  unsigned int v83; // ecx
  int v84; // eax
  unsigned int v85; // ecx
  LONG v86; // ecx
  LONG v87; // eax
  struct CShape **v88; // rbx
  int v89; // eax
  unsigned int v90; // ecx
  struct IImageSource *v91; // r15
  struct IImageSource *v92; // rax
  int v93; // eax
  unsigned int v94; // ecx
  struct IImageSource *v95; // rax
  CCompositionSurfaceBitmap *v96; // rcx
  struct IImageSource *v97; // rdx
  __int64 v98; // rax
  CCompositionSurfaceBitmap *v99; // rcx
  __int64 v100; // rax
  CCompositionSurfaceBitmap *v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // r9
  int v104; // edx
  unsigned int v105; // r8d
  CMILMatrix *TopByReference; // rax
  __int64 i; // r12
  int v108; // eax
  unsigned int v109; // ecx
  int v110; // eax
  unsigned int v111; // ecx
  bool v112; // r8
  int v113; // eax
  unsigned int v114; // ecx
  __int64 v115; // rdx
  __int64 v116; // r9
  int v117; // edx
  unsigned int v118; // r8d
  CMILMatrix *v119; // rax
  float v120; // xmm1_4
  float v121; // xmm4_4
  float v122; // xmm3_4
  float v123; // xmm2_4
  unsigned int v124; // ecx
  unsigned int v125; // eax
  unsigned int v126; // edx
  int v127; // eax
  unsigned int v128; // ecx
  int v129; // eax
  unsigned int v130; // ecx
  float v131; // xmm15_4
  float v132; // xmm14_4
  unsigned int v133; // xmm0_4
  int v134; // eax
  unsigned int v135; // ecx
  int v136; // eax
  unsigned int v137; // ecx
  struct IImageSource *v138; // rsi
  int v139; // eax
  unsigned int v140; // ecx
  float v141; // xmm2_4
  float v142; // xmm11_4
  float v143; // xmm8_4
  int v144; // eax
  unsigned int v145; // ecx
  int v146; // eax
  unsigned int v147; // ecx
  int v148; // eax
  unsigned int v149; // ecx
  int v150; // eax
  __int64 v151; // rdx
  unsigned int v152; // ecx
  struct CShape *v153; // r8
  int v154; // eax
  unsigned int v155; // ecx
  void ***v156; // rax
  int v157; // eax
  unsigned int v158; // ecx
  __int64 v159; // r8
  int v160; // ecx
  char v161; // r15
  int v162; // eax
  LONG v163; // r8d
  LONG v164; // r9d
  LONG v165; // edx
  struct _D3DCOLORVALUE *v166; // rbx
  int v167; // eax
  unsigned int v168; // ecx
  const struct _D3DCOLORVALUE *v169; // r8
  int v170; // eax
  unsigned int v171; // ecx
  struct IImageSource *v172; // rcx
  int v173; // eax
  unsigned int v174; // ecx
  int v175; // eax
  unsigned int v176; // ecx
  int v177; // eax
  unsigned int v178; // ecx
  int v179; // eax
  unsigned int v180; // ecx
  char v181; // al
  int v182; // eax
  unsigned int v183; // ecx
  HWND v184; // r8
  int v185; // edx
  int v186; // ecx
  int v187; // eax
  float v188; // xmm0_4
  __m128i v189; // xmm3
  unsigned int v190; // eax
  float v191; // xmm3_4
  __m128i v192; // xmm2
  int v193; // eax
  float v194; // xmm2_4
  int v195; // r8d
  int v196; // eax
  unsigned int v197; // ecx
  struct tagRECT *MoveRects; // rax
  LONG *p_right; // rax
  __m128i v200; // xmm3
  __m128i v201; // xmm4
  __m128i v202; // xmm6
  __m128i v203; // xmm0
  float v204; // xmm5_4
  float v205; // xmm2_4
  float v206; // xmm3_4
  float v207; // xmm4_4
  float v208; // xmm6_4
  float v209; // xmm1_4
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  void *v211; // rcx
  int v212; // eax
  unsigned int v213; // ecx
  int v214; // [rsp+28h] [rbp-E0h]
  int v215; // [rsp+30h] [rbp-D8h]
  bool v216[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v217; // [rsp+50h] [rbp-B8h] BYREF
  struct CShape *v218; // [rsp+58h] [rbp-B0h] BYREF
  void ***v219; // [rsp+60h] [rbp-A8h] BYREF
  struct IImageSource *v220; // [rsp+68h] [rbp-A0h]
  bool v221[8]; // [rsp+70h] [rbp-98h] BYREF
  struct IImageSource *v222; // [rsp+78h] [rbp-90h] BYREF
  int v223; // [rsp+80h] [rbp-88h]
  int v224; // [rsp+84h] [rbp-84h] BYREF
  CVisual *v225; // [rsp+88h] [rbp-80h] BYREF
  struct ISwapChainContent *v226; // [rsp+90h] [rbp-78h] BYREF
  float v227; // [rsp+98h] [rbp-70h]
  unsigned __int32 v228; // [rsp+9Ch] [rbp-6Ch]
  struct _D3DCOLORVALUE *v229; // [rsp+A0h] [rbp-68h]
  _QWORD v230[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v231[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v232; // [rsp+F8h] [rbp-10h]
  __int128 v233; // [rsp+108h] [rbp+0h] BYREF
  tagRECT rcDst; // [rsp+118h] [rbp+10h] BYREF
  __int128 v235; // [rsp+128h] [rbp+20h] BYREF
  __int128 v236; // [rsp+138h] [rbp+30h] BYREF
  float v237; // [rsp+148h] [rbp+40h] BYREF
  float v238; // [rsp+14Ch] [rbp+44h]
  float v239; // [rsp+150h] [rbp+48h]
  float v240; // [rsp+154h] [rbp+4Ch]
  int v241[4]; // [rsp+158h] [rbp+50h] BYREF
  tagRECT v242; // [rsp+168h] [rbp+60h] BYREF
  __int128 v243; // [rsp+178h] [rbp+70h] BYREF
  __int128 v244; // [rsp+188h] [rbp+80h]
  __int128 v245; // [rsp+198h] [rbp+90h]
  __int128 v246; // [rsp+1A8h] [rbp+A0h]
  __int16 v247; // [rsp+1B8h] [rbp+B0h]
  struct tagRECT v248; // [rsp+1C8h] [rbp+C0h] BYREF
  float v249; // [rsp+1D8h] [rbp+D0h]
  float v250; // [rsp+1DCh] [rbp+D4h]
  float v251; // [rsp+1E0h] [rbp+D8h]
  float v252; // [rsp+1E4h] [rbp+DCh]
  void **v253; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v254; // [rsp+1F0h] [rbp+E8h]
  void *lpMem; // [rsp+1F8h] [rbp+F0h]
  _DWORD v256[16]; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v257; // [rsp+240h] [rbp+138h]
  struct tagRECT v258; // [rsp+248h] [rbp+140h] BYREF
  char v259[80]; // [rsp+258h] [rbp+150h] BYREF
  struct tagRECT v260; // [rsp+2A8h] [rbp+1A0h] BYREF
  char v261[16]; // [rsp+2B8h] [rbp+1B0h] BYREF

  v10 = *((_DWORD *)this + 215) & 0xFFFFFFFD;
  v229 = a10;
  v220 = a4;
  *(_QWORD *)&v235 = a3;
  *(_QWORD *)&rcDst.left = a5;
  v226 = 0LL;
  v219 = 0LL;
  v218 = 0LL;
  v217 = 0LL;
  v216[1] = 0;
  v232 = 0;
  v221[1] = 0;
  v14 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x948u, 0LL);
    goto LABEL_86;
  }
  RenderBounds = CWindowNode::GetRenderBounds(
                   (_DWORD)this,
                   (_DWORD)a4,
                   (_DWORD)a5,
                   (unsigned int)&v233,
                   (__int64)&v216[2],
                   (__int64)&v224);
  v16 = RenderBounds;
  if ( RenderBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, RenderBounds, 0x94Eu, 0LL);
    goto LABEL_86;
  }
  v19 = (float)(int)v233;
  v20 = (float)SDWORD1(v233);
  v21 = (float)SDWORD2(v233);
  v22 = (float)SHIDWORD(v233);
  if ( *((_BYTE *)a2 + 6348) )
  {
    if ( g_DisplayManager )
    {
      v102 = 0LL;
      if ( *((_DWORD *)g_DisplayManager + 18) )
      {
        v103 = *((_QWORD *)g_DisplayManager + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v103 + 8 * v102)) )
        {
          v102 = (unsigned int)(v104 + 1);
          if ( (unsigned int)v102 >= v105 )
            goto LABEL_4;
        }
        *(_QWORD *)&v236 = __PAIR64__(LODWORD(v20), LODWORD(v19));
        *((_QWORD *)&v236 + 1) = __PAIR64__(LODWORD(v22), LODWORD(v21));
        TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 480));
        CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 1556); i = (unsigned int)(i + 1) )
          CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 775) + 8 * i), &v242, a2);
      }
    }
  }
LABEL_4:
  (*(void (__fastcall **)(struct IImageSource *, char *, float *))(*(_QWORD *)a4 + 64LL))(a4, v231, &v237);
  if ( (float)(v239 - v237) == 0.0 || (float)(v240 - v238) == 0.0 )
    goto LABEL_86;
  v23 = a9;
  if ( v216[2] && !a8 && !a9 )
  {
    v24 = *((_DWORD *)this + 216);
    v253 = &CRegionShape::`vftable';
    v254 = 0LL;
    v256[0] = 0;
    lpMem = v256;
    v257 = 0LL;
    v223 = v10 & 1;
    v236 = v233;
    v235 = v233;
    if ( v24 || *((_DWORD *)this + 218) || *((_DWORD *)this + 217) || *((_DWORD *)this + 219) )
    {
      v86 = *((_DWORD *)this + 166) + v24;
      rcDst.right = *((_DWORD *)this + 168) - *((_DWORD *)this + 217);
      rcDst.top = *((_DWORD *)this + 218) + *((_DWORD *)this + 167);
      v87 = *((_DWORD *)this + 169) - *((_DWORD *)this + 219);
      rcDst.left = v86;
      rcDst.bottom = v87;
      IntersectRect(&rcDst, &rcDst, (const RECT *)((char *)this + 712));
      if ( !EqualRect(&rcDst, (const RECT *)((char *)this + 712)) )
      {
        OffsetRect(&rcDst, -*((_DWORD *)this + 178), -*((_DWORD *)this + 179));
        if ( *((_BYTE *)this + 947) )
          OffsetRect(&rcDst, -*((_DWORD *)this + 237), -*((_DWORD *)this + 238));
        v242 = rcDst;
        TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v236, &v242);
      }
    }
    if ( a6 && (a6->cxLeftWidth || a6->cyTopHeight || a6->cxRightWidth || a6->cyBottomHeight) )
    {
      v23 = 1;
      v71 = a6->cxLeftWidth + v233;
      v72 = DWORD1(v235) + a6->cyTopHeight;
      v73 = HIDWORD(v235) - a6->cyBottomHeight;
      v74 = DWORD2(v235) - a6->cxRightWidth;
      *(_QWORD *)&v235 = __PAIR64__(v72, v71);
      if ( v74 <= v71 )
        DWORD2(v235) = v71;
      else
        DWORD2(v235) = v74;
      if ( v73 <= v72 )
        HIDWORD(v235) = v72;
      else
        HIDWORD(v235) = v73;
    }
    TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v235, &v236);
    if ( v23 && !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v235, &v236) )
    {
      v78 = v220;
      if ( v77
        && (v220 == *((struct IImageSource **)this + 93) || *((_BYTE *)this + 947))
        && *((_QWORD *)a2 + 46)
        && *((_BYTE *)a2 + 6133) )
      {
        memset_0(&v259[4], 0, 0x24uLL);
        *(_QWORD *)v259 = 0xFF00000100000002uLL;
        v108 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v259, 1);
        v16 = v108;
        if ( v108 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, v108, 0xAF8u, 0LL);
          CRegionShape::~CRegionShape((CRegionShape *)&v253);
          goto LABEL_86;
        }
        v216[1] = 1;
      }
      if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v235, v75, v25, v76) )
      {
        v110 = CRegionShape::BuildFromRects((__int64)&v253, (__int64)&v236, v79);
        v16 = v110;
        if ( v110 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v111, 0LL, 0, v110, 0xB19u, 0LL);
          goto LABEL_298;
        }
      }
      else
      {
        `vector constructor iterator'(
          v259,
          16LL,
          4LL,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
        v81 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(&v236, &v235, v80, v259);
        v82 = CRegionShape::BuildFromRects((__int64)&v253, (__int64)v259, v81);
        v16 = v82;
        if ( v82 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0xB15u, 0LL);
          goto LABEL_298;
        }
      }
      v244 = _xmm;
      v245 = _xmm;
      v246 = _xmm;
      v243 = _xmm;
      v247 = 32085;
      CMILMatrix::SetTranslation(
        (CMILMatrix *)&v243,
        COERCE_FLOAT(LODWORD(v237) ^ _xmm),
        COERCE_FLOAT(LODWORD(v238) ^ _xmm),
        0.0);
      v84 = CDrawingContext::FillShapeWithBitmap(a2, v78, (struct CMILMatrix *)&v243, (struct CShape *)&v253, 0);
      v16 = v84;
      if ( v84 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v84, 0xB23u, 0LL);
        goto LABEL_298;
      }
    }
    v26 = DWORD2(v235);
    if ( SDWORD2(v235) > (int)v235 )
    {
      v27 = HIDWORD(v235);
      if ( SHIDWORD(v235) > SDWORD1(v235) )
      {
        v28 = *((_BYTE *)a2 + 6347) == 0;
        v29 = (float)(int)v235;
        v30 = (float)SDWORD1(v235);
        v31 = (float)SDWORD2(v235);
        v32 = (float)SHIDWORD(v235);
        *(float *)v241 = (float)(int)v235;
        *(float *)&v241[1] = (float)SDWORD1(v235);
        *(float *)&v241[2] = (float)SDWORD2(v235);
        *(float *)&v241[3] = (float)SHIDWORD(v235);
        if ( v28 )
          goto LABEL_40;
        v33 = *((_DWORD *)a2 + 120);
        v242 = *(tagRECT *)v241;
        if ( v33 )
          v34 = (void *)(*((_QWORD *)a2 + 62) + 68LL * (unsigned int)(v33 - 1));
        else
          v34 = &CMILMatrix::Identity;
        CMILMatrix::Transform2DBoundsHelper<1>(v34, &v242, &rcDst);
        v35 = *(float *)&rcDst.right;
        v36 = *(float *)&rcDst.left;
        if ( *(float *)&rcDst.right > *(float *)&rcDst.left )
        {
          v37 = *(float *)&rcDst.bottom;
          v38 = *(float *)&rcDst.top;
          if ( *(float *)&rcDst.bottom > *(float *)&rcDst.top )
          {
            CScopedClipStack::GetClipBoundsWorld((char *)a2 + 1008, &v236);
            if ( *(float *)&v236 > v36 )
            {
              rcDst.left = v236;
              v36 = *(float *)&v236;
            }
            v39 = v38;
            if ( *((float *)&v236 + 1) > v38 )
            {
              rcDst.top = DWORD1(v236);
              v38 = *((float *)&v236 + 1);
              v39 = *((float *)&v236 + 1);
            }
            if ( v35 > *((float *)&v236 + 2) )
            {
              rcDst.right = DWORD2(v236);
              v35 = *((float *)&v236 + 2);
            }
            if ( v37 > *((float *)&v236 + 3) )
            {
              rcDst.bottom = HIDWORD(v236);
              v37 = *((float *)&v236 + 3);
            }
            if ( v35 <= v36 || v37 <= v39 )
            {
              v38 = 0.0;
              *(_QWORD *)&rcDst.right = 0LL;
              v36 = 0.0;
              rcDst.top = 0;
              rcDst.left = 0;
              v35 = 0.0;
              v37 = 0.0;
            }
            if ( v35 > v36 && v37 > v38 )
            {
              v40 = *(_QWORD *)(*((_QWORD *)a2 + 784) + 400LL);
              v242 = rcDst;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, tagRECT *, _QWORD))(*(_QWORD *)v40 + 56LL))(
                      v40,
                      &v242,
                      a7) )
              {
                v29 = *(float *)v241;
LABEL_40:
                v41 = v30;
                v42 = v31;
                v43 = v239 - v237;
                v44 = v29;
                *(float *)&rcDst.top = v30;
                v45 = v240 - v238;
                *(float *)&rcDst.right = v31;
                *(float *)&rcDst.left = v29;
                *(float *)&rcDst.bottom = v32;
                if ( v29 < 0.0 )
                {
                  rcDst.left = 0;
                  v44 = 0.0;
                }
                v46 = v30;
                if ( v30 < 0.0 )
                {
                  v41 = 0.0;
                  v46 = 0.0;
                  rcDst.top = 0;
                }
                v47 = v31;
                if ( v31 > v43 )
                {
                  v42 = v239 - v237;
                  v47 = v239 - v237;
                  *(float *)&rcDst.right = v239 - v237;
                }
                v48 = v32;
                if ( v32 > v45 )
                {
                  *(float *)&rcDst.bottom = v240 - v238;
                  v48 = v240 - v238;
                }
                if ( v47 <= v44 || v48 <= v46 )
                  goto LABEL_60;
                *((float *)&v236 + 1) = v41 + v238;
                *((float *)&v236 + 3) = v238 + v48;
                *(float *)&v236 = v44 + v237;
                *((float *)&v236 + 2) = v42 + v237;
                if ( v216[1] )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(&v236);
                if ( !*((_QWORD *)a2 + 45) && !*((_QWORD *)a2 + 787) )
                {
                  v49 = *((_DWORD *)a2 + 69);
                  v222 = 0LL;
                  v50 = CDrawingContext::ImageSourceToDrawListImageSource(a2, v220, 0LL, &v222);
                  v16 = v50;
                  if ( v50 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xB8Fu, 0LL);
                  }
                  else
                  {
                    LODWORD(v52) = (_DWORD)v222;
                    if ( !v222 )
                      goto LABEL_59;
                    v53 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
                            a2,
                            v222,
                            &v236,
                            &rcDst,
                            a7,
                            v49,
                            (_BYTE)v223);
                    v16 = v53;
                    if ( v53 >= 0 )
                    {
                      v52 = v222;
                      if ( v222 )
                      {
                        v222 = 0LL;
                        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v52 + 16LL))(v52);
                      }
                      goto LABEL_59;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0xB9Au, 0LL);
                  }
                  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v222);
                  goto LABEL_59;
                }
                CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v243, (const struct MilRectF *)&rcDst);
                v113 = CDrawingContext::FillShapeForBounds(a2, (const struct CShape *)&v243, v112);
                v16 = v113;
                if ( v113 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v113, 0xBA1u, 0LL);
                CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v243);
LABEL_59:
                if ( v16 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v52, 0LL, 0, v16, 0xB65u, 0LL);
                  goto LABEL_298;
                }
LABEL_60:
                if ( v216[1] )
                {
                  CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  v216[1] = 0;
                }
                if ( (v220 == *((struct IImageSource **)this + 93) || *((_BYTE *)this + 947)) && (_BYTE)v223 )
                {
                  CDrawingContext::RecordWindowMoveOptimization(a2, this, v25, 0LL);
                  *((_BYTE *)this + 945) = 0;
                  CWindowNode::ClipAgainstMargins((__int64)this, (__int64)&v233);
                  v28 = *((_BYTE *)a2 + 6348) == 0;
                  v55 = (float)(int)v233;
                  v225 = this;
                  v56 = (float)SDWORD1(v233);
                  v57 = (float)SDWORD2(v233);
                  v58 = (float)SHIDWORD(v233);
                  if ( !v28 )
                  {
                    if ( g_DisplayManager )
                    {
                      v115 = 0LL;
                      if ( *((_DWORD *)g_DisplayManager + 18) )
                      {
                        v116 = *((_QWORD *)g_DisplayManager + 6);
                        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v116 + 8 * v115)) )
                        {
                          v115 = (unsigned int)(v117 + 1);
                          if ( (unsigned int)v115 >= v118 )
                            goto LABEL_65;
                        }
                        if ( (*(unsigned __int8 (__fastcall **)(CWindowNode *))(*(_QWORD *)this + 312LL))(this) )
                        {
                          *(_QWORD *)&v236 = __PAIR64__(LODWORD(v56), LODWORD(v55));
                          *((_QWORD *)&v236 + 1) = __PAIR64__(LODWORD(v58), LODWORD(v57));
                          v119 = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 480));
                          CMILMatrix::Transform2DBoundsHelper<0>(v119);
                          CScopedClipStack::GetClipBoundsWorld((char *)a2 + 1008, &v233);
                          v120 = *(float *)&v233;
                          if ( *(float *)&v248.left > *(float *)&v233 )
                          {
                            LODWORD(v233) = v248.left;
                            v120 = *(float *)&v248.left;
                          }
                          v121 = *((float *)&v233 + 1);
                          if ( *(float *)&v248.top > *((float *)&v233 + 1) )
                          {
                            DWORD1(v233) = v248.top;
                            v121 = *(float *)&v248.top;
                          }
                          v122 = *((float *)&v233 + 2);
                          if ( *((float *)&v233 + 2) > *(float *)&v248.right )
                          {
                            DWORD2(v233) = v248.right;
                            v122 = *(float *)&v248.right;
                          }
                          v123 = *((float *)&v233 + 3);
                          if ( *((float *)&v233 + 3) > *(float *)&v248.bottom )
                          {
                            HIDWORD(v233) = v248.bottom;
                            v123 = *(float *)&v248.bottom;
                          }
                          if ( v122 <= v120 || v123 <= v121 )
                            v233 = 0uLL;
                          CVisual::AddToVisibleRegion(v225);
                          v125 = *((_DWORD *)a2 + 1556);
                          v126 = v125 + 1;
                          if ( v125 + 1 < v125 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v124, 0LL, 0, -2147024362, 0xB8u, 0LL);
                          }
                          else if ( v126 > *((_DWORD *)a2 + 1555) )
                          {
                            v127 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 6200, 8LL, 1LL, &v225);
                            if ( v127 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(v128, 0LL, 0, v127, 0xC3u, 0LL);
                          }
                          else
                          {
                            *(_QWORD *)(*((_QWORD *)a2 + 775) + 8LL * v125) = v225;
                            *((_DWORD *)a2 + 1556) = v126;
                          }
                        }
                      }
                    }
                  }
LABEL_65:
                  v16 = 0;
                }
                v59 = v43 - 0.0;
                v60 = 0;
                v61 = 0;
                v62 = (float)(v26 - v235);
                if ( v62 > (float)(v43 - 0.0) )
                {
                  *(_QWORD *)&v233 = __PAIR64__(LODWORD(v30), LODWORD(v43));
                  *((_QWORD *)&v233 + 1) = __PAIR64__(LODWORD(v32), LODWORD(v31));
                  v60 = (unsigned __int8)CDrawingContext::IsOccluded(a2, &v233, a7) == 0;
                }
                v63 = *(float *)v241;
                v64 = v45 - 0.0;
                v65 = (float)(v27 - DWORD1(v235));
                if ( v65 > (float)(v45 - 0.0) )
                {
                  *(_QWORD *)&v235 = __PAIR64__(LODWORD(v45), v241[0]);
                  *((_QWORD *)&v235 + 1) = __PAIR64__(LODWORD(v32), LODWORD(v31));
                  v61 = (unsigned __int8)CDrawingContext::IsOccluded(a2, &v235, a7) == 0;
                }
                if ( !v60 && !v61 )
                  goto LABEL_72;
                memset_0(&v259[4], 0, 0x24uLL);
                *(_QWORD *)v259 = 2LL;
                v129 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v259, 1);
                v16 = v129;
                if ( v129 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, v129, 0xBCCu, 0LL);
                  goto LABEL_298;
                }
                if ( v60 )
                {
                  v131 = *(float *)&v233 + COERCE_FLOAT(v233 ^ _xmm);
                  v132 = *((float *)&v233 + 2) + COERCE_FLOAT(v233 ^ _xmm);
                  *(float *)&v133 = *((float *)&v233 + 3) + COERCE_FLOAT(DWORD1(v233) ^ _xmm);
                  v243 = _xmm;
                  *((float *)&v233 + 1) = *((float *)&v233 + 1) + COERCE_FLOAT(DWORD1(v233) ^ _xmm);
                  v244 = _xmm;
                  *(float *)&v233 = v131;
                  *((_QWORD *)&v233 + 1) = __PAIR64__(v133, LODWORD(v132));
                  v245 = _xmm;
                  v246 = _xmm;
                  v247 = 32085;
                  CMILMatrix::SetTranslation((CMILMatrix *)&v243, v43, *(float *)&v241[1], 0.0);
                  v134 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v243, 1, 1);
                  v16 = v134;
                  if ( v134 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v135, 0LL, 0, v134, 0xBDBu, 0LL);
                    goto LABEL_197;
                  }
                  v136 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
                  v16 = v136;
                  if ( v136 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v137, 0LL, 0, v136, 0xBE1u, 0LL);
                    goto LABEL_199;
                  }
                  v243 = _xmm;
                  v244 = _xmm;
                  v245 = _xmm;
                  v246 = _xmm;
                  v247 = 32085;
                  CMILMatrix::SetTranslation(
                    (CMILMatrix *)&v243,
                    1.0 - (float)(v59 + v237),
                    COERCE_FLOAT(LODWORD(v238) ^ _xmm),
                    0.0);
                  CMILMatrix::Scale((CMILMatrix *)&v243, v132 - v131, v65 / v64, 1.0);
                  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v259, (const struct MilRectF *)&v233);
                  v138 = v220;
                  v139 = CDrawingContext::FillShapeWithBitmap(
                           a2,
                           v220,
                           (struct CMILMatrix *)&v243,
                           (struct CShape *)v259,
                           v10);
                  v16 = v139;
                  if ( v139 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0, v139, 0xBF5u, 0LL);
LABEL_193:
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v259);
LABEL_199:
                    CRegionShape::~CRegionShape((CRegionShape *)&v253);
                    CDrawingContext::PopTransformInternal(a2, 1);
                    goto LABEL_200;
                  }
                  CDrawingContext::PopTransformInternal(a2, 1);
                  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v259);
                  v63 = *(float *)v241;
                }
                else
                {
                  v138 = v220;
                }
                if ( !v61 )
                {
LABEL_208:
                  CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  v216[1] = 0;
                  goto LABEL_72;
                }
                LODWORD(v141) = v235 ^ _xmm;
                v142 = COERCE_FLOAT(DWORD1(v235) ^ _xmm) + *((float *)&v235 + 1);
                v143 = COERCE_FLOAT(DWORD1(v235) ^ _xmm) + *((float *)&v235 + 3);
                *(float *)&v235 = *(float *)&v235 + COERCE_FLOAT(v235 ^ _xmm);
                v244 = _xmm;
                *((float *)&v235 + 1) = v142;
                *((float *)&v235 + 3) = v143;
                v245 = _xmm;
                v246 = _xmm;
                *((float *)&v235 + 2) = *((float *)&v235 + 2) + v141;
                v243 = _xmm;
                v247 = 32085;
                CMILMatrix::SetTranslation((CMILMatrix *)&v243, v63, v45, 0.0);
                v144 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v243, 1, 1);
                v16 = v144;
                if ( v144 >= 0 )
                {
                  v146 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
                  v16 = v146;
                  if ( v146 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v147, 0LL, 0, v146, 0xC0Du, 0LL);
                    goto LABEL_199;
                  }
                  v245 = _xmm;
                  v244 = _xmm;
                  v243 = _xmm;
                  v246 = _xmm;
                  v247 = 32085;
                  CMILMatrix::SetTranslation(
                    (CMILMatrix *)&v243,
                    COERCE_FLOAT(LODWORD(v237) ^ _xmm),
                    1.0 - (float)(v64 + v238),
                    0.0);
                  CMILMatrix::Scale((CMILMatrix *)&v243, v62 / v59, v143 - v142, 1.0);
                  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v259, (const struct MilRectF *)&v235);
                  v148 = CDrawingContext::FillShapeWithBitmap(
                           a2,
                           v138,
                           (struct CMILMatrix *)&v243,
                           (struct CShape *)v259,
                           v10);
                  v16 = v148;
                  if ( v148 >= 0 )
                  {
                    CDrawingContext::PopTransformInternal(a2, 1);
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v259);
                    goto LABEL_208;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v149, 0LL, 0, v148, 0xC21u, 0LL);
                  goto LABEL_193;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v145, 0LL, 0, v144, 0xC07u, 0LL);
LABEL_197:
                CRegionShape::~CRegionShape((CRegionShape *)&v253);
LABEL_200:
                v67 = v217;
                v69 = v218;
LABEL_201:
                CDrawingContext::PopRenderOptionsInternal(a2, 1);
                goto LABEL_80;
              }
            }
          }
        }
      }
    }
    ++*((_DWORD *)this + 256);
LABEL_72:
    if ( v257 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v257 + 16LL))(v257);
    if ( v256 != lpMem )
    {
      operator delete(lpMem);
      v256[0] = 0;
      lpMem = v256;
    }
    v66 = v254;
    if ( v254 )
    {
      v254 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    goto LABEL_78;
  }
  `vector constructor iterator'(
    (char *)v241,
    4LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  v241[0] = v10;
  v88 = (struct CShape **)v230;
  v230[0] = *(_QWORD *)&rcDst.left;
  v223 = 0;
  v225 = (CVisual *)v230;
  while ( 1 )
  {
    v28 = *v88 == 0LL;
    lpMem = v256;
    v254 = 0LL;
    v253 = &CRegionShape::`vftable';
    v256[0] = 0;
    v257 = 0LL;
    if ( v28 )
      break;
    if ( !(_BYTE)v224 )
      goto LABEL_112;
    v150 = CRegionShape::BuildFromRects((__int64)&v253, (__int64)&v233, 1);
    v16 = v150;
    if ( v150 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v152, 0LL, 0, v150, 0x991u, 0LL);
      goto LABEL_298;
    }
    if ( v219 )
      ((void (__fastcall *)(void ***, __int64))**v219)(v219, 1LL);
    v153 = *v88;
    v219 = 0LL;
    v154 = CShape::Combine(&v253, v151, v153, 0LL, 1, &v219);
    v16 = v154;
    if ( v154 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v155, 0LL, 0, v154, 0x99Bu, 0LL);
      goto LABEL_298;
    }
    v156 = v219;
LABEL_217:
    *v88 = (struct CShape *)v156;
LABEL_112:
    v243 = _xmm;
    v244 = _xmm;
    v245 = _xmm;
    v246 = _xmm;
    v247 = 32085;
    v89 = CWindowNode::ApplyTextureToLocalTransform(this, v220, (struct CMILMatrix *)&v243);
    v16 = v89;
    if ( v89 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v89, 0x9ACu, 0LL);
      goto LABEL_298;
    }
    if ( a9 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v243);
      CMilRectLFromMilRectF(&v258, v261, v159);
      v160 = *((_DWORD *)this + 178);
      v161 = 0;
      v162 = *((_DWORD *)this + 179);
      v163 = *((_DWORD *)this + 174) - v160;
      v164 = *((_DWORD *)this + 176) - v160;
      v165 = *((_DWORD *)this + 175) - v162;
      LODWORD(v222) = *((_DWORD *)this + 177) - v162;
      v221[0] = 0;
      v216[0] = 0;
      if ( v164 - v163 > v258.right - v258.left )
      {
        v221[0] = 1;
        if ( *((_BYTE *)this + 942) )
        {
          v248.left = v163;
          v248.right = v258.left + v164 - v258.right;
        }
        else
        {
          v248.right = v164;
          v248.left = v163 + v258.right - v258.left;
        }
        v248.top = v165;
        v248.bottom = v258.bottom + v165 - v258.top;
      }
      if ( (int)v222 - v165 > v258.bottom - v258.top )
      {
        v260.left = v163;
        v161 = 1;
        v260.top = v258.bottom + v165 - v258.top;
        v216[0] = 1;
        v260.right = v164;
        v260.bottom = (int)v222;
      }
      if ( v221[0] )
      {
        if ( v217 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v217)(v217, 1LL);
        v172 = *v88;
        v217 = 0LL;
        v222 = v172;
        v173 = CShape::ClipWithRect(v172, &v248, &v217);
        v16 = v173;
        if ( v173 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v174, 0LL, 0, v173, 0xA0Cu, 0LL);
          goto LABEL_298;
        }
        v166 = v229;
        v175 = CDrawingContext::FillRectangularShapeWithColor(a2, v217, v229);
        v16 = v175;
        if ( v175 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0, v175, 0xA10u, 0LL);
          goto LABEL_298;
        }
        if ( v216[0] )
          goto LABEL_228;
        v67 = v217;
      }
      else
      {
        if ( !v161 )
          goto LABEL_114;
        v166 = v229;
LABEL_228:
        if ( v217 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v217)(v217, 1LL);
        v217 = 0LL;
        v222 = *(struct IImageSource **)v225;
        v167 = CShape::ClipWithRect(v222, &v260, &v217);
        v16 = v167;
        if ( v167 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v168, 0LL, 0, v167, 0xA1Bu, 0LL);
          goto LABEL_298;
        }
        v169 = v166;
        v67 = v217;
        v170 = CDrawingContext::FillRectangularShapeWithColor(a2, v217, v169);
        v16 = v170;
        if ( v170 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v171, 0LL, 0, v170, 0xA1Fu, 0LL);
LABEL_288:
          CRegionShape::~CRegionShape((CRegionShape *)&v253);
          goto LABEL_79;
        }
      }
      if ( v218 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v218)(v218, 1LL);
      v218 = 0LL;
      v177 = CShape::ClipWithRect(v222, &v258, &v218);
      v16 = v177;
      if ( v177 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v178, 0LL, 0, v177, 0xA2Du, 0LL);
        goto LABEL_288;
      }
      v88 = (struct CShape **)v225;
      *(_QWORD *)v225 = v218;
    }
LABEL_114:
    v91 = v220;
    v216[0] = 0;
    if ( (**(int (__fastcall ***)(struct IImageSource *, GUID *, struct ISwapChainContent **))v220)(
           v220,
           &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
           &v226) >= 0 )
    {
      v179 = CDrawingContext::DrawAsOverlay((COverlayContext **)a2, v226, v216);
      v16 = v179;
      if ( v179 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v180, 0LL, 0, v179, 0xA3Au, 0LL);
        goto LABEL_298;
      }
      v181 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v226 + 112LL))(v226);
      if ( v216[0] || v181 )
        goto LABEL_121;
      v91 = v220;
    }
    v92 = (struct IImageSource *)*((_QWORD *)this + 111);
    if ( v92 )
      v92 = (struct IImageSource *)((char *)v92 + 64);
    if ( v91 == v92
      && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v243 - 1.0)) & _xmm) >= 0.0000011920929
       || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v244 + 1) - 1.0)) & _xmm) >= 0.0000011920929) )
    {
      memset_0(&v259[4], 0, 0x24uLL);
      *(_QWORD *)v259 = 0x100000002LL;
      v182 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v259, 1);
      v16 = v182;
      if ( v182 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v183, 0LL, 0, v182, 0xA4Cu, 0LL);
        goto LABEL_298;
      }
      v91 = v220;
      v216[1] = 1;
    }
    v93 = CDrawingContext::FillShapeWithBitmap(a2, v91, (struct CMILMatrix *)&v243, *v88, v241[v223]);
    v16 = v93;
    if ( v93 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, v93, 0xA54u, 0LL);
      goto LABEL_298;
    }
    if ( v216[1] )
    {
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
      v216[1] = 0;
    }
LABEL_121:
    v95 = (struct IImageSource *)*((_QWORD *)this + 111);
    v96 = (struct IImageSource *)((char *)v95 + 64);
    if ( v95 )
      v95 = (struct IImageSource *)((char *)v95 + 64);
    v97 = v220;
    if ( v220 == v95 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque(v96) && v216[2] )
        CDrawingContext::RecordWindowMoveOptimization(a2, this, v184, &v221[1]);
      v97 = v220;
    }
    v98 = *((_QWORD *)this + 111);
    v99 = (CCompositionSurfaceBitmap *)(v98 + 64);
    if ( v98 )
      v98 += 64LL;
    if ( v97 == (struct IImageSource *)v98 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque(v99) && v216[2] )
      {
        if ( *((_BYTE *)this + 945) )
        {
          if ( *((_BYTE *)this + 1016) )
          {
            if ( !v221[1] )
            {
              v185 = *((_DWORD *)this + 178);
              v186 = *((_DWORD *)this + 179);
              v187 = *((_DWORD *)this + 174) - v185;
              v216[0] = 0;
              v188 = (float)v187;
              v189 = _mm_cvtsi32_si128(*((_DWORD *)this + 175) - v186);
              v190 = *((_DWORD *)this + 176) - v185;
              *(float *)&v236 = v188;
              LODWORD(v191) = _mm_cvtepi32_ps(v189).m128_u32[0];
              v192 = _mm_cvtsi32_si128(v190);
              v193 = *((_DWORD *)this + 177) - v186;
              *((float *)&v236 + 1) = v191;
              LODWORD(v194) = _mm_cvtepi32_ps(v192).m128_u32[0];
              *((float *)&v236 + 2) = v194;
              *((float *)&v236 + 3) = (float)v193;
              if ( a8
                || a9
                && (float)(v194 - v188) >= (float)(v239 - v237)
                && (float)((float)v193 - v191) >= (float)(v240 - v238) )
              {
                if ( (_QWORD)v235 )
                  v195 = *(_DWORD *)(v235 + 32);
                else
                  v195 = 0;
                v196 = CDrawingContext::CalcRectFullyVisible(a2, (const struct MilRectF *)&v236, v195, v216);
                v16 = v196;
                if ( v196 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v197, 0LL, 0, v196, 0xA84u, 0LL);
                  goto LABEL_298;
                }
                if ( v216[0] )
                {
                  v216[0] = 0;
                  LODWORD(v222) = 0;
                  MoveRects = CDwmMetaRegion::GetMoveRects((CWindowNode *)((char *)this + 976), (unsigned int *)&v222);
                  if ( MoveRects )
                  {
                    if ( (_DWORD)v222 )
                    {
                      p_right = &MoveRects->right;
                      *(_QWORD *)&rcDst.left = (unsigned int)v222;
                      v222 = (struct IImageSource *)p_right;
                      do
                      {
                        v200 = _mm_cvtsi32_si128(*p_right);
                        v201 = _mm_cvtsi32_si128(p_right[1]);
                        v202 = _mm_cvtsi32_si128(*((_DWORD *)this + 248));
                        v203 = _mm_cvtsi32_si128(*((_DWORD *)this + 249));
                        v204 = (float)*(p_right - 2);
                        v205 = (float)*(p_right - 1);
                        v249 = v204;
                        v250 = v205;
                        LODWORD(v206) = _mm_cvtepi32_ps(v200).m128_u32[0];
                        LODWORD(v207) = _mm_cvtepi32_ps(v201).m128_u32[0];
                        v251 = v206;
                        v252 = v207;
                        LODWORD(v208) = _mm_cvtepi32_ps(v202).m128_u32[0];
                        v227 = v208;
                        v228 = _mm_cvtepi32_ps(v203).m128_u32[0];
                        if ( a9 && *((_BYTE *)this + 942) )
                        {
                          v250 = v205 + 0.0;
                          v252 = v207 + 0.0;
                          v209 = (float)(*((float *)&v236 + 2) - *(float *)&v236) - (float)(v239 - v237);
                          v251 = v206 + v209;
                          v249 = v209 + v204;
                          v227 = v209 + v208;
                        }
                        CDrawingContext::RecordMoveOptimization(a2, this, v214, v215, (__int64)v216);
                        p_right = (LONG *)((char *)v222 + 16);
                        v28 = (*(_QWORD *)&rcDst.left)-- == 1LL;
                        v222 = (struct IImageSource *)((char *)v222 + 16);
                      }
                      while ( !v28 );
                      if ( v216[0] )
                      {
                        *((_BYTE *)this + 945) = 0;
                        MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a2);
                        CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
                        v211 = (void *)*((_QWORD *)MoveRenderPassInfoRef + 2);
                        *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
                        if ( v211 )
                          DeleteObject(v211);
                        v88 = (struct CShape **)v225;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v97 = v220;
    }
    v100 = *((_QWORD *)this + 111);
    v101 = (CCompositionSurfaceBitmap *)(v100 + 64);
    if ( v100 )
      v100 += 64LL;
    if ( v97 == (struct IImageSource *)v100 && CCompositionSurfaceBitmap::IsOpaque(v101) && v216[2] )
    {
      CWindowNode::ClipAgainstMargins((__int64)this, (__int64)&v233);
      *(float *)&v242.left = (float)(int)v233;
      *(float *)&v242.top = (float)SDWORD1(v233);
      *(float *)&v242.right = (float)SDWORD2(v233);
      *(float *)&v242.bottom = (float)SHIDWORD(v233);
      v212 = CDrawingContext::VisualWasRendered(a2, &v242, this);
      v16 = v212;
      if ( v212 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v213, 0LL, 0, v212, 0xAD0u, 0LL);
        goto LABEL_298;
      }
    }
    CRegionShape::~CRegionShape((CRegionShape *)&v253);
    v225 = (CVisual *)++v88;
    if ( ++v223 )
      goto LABEL_78;
  }
  v157 = CRegionShape::BuildFromRects((__int64)&v253, (__int64)&v233, 1);
  v16 = v157;
  if ( v157 >= 0 )
  {
    v156 = &v253;
    goto LABEL_217;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v158, 0LL, 0, v157, 0x9A2u, 0LL);
LABEL_298:
  CRegionShape::~CRegionShape((CRegionShape *)&v253);
LABEL_78:
  v67 = v217;
LABEL_79:
  v68 = v219;
  v69 = v218;
  if ( v216[1] )
    goto LABEL_201;
LABEL_80:
  if ( v68 )
    ((void (__fastcall *)(void ***, __int64))**v68)(v68, 1LL);
  if ( v69 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v69)(v69, 1LL);
  if ( v67 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v67)(v67, 1LL);
LABEL_86:
  if ( v226 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v226 + 16LL))(v226);
  return (unsigned int)v16;
}
