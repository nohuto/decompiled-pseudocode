/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800AF030 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x1800132E8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180013414 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x180013B8C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014BE0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18001752C (-CalculateSubtractionRectangles@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180017588 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001B8EC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180046B54 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18005E640 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180068F08 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x18008DA68 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800ADF38 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800ADFE8 (-ClipAgainstMargins@CWindowNode@@QEAAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x1800B0798 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMil.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B10A8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800B16F8 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x180161F34 (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 *     ?FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801650A4 (-FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18016590C (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180165BA0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x1801667A8 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180167484 (-VisualWasRendered@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017ED50 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x180180690 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801B6078 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801B67E8 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801B69A0 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1801B9528 (-Deflate@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEAV3@3@Z @ 0x1801B9580 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEBV-$TMilRect_@HUtagRECT@@UMilPointAnd.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x18021D710 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
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
        bool a10,
        struct _D3DCOLORVALUE *a11)
{
  unsigned int v11; // esi
  int v13; // r13d
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // r15d
  int RenderBounds; // eax
  unsigned int v19; // ecx
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm3_4
  CVisual *v24; // rdi
  int v25; // ecx
  LONG v26; // edx
  LONG v27; // r11d
  LONG v28; // r10d
  LONG v29; // r9d
  unsigned __int64 v30; // r8
  int cxLeftWidth; // eax
  int v32; // ebx
  int v33; // edx
  int v34; // eax
  int v35; // r13d
  LONG v36; // ecx
  int v37; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  bool v42; // zf
  float v43; // xmm12_4
  float v44; // xmm6_4
  float v45; // xmm10_4
  float v46; // xmm11_4
  int v47; // eax
  void *v48; // rcx
  float v49; // xmm9_4
  float v50; // xmm7_4
  float v51; // xmm8_4
  float v52; // xmm6_4
  float v53; // xmm1_4
  __int64 v54; // rcx
  float v55; // xmm0_4
  float v56; // xmm5_4
  float v57; // xmm13_4
  float v58; // xmm14_4
  float v59; // xmm4_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  float v62; // xmm3_4
  int (__fastcall **v63)(struct IImageSource *, GUID *, struct tagRECT *); // rax
  CVisual *v64; // rbx
  CVisual *v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r8
  int v69; // eax
  unsigned int v70; // ecx
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // eax
  unsigned int v74; // ecx
  float v75; // xmm6_4
  float v76; // xmm7_4
  float v77; // xmm8_4
  float v78; // xmm9_4
  float v79; // xmm7_4
  bool v80; // bl
  bool v81; // di
  float v82; // xmm9_4
  float v83; // xmm6_4
  float v84; // xmm8_4
  __int64 v85; // rcx
  void (__fastcall ***v86)(_QWORD, __int64); // r9
  void (__fastcall ***v87)(_QWORD, __int64); // rdi
  struct CShape *v88; // rbx
  __int64 v90; // r8
  int v91; // eax
  int v92; // eax
  unsigned int v93; // ecx
  int v94; // eax
  unsigned int v95; // ecx
  LONG v96; // ecx
  LONG v97; // eax
  LONG v98; // ecx
  LONG v99; // r13d
  __int64 v100; // rax
  CShape *v101; // rbx
  struct CShape **v102; // rax
  CVisual *v103; // rbx
  bool v104; // si
  struct CShape *v105; // rax
  int v106; // eax
  unsigned int v107; // ecx
  int (__fastcall **v108)(struct IImageSource *, GUID *, struct ISwapChainContent **); // rax
  struct IImageSource *v109; // rax
  int v110; // eax
  unsigned int v111; // ecx
  struct IImageSource *v112; // rax
  CCompositionSurfaceBitmap *v113; // rcx
  struct IImageSource *v114; // rax
  CCompositionSurfaceBitmap *v115; // rcx
  struct IImageSource *v116; // rax
  CCompositionSurfaceBitmap *v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // r9
  int v120; // edx
  unsigned int v121; // r8d
  CMILMatrix *TopByReference; // rax
  __int64 i; // rdi
  int v124; // eax
  unsigned int v125; // ecx
  int v126; // eax
  unsigned int v127; // ecx
  unsigned __int8 IsNormalDesktopRender; // al
  __int64 v129; // r8
  __int64 v130; // r10
  int v131; // eax
  unsigned int v132; // ecx
  __int64 v133; // rdx
  __int64 v134; // r9
  int v135; // edx
  unsigned int v136; // r8d
  CMILMatrix *v137; // rax
  float v138; // xmm1_4
  float v139; // xmm4_4
  float v140; // xmm3_4
  float v141; // xmm2_4
  unsigned int v142; // ecx
  unsigned int v143; // eax
  unsigned int v144; // edx
  int v145; // eax
  unsigned int v146; // ecx
  int v147; // eax
  unsigned int v148; // ecx
  float v149; // xmm12_4
  float v150; // xmm10_4
  unsigned int v151; // xmm0_4
  int v152; // eax
  unsigned int v153; // ecx
  int v154; // eax
  unsigned int v155; // ecx
  int v156; // eax
  unsigned int v157; // ecx
  float v158; // xmm3_4
  float v159; // xmm4_4
  float v160; // xmm10_4
  float v161; // xmm8_4
  int v162; // eax
  unsigned int v163; // ecx
  int v164; // eax
  unsigned int v165; // ecx
  int v166; // eax
  unsigned int v167; // ecx
  int v168; // eax
  __int64 v169; // rdx
  unsigned int v170; // ecx
  int v171; // eax
  unsigned int v172; // ecx
  __int64 v173; // r8
  int v174; // eax
  int v175; // eax
  __int64 v176; // rdx
  unsigned int v177; // ecx
  int v178; // eax
  unsigned int v179; // ecx
  int v180; // eax
  unsigned int v181; // ecx
  int v182; // eax
  __int64 v183; // rdx
  unsigned int v184; // ecx
  int v185; // eax
  unsigned int v186; // ecx
  void ***v187; // rcx
  int v188; // eax
  unsigned int v189; // ecx
  int v190; // ecx
  char v191; // r15
  int v192; // eax
  LONG v193; // r8d
  LONG v194; // r9d
  LONG v195; // edx
  int v196; // eax
  unsigned int v197; // ecx
  int v198; // eax
  unsigned int v199; // ecx
  int v200; // eax
  unsigned int v201; // ecx
  int v202; // eax
  unsigned int v203; // ecx
  int v204; // eax
  unsigned int v205; // ecx
  int v206; // eax
  unsigned int v207; // ecx
  char v208; // al
  int v209; // eax
  unsigned int v210; // ecx
  HWND v211; // r8
  int v212; // edx
  int v213; // ecx
  int v214; // eax
  float v215; // xmm0_4
  __m128i v216; // xmm3
  unsigned int v217; // eax
  float v218; // xmm3_4
  __m128i v219; // xmm2
  int v220; // eax
  float v221; // xmm2_4
  int v222; // r8d
  int v223; // eax
  unsigned int v224; // ecx
  struct tagRECT *MoveRects; // rax
  unsigned int *p_right; // rax
  __m128i v227; // xmm5
  __m128i v228; // xmm3
  __m128i v229; // xmm6
  __m128i v230; // xmm0
  float v231; // xmm4_4
  float v232; // xmm2_4
  float v233; // xmm5_4
  float v234; // xmm3_4
  float v235; // xmm6_4
  float v236; // xmm1_4
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  void *v238; // rcx
  int v239; // eax
  unsigned int v240; // ecx
  int v241; // [rsp+28h] [rbp-E0h]
  int v242; // [rsp+30h] [rbp-D8h]
  bool v243[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v244; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v245; // [rsp+58h] [rbp-B0h]
  void (__fastcall ***v246)(_QWORD, __int64); // [rsp+60h] [rbp-A8h]
  void (__fastcall ***v247)(_QWORD, __int64); // [rsp+68h] [rbp-A0h]
  struct CShape *v248; // [rsp+70h] [rbp-98h] BYREF
  char v249; // [rsp+78h] [rbp-90h]
  _BYTE v250[15]; // [rsp+79h] [rbp-8Fh] BYREF
  struct _D3DCOLORVALUE *v251; // [rsp+88h] [rbp-80h]
  struct CShape **v252; // [rsp+98h] [rbp-70h]
  char v253[8]; // [rsp+A0h] [rbp-68h] BYREF
  CVisual *v254; // [rsp+A8h] [rbp-60h]
  struct ISwapChainContent *v255; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v256; // [rsp+B8h] [rbp-50h] BYREF
  char v257[64]; // [rsp+C8h] [rbp-40h] BYREF
  int v258; // [rsp+108h] [rbp+0h]
  struct tagRECT v259; // [rsp+118h] [rbp+10h] BYREF
  struct tagRECT v260; // [rsp+128h] [rbp+20h] BYREF
  CVisual *v261[2]; // [rsp+138h] [rbp+30h] BYREF
  struct tagRECT rcDst; // [rsp+148h] [rbp+40h] BYREF
  float v263; // [rsp+158h] [rbp+50h] BYREF
  float v264; // [rsp+15Ch] [rbp+54h]
  float v265; // [rsp+160h] [rbp+58h]
  float v266; // [rsp+164h] [rbp+5Ch]
  float v267; // [rsp+168h] [rbp+60h] BYREF
  float v268; // [rsp+16Ch] [rbp+64h]
  float v269; // [rsp+170h] [rbp+68h]
  float v270; // [rsp+174h] [rbp+6Ch]
  struct tagRECT v271; // [rsp+178h] [rbp+70h] BYREF
  struct tagRECT v272; // [rsp+188h] [rbp+80h] BYREF
  struct tagRECT v273; // [rsp+198h] [rbp+90h] BYREF
  void **v274; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v275; // [rsp+1B0h] [rbp+A8h]
  void *v276; // [rsp+1B8h] [rbp+B0h]
  _DWORD v277[16]; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v278; // [rsp+200h] [rbp+F8h]
  __int128 v279; // [rsp+208h] [rbp+100h] BYREF
  __int128 v280; // [rsp+218h] [rbp+110h] BYREF
  __int128 v281; // [rsp+228h] [rbp+120h]
  __int128 v282; // [rsp+238h] [rbp+130h]
  __int16 v283; // [rsp+248h] [rbp+140h]
  __int64 v284; // [rsp+260h] [rbp+158h]
  float v285; // [rsp+268h] [rbp+160h]
  float v286; // [rsp+26Ch] [rbp+164h]
  float v287; // [rsp+270h] [rbp+168h]
  float v288; // [rsp+274h] [rbp+16Ch]
  float v289[4]; // [rsp+278h] [rbp+170h] BYREF
  char v290[80]; // [rsp+288h] [rbp+180h] BYREF
  struct tagRECT v291; // [rsp+2D8h] [rbp+1D0h] BYREF
  char v292[16]; // [rsp+2E8h] [rbp+1E0h] BYREF

  v11 = *((_DWORD *)this + 219) & 0xFFFFFFFD;
  v13 = (int)this;
  v251 = a11;
  v254 = this;
  *(_QWORD *)&v259.left = a3;
  *(_QWORD *)&rcDst.left = a5;
  v255 = 0LL;
  v247 = 0LL;
  v246 = 0LL;
  v244 = 0LL;
  v256 = (struct tagRECT)0LL;
  v243[1] = 0;
  v258 = 0;
  v243[2] = 0;
  v15 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x9ACu);
    goto LABEL_126;
  }
  RenderBounds = CWindowNode::GetRenderBounds(
                   v13,
                   (_DWORD)a4,
                   (_DWORD)a5,
                   (unsigned int)&v260,
                   (__int64)&v243[3],
                   (__int64)v250);
  v17 = RenderBounds;
  if ( RenderBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, RenderBounds, 0x9B2u);
    goto LABEL_126;
  }
  left = (float)v260.left;
  top = (float)v260.top;
  right = (float)v260.right;
  bottom = (float)v260.bottom;
  if ( *((_BYTE *)a2 + 6348) )
  {
    if ( qword_180308258 )
    {
      v118 = 0LL;
      if ( *((_DWORD *)qword_180308258 + 18) )
      {
        v119 = *((_QWORD *)qword_180308258 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v119 + 8 * v118)) )
        {
          v118 = (unsigned int)(v120 + 1);
          if ( (unsigned int)v118 >= v121 )
            goto LABEL_4;
        }
        v263 = left;
        v264 = top;
        v265 = right;
        v266 = bottom;
        TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 480));
        CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 1556); i = (unsigned int)(i + 1) )
          CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 775) + 8 * i), &v272, a2);
      }
    }
  }
LABEL_4:
  (*(void (__fastcall **)(struct IImageSource *, char *, float *))(*(_QWORD *)a4 + 64LL))(a4, v257, &v267);
  if ( (float)(v269 - v267) == 0.0 || (float)(v270 - v268) == 0.0 )
    goto LABEL_126;
  if ( v243[3] && !a9 && !a10 )
  {
    v24 = v254;
    v274 = &CRegionShape::`vftable';
    v276 = v277;
    v275 = 0LL;
    v25 = *((_DWORD *)v254 + 220);
    v277[0] = 0;
    v278 = 0LL;
    *(_DWORD *)&v250[3] = v11 & 1;
    v243[2] = 0;
    *(struct tagRECT *)v261 = v260;
    v259 = v260;
    if ( (v25 || *((_DWORD *)v254 + 222) || *((_DWORD *)v254 + 221) || *((_DWORD *)v254 + 223))
      && (v96 = *((_DWORD *)v254 + 170) + v25,
          rcDst.right = *((_DWORD *)v254 + 172) - *((_DWORD *)v254 + 221),
          rcDst.top = *((_DWORD *)v254 + 222) + *((_DWORD *)v254 + 171),
          v97 = *((_DWORD *)v254 + 173) - *((_DWORD *)v254 + 223),
          rcDst.left = v96,
          rcDst.bottom = v97,
          IntersectRect(&rcDst, &rcDst, (const RECT *)((char *)v254 + 728)),
          !EqualRect(&rcDst, (const RECT *)((char *)v24 + 728))) )
    {
      OffsetRect(&rcDst, -*((_DWORD *)v24 + 182), -*((_DWORD *)v24 + 183));
      if ( *((_BYTE *)v24 + 965) )
        OffsetRect(&rcDst, -*((_DWORD *)v24 + 242), -*((_DWORD *)v24 + 243));
      v27 = rcDst.left;
      v26 = v260.left;
      if ( rcDst.left > v260.left )
        LODWORD(v261[0]) = rcDst.left;
      else
        v27 = (LONG)v261[0];
      v28 = HIDWORD(v261[0]);
      v29 = (LONG)v261[1];
      v98 = rcDst.right;
      LODWORD(v248) = v261[1];
      if ( rcDst.top > SHIDWORD(v261[0]) )
        v28 = rcDst.top;
      HIDWORD(v261[0]) = v28;
      if ( rcDst.right < SLODWORD(v261[1]) )
      {
        v29 = rcDst.right;
        LODWORD(v261[1]) = rcDst.right;
      }
      v30 = HIDWORD(v261[1]);
      v99 = HIDWORD(v261[1]);
      v100 = HIDWORD(*(_QWORD *)&rcDst.right);
      if ( rcDst.right >= (int)v248 )
        v98 = (int)v248;
      if ( rcDst.bottom < SHIDWORD(v261[1]) )
      {
        v30 = (unsigned int)rcDst.bottom;
        HIDWORD(v261[1]) = rcDst.bottom;
      }
      if ( v98 <= v27 )
        goto LABEL_166;
      if ( rcDst.bottom >= v99 )
        LODWORD(v100) = v99;
      if ( (int)v100 <= v28 )
      {
LABEL_166:
        v30 = 0LL;
        v28 = 0;
        v29 = 0;
        v261[1] = 0LL;
        v261[0] = 0LL;
        v27 = 0;
      }
    }
    else
    {
      v26 = v260.left;
      v27 = (LONG)v261[0];
      v28 = HIDWORD(v261[0]);
      v29 = (LONG)v261[1];
      v30 = HIDWORD(v261[1]);
    }
    if ( a6 && ((cxLeftWidth = a6->cxLeftWidth) != 0 || a6->cyTopHeight || a6->cxRightWidth || a6->cyBottomHeight) )
    {
      v35 = v259.top + a6->cyTopHeight;
      LODWORD(v251) = v26 + cxLeftWidth;
      v259.left = v26 + cxLeftWidth;
      LODWORD(v248) = v259.right - a6->cxRightWidth;
      v259.right = (int)v248;
      v34 = v259.bottom - a6->cyBottomHeight;
      v243[2] = 1;
      LODWORD(v245) = v34;
      v259.bottom = v34;
      if ( a8 )
      {
        LODWORD(v251) = (_DWORD)v251 - v26;
        v35 -= v260.top;
        v32 = (_DWORD)v248 + *((_DWORD *)v24 + 184) - *((_DWORD *)v24 + 182) - v260.right;
        v33 = (int)v251;
        LODWORD(v248) = v32;
        v259.right = v32;
        v34 = v245 + *((_DWORD *)v24 + 185) - *((_DWORD *)v24 + 183) - v260.bottom;
        LODWORD(v245) = v34;
        v259.bottom = v34;
        v259.left = (int)v251;
      }
      else
      {
        v32 = (int)v248;
        v33 = (int)v251;
      }
      if ( v32 <= v33 )
      {
        v32 = v33;
        LODWORD(v248) = v33;
        v259.right = v33;
      }
      if ( v34 > v35 )
        goto LABEL_21;
      v34 = v35;
      v259.bottom = v35;
    }
    else
    {
      v32 = v259.right;
      v33 = v259.left;
      v34 = v259.bottom;
      v35 = v259.top;
      LODWORD(v248) = v259.right;
      LODWORD(v251) = v259.left;
    }
    LODWORD(v245) = v34;
LABEL_21:
    if ( v27 > v33 )
    {
      LODWORD(v251) = v27;
      v259.left = v27;
    }
    v36 = v32;
    if ( v28 > v35 )
      v35 = v28;
    v259.top = v35;
    if ( v29 < v32 )
    {
      v32 = v29;
      LODWORD(v248) = v29;
      v259.right = v29;
    }
    v37 = v34;
    v38 = v29;
    if ( v29 >= v36 )
      v38 = v36;
    if ( (int)v30 < v37 )
    {
      v39 = v30;
      LODWORD(v245) = v30;
      v259.bottom = v30;
    }
    else
    {
      v39 = v245;
    }
    if ( v38 <= (int)v251 )
      goto LABEL_195;
    v40 = v30;
    if ( (int)v30 >= v37 )
      v40 = v37;
    if ( v40 <= v35 )
    {
LABEL_195:
      v39 = 0;
      v32 = 0;
      v35 = 0;
      LODWORD(v245) = 0;
      v41 = 0;
      LODWORD(v251) = 0;
      LODWORD(v248) = 0;
      v259 = (struct tagRECT)0LL;
    }
    else
    {
      v41 = (int)v251;
    }
    if ( !v243[2] || v35 == v28 && v41 == v27 && v32 == v29 && v39 == (_DWORD)v30 )
    {
LABEL_37:
      if ( v32 > v41 && v39 > v35 )
      {
        v42 = *((_BYTE *)a2 + 6347) == 0;
        v43 = (float)v41;
        v44 = (float)v35;
        v45 = (float)v32;
        v46 = (float)v39;
        *(float *)&v271.left = (float)v41;
        *(float *)&v271.top = (float)v35;
        *(float *)&v271.right = (float)v32;
        *(float *)&v271.bottom = (float)v39;
        if ( v42 )
          goto LABEL_58;
        v47 = *((_DWORD *)a2 + 120);
        v272 = v271;
        if ( v47 )
          v48 = (void *)(*((_QWORD *)a2 + 62) + 68LL * (unsigned int)(v47 - 1));
        else
          v48 = &CMILMatrix::Identity;
        CMILMatrix::Transform2DBoundsHelper<1>(v48, &v272, &v259);
        v49 = *(float *)&v259.right;
        v50 = *(float *)&v259.left;
        if ( *(float *)&v259.right > *(float *)&v259.left )
        {
          v51 = *(float *)&v259.bottom;
          v52 = *(float *)&v259.top;
          if ( *(float *)&v259.bottom > *(float *)&v259.top )
          {
            CScopedClipStack::GetClipBoundsWorld((struct CDrawingContext *)((char *)a2 + 1008), (__int64)&v263);
            if ( v263 > v50 )
            {
              *(float *)&v259.left = v263;
              v50 = v263;
            }
            v53 = v52;
            if ( v264 > v52 )
            {
              *(float *)&v259.top = v264;
              v52 = v264;
              v53 = v264;
            }
            if ( v49 > v265 )
            {
              *(float *)&v259.right = v265;
              v49 = v265;
            }
            if ( v51 > v266 )
            {
              *(float *)&v259.bottom = v266;
              v51 = v266;
            }
            if ( v49 <= v50 || v51 <= v53 )
            {
              v52 = 0.0;
              v50 = 0.0;
              v259 = (struct tagRECT)0LL;
              v49 = 0.0;
              v51 = 0.0;
            }
            if ( v49 > v50 && v51 > v52 )
            {
              v54 = *(_QWORD *)(*((_QWORD *)a2 + 784) + 392LL);
              v272 = v259;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct tagRECT *, _QWORD))(*(_QWORD *)v54 + 56LL))(
                      v54,
                      &v272,
                      a7) )
              {
                v44 = *(float *)&v271.top;
LABEL_58:
                v55 = v43;
                v56 = (float)v32;
                v57 = v269 - v267;
                v58 = v270 - v268;
                *(_QWORD *)&v259.left = __PAIR64__(LODWORD(v44), LODWORD(v43));
                v59 = v44;
                *(float *)&v259.right = (float)v32;
                *(float *)&v259.bottom = v46;
                if ( v43 < 0.0 )
                {
                  v55 = 0.0;
                  v259.left = 0;
                }
                v60 = v44;
                if ( v44 < 0.0 )
                {
                  v59 = 0.0;
                  v60 = 0.0;
                  v259.top = 0;
                }
                v61 = (float)v32;
                if ( v45 > v57 )
                {
                  v56 = v269 - v267;
                  v61 = v269 - v267;
                  *(float *)&v259.right = v269 - v267;
                }
                v62 = v46;
                if ( v46 > v58 )
                {
                  *(float *)&v259.bottom = v270 - v268;
                  v62 = v270 - v268;
                }
                if ( v61 <= v55 || v62 <= v60 )
                  goto LABEL_95;
                v263 = v55 + v267;
                v265 = v267 + v56;
                v266 = v62 + v268;
                v264 = v268 + v59;
                if ( v243[1] )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(&v263);
                if ( *((_QWORD *)a2 + 45) || *((_QWORD *)a2 + 787) )
                {
                  CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v279, (const struct MilRectF *)&v259);
                  v131 = CDrawingContext::FillShapeForBounds(a2, (const struct CShape *)&v279);
                  v17 = v131;
                  if ( v131 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, v131, 0xB63u);
                  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v279);
LABEL_94:
                  if ( v17 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v17, 0xC3Eu);
                    goto LABEL_387;
                  }
LABEL_95:
                  if ( v243[1] )
                  {
                    CDrawingContext::PopRenderOptionsInternal(a2, 1);
                    v243[1] = 0;
                  }
                  if ( (a4 == *((struct IImageSource **)v24 + 95) || *((_BYTE *)v24 + 965)) && v250[3] )
                  {
                    CDrawingContext::RecordWindowMoveOptimization(a2, v24, (HWND)v30, 0LL);
                    *((_BYTE *)v24 + 963) = 0;
                    CWindowNode::ClipAgainstMargins((__int64)v24);
                    v42 = *((_BYTE *)a2 + 6348) == 0;
                    v75 = (float)v260.left;
                    v261[0] = v24;
                    v76 = (float)v260.top;
                    v77 = (float)v260.right;
                    v78 = (float)v260.bottom;
                    if ( !v42 )
                    {
                      if ( qword_180308258 )
                      {
                        v133 = 0LL;
                        if ( *((_DWORD *)qword_180308258 + 18) )
                        {
                          v134 = *((_QWORD *)qword_180308258 + 6);
                          while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v134 + 8 * v133)) )
                          {
                            v133 = (unsigned int)(v135 + 1);
                            if ( (unsigned int)v133 >= v136 )
                              goto LABEL_100;
                          }
                          if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v24 + 272LL))(v24) )
                          {
                            v263 = v75;
                            v264 = v76;
                            v265 = v77;
                            v266 = v78;
                            v137 = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 480));
                            CMILMatrix::Transform2DBoundsHelper<0>(v137);
                            CScopedClipStack::GetClipBoundsWorld(
                              (struct CDrawingContext *)((char *)a2 + 1008),
                              (__int64)&v260);
                            v138 = *(float *)&v260.left;
                            if ( *(float *)&v273.left > *(float *)&v260.left )
                            {
                              v260.left = v273.left;
                              v138 = *(float *)&v273.left;
                            }
                            v139 = *(float *)&v260.top;
                            if ( *(float *)&v273.top > *(float *)&v260.top )
                            {
                              v260.top = v273.top;
                              v139 = *(float *)&v273.top;
                            }
                            v140 = *(float *)&v260.right;
                            if ( *(float *)&v260.right > *(float *)&v273.right )
                            {
                              v260.right = v273.right;
                              v140 = *(float *)&v273.right;
                            }
                            v141 = *(float *)&v260.bottom;
                            if ( *(float *)&v260.bottom > *(float *)&v273.bottom )
                            {
                              v260.bottom = v273.bottom;
                              v141 = *(float *)&v273.bottom;
                            }
                            if ( v140 <= v138 || v141 <= v139 )
                              v260 = (struct tagRECT)0LL;
                            CVisual::AddToVisibleRegion(v261[0]);
                            v143 = *((_DWORD *)a2 + 1556);
                            v144 = v143 + 1;
                            if ( v143 + 1 < v143 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(
                                v142,
                                0LL,
                                0,
                                v143 + 1 < v143 ? 0x80070216 : 0,
                                0xB5u);
                            }
                            else if ( v144 > *((_DWORD *)a2 + 1555) )
                            {
                              v145 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 6200, 8, 1, v261);
                              if ( v145 < 0 )
                                MilInstrumentationCheckHR_MaybeFailFast(v146, 0LL, 0, v145, 0xC0u);
                            }
                            else
                            {
                              *(CVisual **)(*((_QWORD *)a2 + 775) + 8LL * v143) = v261[0];
                              *((_DWORD *)a2 + 1556) = v144;
                            }
                          }
                        }
                      }
                    }
LABEL_100:
                    v44 = *(float *)&v271.top;
                    v17 = 0;
                  }
                  v79 = v57 - 0.0;
                  v80 = 0;
                  v81 = 0;
                  v82 = (float)((int)v248 - (int)v251);
                  if ( v82 > (float)(v57 - 0.0) )
                  {
                    *(_QWORD *)&v260.left = __PAIR64__(LODWORD(v44), LODWORD(v57));
                    *(_QWORD *)&v260.right = __PAIR64__(LODWORD(v46), LODWORD(v45));
                    v80 = (unsigned __int8)CDrawingContext::IsOccluded(a2, &v260, a7) == 0;
                  }
                  v83 = v58 - 0.0;
                  v84 = (float)(v245 - v35);
                  if ( v84 > (float)(v58 - 0.0) )
                  {
                    *(_QWORD *)&v259.left = __PAIR64__(LODWORD(v58), LODWORD(v43));
                    *(_QWORD *)&v259.right = __PAIR64__(LODWORD(v46), LODWORD(v45));
                    v81 = (unsigned __int8)CDrawingContext::IsOccluded(a2, &v259, a7) == 0;
                  }
                  if ( !v80 && !v81 )
                    goto LABEL_107;
                  memset_0(&v290[4], 0, 0x24uLL);
                  *(_QWORD *)v290 = 2LL;
                  v147 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v290, 1);
                  v17 = v147;
                  if ( v147 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v148, 0LL, 0, v147, 0xCA5u);
                    goto LABEL_387;
                  }
                  if ( v80 )
                  {
                    v149 = *(float *)&v260.left + COERCE_FLOAT(v260.left ^ _xmm);
                    v150 = *(float *)&v260.right + COERCE_FLOAT(v260.left ^ _xmm);
                    *(float *)&v151 = *(float *)&v260.bottom + COERCE_FLOAT(v260.top ^ _xmm);
                    v279 = _xmm;
                    *(float *)&v260.top = *(float *)&v260.top + COERCE_FLOAT(v260.top ^ _xmm);
                    v280 = _xmm;
                    *(float *)&v260.left = v149;
                    *(_QWORD *)&v260.right = __PAIR64__(v151, LODWORD(v150));
                    v281 = _xmm;
                    v282 = _xmm;
                    v283 = 32085;
                    CMILMatrix::SetTranslation((CMILMatrix *)&v279, v57, *(float *)&v271.top, 0.0);
                    v152 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v279, 1, 1);
                    v17 = v152;
                    if ( v152 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v153, 0LL, 0, v152, 0xCB4u);
                      goto LABEL_280;
                    }
                    v154 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
                    v17 = v154;
                    if ( v154 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v155, 0LL, 0, v154, 0xCBAu);
                      goto LABEL_282;
                    }
                    v279 = _xmm;
                    v280 = _xmm;
                    v281 = _xmm;
                    v282 = _xmm;
                    v283 = 32085;
                    CMILMatrix::SetTranslation(
                      (CMILMatrix *)&v279,
                      1.0 - (float)(v267 + v79),
                      COERCE_FLOAT(LODWORD(v268) ^ _xmm),
                      0.0);
                    CMILMatrix::Scale((CMILMatrix *)&v279, v150 - v149, v84 / v83, 1.0);
                    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v290, (const struct MilRectF *)&v260);
                    v156 = CDrawingContext::FillShapeWithBitmap(
                             a2,
                             a4,
                             (struct CMILMatrix *)&v279,
                             (struct CShape *)v290,
                             v11);
                    v17 = v156;
                    if ( v156 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v157, 0LL, 0, v156, 0xCCEu);
LABEL_276:
                      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v290);
LABEL_282:
                      CRegionShape::~CRegionShape((CRegionShape *)&v274);
                      CDrawingContext::PopTransformInternal(a2, 1);
                      goto LABEL_283;
                    }
                    CDrawingContext::PopTransformInternal(a2, 1);
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v290);
                    v43 = *(float *)&v271.left;
                  }
                  if ( !v81 )
                  {
LABEL_273:
                    CDrawingContext::PopRenderOptionsInternal(a2, 1);
                    v243[1] = 0;
                    goto LABEL_107;
                  }
                  LODWORD(v158) = v259.left ^ _xmm;
                  LODWORD(v159) = v259.top ^ _xmm;
                  v160 = *(float *)&v259.top + COERCE_FLOAT(v259.top ^ _xmm);
                  v161 = *(float *)&v259.bottom + COERCE_FLOAT(v259.top ^ _xmm);
                  *(float *)&v259.left = *(float *)&v259.left + COERCE_FLOAT(v259.left ^ _xmm);
                  *(float *)&v259.top = v160;
                  *(float *)&v259.bottom = *(float *)&v259.bottom + v159;
                  *(float *)&v259.right = *(float *)&v259.right + v158;
                  CMILMatrix::SetToIdentity((CMILMatrix *)&v279);
                  CMILMatrix::SetTranslation((CMILMatrix *)&v279, v43, v58, 0.0);
                  v162 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v279, 1, 1);
                  v17 = v162;
                  if ( v162 >= 0 )
                  {
                    v164 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
                    v17 = v164;
                    if ( v164 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v165, 0LL, 0, v164, 0xCE6u);
                      goto LABEL_282;
                    }
                    CMILMatrix::SetToIdentity((CMILMatrix *)&v279);
                    CMILMatrix::SetTranslation(
                      (CMILMatrix *)&v279,
                      COERCE_FLOAT(LODWORD(v267) ^ _xmm),
                      1.0 - (float)(v268 + v83),
                      0.0);
                    CMILMatrix::Scale((CMILMatrix *)&v279, v82 / v79, v161 - v160, 1.0);
                    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v290, (const struct MilRectF *)&v259);
                    v166 = CDrawingContext::FillShapeWithBitmap(
                             a2,
                             a4,
                             (struct CMILMatrix *)&v279,
                             (struct CShape *)v290,
                             v11);
                    v17 = v166;
                    if ( v166 >= 0 )
                    {
                      CDrawingContext::PopTransformInternal(a2, 1);
                      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v290);
                      goto LABEL_273;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v167, 0LL, 0, v166, 0xCFAu);
                    goto LABEL_276;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v163, 0LL, 0, v162, 0xCE0u);
LABEL_280:
                  CRegionShape::~CRegionShape((CRegionShape *)&v274);
LABEL_283:
                  v88 = v244;
                  v87 = v246;
LABEL_284:
                  CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  goto LABEL_116;
                }
                LODWORD(v252) = *((_DWORD *)a2 + 69);
                v63 = *(int (__fastcall ***)(struct IImageSource *, GUID *, struct tagRECT *))a4;
                v64 = 0LL;
                *(_QWORD *)&rcDst.left = 0LL;
                v261[0] = 0LL;
                *(_QWORD *)v253 = 0LL;
                v65 = 0LL;
                if ( (*v63)(a4, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &rcDst) >= 0 )
                {
                  IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender(a2);
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v129 + 176))(
                    v130,
                    *((_QWORD *)a2 + 52),
                    0LL,
                    IsNormalDesktopRender);
                }
                v66 = *(_QWORD *)v253;
                if ( *(_QWORD *)v253 )
                {
                  *(_QWORD *)v253 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
                }
                v17 = (*(__int64 (__fastcall **)(struct IImageSource *, char *))(*(_QWORD *)a4 + 80LL))(a4, v253);
                if ( v17 >= 0 )
                {
                  (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)a4 + 8LL))(a4);
                  v65 = a4;
                  if ( *((_BYTE *)a2 + 6048)
                    && (!*((_BYTE *)a2 + 6049)
                      ? (v67 = *(_QWORD *)(*((_QWORD *)a2 + 757) + 24LL))
                      : (v67 = *((_QWORD *)a2 + 417)),
                        v67) )
                  {
                    v68 = v67 + 132;
                  }
                  else
                  {
                    v68 = 0LL;
                  }
                  v69 = (*(__int64 (__fastcall **)(struct IImageSource *, _QWORD, __int64, struct tagRECT *))(*(_QWORD *)a4 + 120LL))(
                          a4,
                          0LL,
                          v68,
                          &v272);
                  v17 = v69;
                  if ( v69 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x233Eu);
                    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_85:
                    v71 = *(_QWORD *)v253;
                    if ( *(_QWORD *)v253 )
                    {
                      *(_QWORD *)v253 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
                    }
                    v72 = *(_QWORD *)&rcDst.left;
                    if ( *(_QWORD *)&rcDst.left )
                    {
                      *(_QWORD *)&rcDst.left = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
                    }
                    if ( v17 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v17, 0xB51u);
                    }
                    else
                    {
                      if ( !v64 )
                      {
LABEL_93:
                        v24 = v254;
                        goto LABEL_94;
                      }
                      v73 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
                              a2,
                              v64,
                              &v263,
                              &v259,
                              a7,
                              (_DWORD)v252,
                              v250[3]);
                      v17 = v73;
                      if ( v73 >= 0 )
                      {
                        (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v64 + 16LL))(v64);
                        goto LABEL_93;
                      }
                      MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0xB5Cu);
                    }
                    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v261);
                    goto LABEL_93;
                  }
                  CDrawingContext::RecordBitmapContentInfo(a2, 0LL);
                }
                v64 = v65;
                v261[0] = v65;
                goto LABEL_85;
              }
            }
          }
        }
      }
      ++*((_DWORD *)v24 + 260);
LABEL_107:
      if ( v278 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v278 + 16LL))(v278);
      if ( v277 != v276 )
      {
        WPF::ProcessHeapImpl::Free(v276);
        v277[0] = 0;
        v276 = v277;
      }
      v85 = v275;
      if ( v275 )
      {
        v275 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
      }
      goto LABEL_113;
    }
    v243[0] = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v259);
    if ( v243[0] && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v261)
      || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(&v259)
      && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(v261) )
    {
LABEL_148:
      v39 = v245;
      goto LABEL_37;
    }
    if ( !v250[3]
      || a4 != *((struct IImageSource **)v24 + 95) && !*((_BYTE *)v24 + 965)
      || !*((_QWORD *)a2 + 46)
      || !*((_BYTE *)a2 + 6133) )
    {
LABEL_144:
      if ( v243[0] )
      {
        v126 = CRegionShape::BuildFromRects((__int64)&v274, (__int64)v261, 1);
        v17 = v126;
        if ( v126 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v127, 0LL, 0, v126, 0xBF2u);
          goto LABEL_387;
        }
      }
      else
      {
        `vector constructor iterator'(
          v290,
          16LL,
          4LL,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
        v91 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(v261, &v259, v90, v290);
        v92 = CRegionShape::BuildFromRects((__int64)&v274, (__int64)v290, v91);
        v17 = v92;
        if ( v92 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0xBEEu);
          goto LABEL_387;
        }
      }
      v280 = _xmm;
      v281 = _xmm;
      v282 = _xmm;
      v279 = _xmm;
      v283 = 32085;
      CMILMatrix::SetTranslation(
        (CMILMatrix *)&v279,
        COERCE_FLOAT(LODWORD(v267) ^ _xmm),
        COERCE_FLOAT(LODWORD(v268) ^ _xmm),
        0.0);
      v94 = CDrawingContext::FillShapeWithBitmap(a2, a4, (struct CMILMatrix *)&v279, (struct CShape *)&v274, 0);
      v17 = v94;
      if ( v94 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0xBFCu);
        goto LABEL_387;
      }
      v41 = (int)v251;
      goto LABEL_148;
    }
    memset_0(&v290[4], 0, 0x24uLL);
    *(_QWORD *)v290 = 0xFF00000100000002uLL;
    v124 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v290, 1);
    v17 = v124;
    if ( v124 >= 0 )
    {
      v243[1] = 1;
      goto LABEL_144;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v125, 0LL, 0, v124, 0xBD1u);
LABEL_220:
    CRegionShape::~CRegionShape((CRegionShape *)&v274);
    goto LABEL_126;
  }
  `vector constructor iterator'(
    v253,
    4LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  if ( a8
    && !v243[3]
    && (unsigned __int8)CWindowNode::GetAlphaMarginsRects(
                          (_DWORD)v254,
                          a8,
                          (_DWORD)a6,
                          (unsigned int)&v260,
                          (__int64)&v272,
                          (__int64)v289) )
  {
    v274 = &CRegionShape::`vftable';
    v275 = 0LL;
    v277[0] = 0;
    v278 = 0LL;
    v276 = v277;
    v168 = CRegionShape::BuildFromRects((__int64)&v274, (__int64)v289, 1);
    v17 = v168;
    if ( v168 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v170, 0LL, 0, v168, 0xA07u);
      goto LABEL_220;
    }
    v101 = *(CShape **)&rcDst.left;
    v171 = CShape::Combine((CShape *)&v274, v169, *(CShape **)&rcDst.left, 0LL, 1, (struct CShape **)&v256);
    v17 = v171;
    if ( v171 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v172, 0LL, 0, v171, 0xA0Eu);
      goto LABEL_296;
    }
    *(_QWORD *)&v279 = &CRegionShape::`vftable';
    *((_QWORD *)&v279 + 1) = 0LL;
    DWORD2(v280) = 0;
    v284 = 0LL;
    *(_QWORD *)&v280 = (char *)&v280 + 8;
    if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v289) )
    {
      v178 = CRegionShape::BuildFromRects((__int64)&v279, (__int64)&v272, 1);
      v17 = v178;
      if ( v178 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v179, 0LL, 0, v178, 0xA2Fu);
        goto LABEL_294;
      }
    }
    else
    {
      `vector constructor iterator'(
        v290,
        16LL,
        4LL,
        (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      v174 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(&v272, v289, v173, v290);
      v175 = CRegionShape::BuildFromRects((__int64)&v279, (__int64)v290, v174);
      v17 = v175;
      if ( v175 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v177, 0LL, 0, v175, 0xA2Bu);
LABEL_294:
        CRegionShape::~CRegionShape((CRegionShape *)&v279);
LABEL_296:
        CRegionShape::~CRegionShape((CRegionShape *)&v274);
        goto LABEL_122;
      }
    }
    v180 = CShape::Combine((CShape *)&v279, v176, v101, 0LL, 1, (struct CShape **)&v256.right);
    v17 = v180;
    if ( v180 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v181, 0LL, 0, v180, 0xA3Bu);
      goto LABEL_294;
    }
    CRegionShape::~CRegionShape((CRegionShape *)&v279);
    CRegionShape::~CRegionShape((CRegionShape *)&v274);
    if ( *(_QWORD *)&v256.left && *(_QWORD *)&v256.right )
    {
      LODWORD(v245) = 2;
      v272 = v256;
      *(_DWORD *)&v253[4] = 0;
      goto LABEL_171;
    }
  }
  else
  {
    v101 = *(CShape **)&rcDst.left;
  }
  *(_QWORD *)&v272.left = v101;
  LODWORD(v245) = 1;
LABEL_171:
  v102 = (struct CShape **)&v272;
  v103 = v254;
  *(_DWORD *)v253 = v11;
  v104 = v243[2];
  v252 = (struct CShape **)&v272;
  *(_DWORD *)&v250[3] = 0;
  while ( 1 )
  {
    v105 = *v102;
    v275 = 0LL;
    v274 = &CRegionShape::`vftable';
    v276 = v277;
    v277[0] = 0;
    v278 = 0LL;
    v248 = v105;
    if ( !v105 )
      break;
    if ( !v250[0] )
      goto LABEL_174;
    v182 = CRegionShape::BuildFromRects((__int64)&v274, (__int64)&v260, 1);
    v17 = v182;
    if ( v182 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v184, 0LL, 0, v182, 0xA69u);
      goto LABEL_387;
    }
    if ( v247 )
      (**v247)(v247, 1LL);
    *(_QWORD *)&rcDst.left = 0LL;
    v185 = CShape::Combine((CShape *)&v274, v183, v248, 0LL, 1, (struct CShape **)&rcDst);
    v17 = v185;
    if ( v185 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v186, 0LL, 0, v185, 0xA73u);
      CRegionShape::~CRegionShape((CRegionShape *)&v274);
      v86 = *(void (__fastcall ****)(_QWORD, __int64))&rcDst.left;
      goto LABEL_114;
    }
    v187 = *(void ****)&rcDst.left;
    v247 = *(void (__fastcall ****)(_QWORD, __int64))&rcDst.left;
LABEL_310:
    *v252 = (struct CShape *)v187;
LABEL_174:
    v279 = _xmm;
    v280 = _xmm;
    v281 = _xmm;
    v282 = _xmm;
    v283 = 32085;
    v106 = CWindowNode::ApplyTextureToLocalTransform(v103, a4, (struct CMILMatrix *)&v279);
    v17 = v106;
    if ( v106 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v107, 0LL, 0, v106, 0xA84u);
      goto LABEL_387;
    }
    if ( a10 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v279);
      CMilRectLFromMilRectF(&v271, v292);
      v190 = *((_DWORD *)v103 + 182);
      v191 = 0;
      v192 = *((_DWORD *)v103 + 183);
      v193 = *((_DWORD *)v103 + 178) - v190;
      v194 = *((_DWORD *)v103 + 180) - v190;
      v195 = *((_DWORD *)v103 + 179) - v192;
      LODWORD(v248) = *((_DWORD *)v103 + 181) - v192;
      v249 = 0;
      v243[0] = 0;
      if ( v194 - v193 > v271.right - v271.left )
      {
        v249 = 1;
        if ( *((_BYTE *)v103 + 960) )
        {
          v273.left = v193;
          v273.right = v271.left + v194 - v271.right;
        }
        else
        {
          v273.right = v194;
          v273.left = v271.right + v193 - v271.left;
        }
        v273.top = v195;
        v273.bottom = v271.bottom + v195 - v271.top;
      }
      if ( (int)v248 - v195 > v271.bottom - v271.top )
      {
        v291.left = v193;
        v191 = 1;
        v291.top = v271.bottom + v195 - v271.top;
        v243[0] = 1;
        v291.right = v194;
        v291.bottom = (int)v248;
      }
      if ( v249 )
      {
        if ( v244 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v244)(v244, 1LL);
        v244 = 0LL;
        v248 = *v252;
        v196 = CShape::ClipWithRect(v248, &v273, &v244);
        v17 = v196;
        if ( v196 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v197, 0LL, 0, v196, 0xAE4u);
          goto LABEL_387;
        }
        v198 = CDrawingContext::FillRectangularShapeWithColor(a2, v244, v251);
        v17 = v198;
        if ( v198 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v199, 0LL, 0, v198, 0xAE8u);
          goto LABEL_387;
        }
        if ( v243[0] )
        {
LABEL_326:
          if ( v244 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v244)(v244, 1LL);
          v244 = 0LL;
          v248 = *v252;
          v200 = CShape::ClipWithRect(v248, &v291, &v244);
          v17 = v200;
          if ( v200 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v201, 0LL, 0, v200, 0xAF3u);
            goto LABEL_387;
          }
          v202 = CDrawingContext::FillRectangularShapeWithColor(a2, v244, v251);
          v17 = v202;
          if ( v202 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v203, 0LL, 0, v202, 0xAF7u);
            goto LABEL_387;
          }
        }
        if ( v246 )
          (**v246)(v246, 1LL);
        *(_QWORD *)&rcDst.left = 0LL;
        v204 = CShape::ClipWithRect(v248, &v271, (struct CShape **)&rcDst);
        v17 = v204;
        if ( v204 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v205, 0LL, 0, v204, 0xB05u);
          CRegionShape::~CRegionShape((CRegionShape *)&v274);
          v86 = v247;
          v87 = *(void (__fastcall ****)(_QWORD, __int64))&rcDst.left;
          goto LABEL_115;
        }
        v246 = *(void (__fastcall ****)(_QWORD, __int64))&rcDst.left;
        *v252 = *(struct CShape **)&rcDst.left;
        goto LABEL_176;
      }
      if ( v191 )
        goto LABEL_326;
    }
LABEL_176:
    v108 = *(int (__fastcall ***)(struct IImageSource *, GUID *, struct ISwapChainContent **))a4;
    v243[0] = 0;
    if ( (*v108)(a4, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v255) < 0 )
      goto LABEL_177;
    v206 = CDrawingContext::DrawAsOverlay((COverlayContext **)a2, v255, v243);
    v17 = v206;
    if ( v206 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v207, 0LL, 0, v206, 0xB12u);
      goto LABEL_387;
    }
    v208 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v255 + 112LL))(v255);
    if ( !v243[0] && !v208 )
    {
LABEL_177:
      v109 = (struct IImageSource *)*((_QWORD *)v103 + 113);
      if ( v109 )
        v109 = (struct IImageSource *)((char *)v109 + 64);
      if ( a4 == v109
        && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v279 - 1.0)) & _xmm) >= 0.0000011920929
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v280 + 1) - 1.0)) & _xmm) >= 0.0000011920929) )
      {
        memset_0(&v290[4], 0, 0x24uLL);
        *(_QWORD *)v290 = 0x100000002LL;
        v209 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v290, 1);
        v17 = v209;
        if ( v209 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v210, 0LL, 0, v209, 0xB24u);
          goto LABEL_387;
        }
        v243[1] = 1;
      }
      v110 = CDrawingContext::FillShapeWithBitmap(
               a2,
               a4,
               (struct CMILMatrix *)&v279,
               *v252,
               *(_DWORD *)&v253[4 * *(unsigned int *)&v250[3]]);
      v17 = v110;
      if ( v110 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v111, 0LL, 0, v110, 0xB2Cu);
        goto LABEL_387;
      }
      if ( v243[1] )
      {
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
        v243[1] = 0;
      }
    }
    v112 = (struct IImageSource *)*((_QWORD *)v103 + 113);
    v113 = (struct IImageSource *)((char *)v112 + 64);
    if ( v112 )
      v112 = (struct IImageSource *)((char *)v112 + 64);
    if ( a4 == v112 && CCompositionSurfaceBitmap::IsOpaque(v113) && v243[3] )
    {
      CDrawingContext::RecordWindowMoveOptimization(a2, v103, v211, &v243[2]);
      v104 = v243[2];
    }
    v114 = (struct IImageSource *)*((_QWORD *)v103 + 113);
    v115 = (struct IImageSource *)((char *)v114 + 64);
    if ( v114 )
      v114 = (struct IImageSource *)((char *)v114 + 64);
    if ( a4 == v114 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque(v115) )
      {
        if ( v243[3] )
        {
          if ( *((_BYTE *)v103 + 963) )
          {
            if ( *((_BYTE *)v103 + 1032) )
            {
              if ( !v104 )
              {
                v212 = *((_DWORD *)v103 + 182);
                v213 = *((_DWORD *)v103 + 183);
                v214 = *((_DWORD *)v103 + 178) - v212;
                v243[0] = 0;
                v215 = (float)v214;
                v216 = _mm_cvtsi32_si128(*((_DWORD *)v103 + 179) - v213);
                v217 = *((_DWORD *)v103 + 180) - v212;
                v263 = v215;
                LODWORD(v218) = _mm_cvtepi32_ps(v216).m128_u32[0];
                v219 = _mm_cvtsi32_si128(v217);
                v220 = *((_DWORD *)v103 + 181) - v213;
                v264 = v218;
                LODWORD(v221) = _mm_cvtepi32_ps(v219).m128_u32[0];
                v265 = v221;
                v266 = (float)v220;
                if ( a9
                  || a10
                  && (float)(v221 - v215) >= (float)(v269 - v267)
                  && (float)((float)v220 - v218) >= (float)(v270 - v268) )
                {
                  if ( *(_QWORD *)&v259.left )
                    v222 = *(_DWORD *)(*(_QWORD *)&v259.left + 32LL);
                  else
                    v222 = 0;
                  v223 = CDrawingContext::CalcRectFullyVisible(a2, (const struct MilRectF *)&v263, v222, v243);
                  v17 = v223;
                  if ( v223 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v224, 0LL, 0, v223, 0xB5Cu);
                    goto LABEL_387;
                  }
                  if ( v243[0] )
                  {
                    v243[0] = 0;
                    LODWORD(v248) = 0;
                    MoveRects = CDwmMetaRegion::GetMoveRects((CVisual *)((char *)v103 + 992), (unsigned int *)&v248);
                    if ( MoveRects )
                    {
                      if ( (_DWORD)v248 )
                      {
                        p_right = (unsigned int *)&MoveRects->right;
                        v248 = (struct CShape *)(unsigned int)v248;
                        *(_QWORD *)&rcDst.left = p_right;
                        do
                        {
                          v227 = _mm_cvtsi32_si128(*p_right);
                          v228 = _mm_cvtsi32_si128(p_right[1]);
                          v229 = _mm_cvtsi32_si128(*((_DWORD *)v103 + 252));
                          v230 = _mm_cvtsi32_si128(*((_DWORD *)v103 + 253));
                          v231 = (float)(int)*(p_right - 2);
                          v232 = (float)(int)*(p_right - 1);
                          v285 = v231;
                          v286 = v232;
                          LODWORD(v233) = _mm_cvtepi32_ps(v227).m128_u32[0];
                          LODWORD(v234) = _mm_cvtepi32_ps(v228).m128_u32[0];
                          v287 = v233;
                          v288 = v234;
                          LODWORD(v235) = _mm_cvtepi32_ps(v229).m128_u32[0];
                          *(float *)v261 = v235;
                          HIDWORD(v261[0]) = _mm_cvtepi32_ps(v230).m128_u32[0];
                          if ( a10 && *((_BYTE *)v103 + 960) )
                          {
                            v286 = v232 + 0.0;
                            v288 = v234 + 0.0;
                            v236 = (float)(v265 - v263) - (float)(v269 - v267);
                            v285 = v236 + v231;
                            v287 = v236 + v233;
                            *(float *)v261 = v236 + v235;
                          }
                          CDrawingContext::RecordMoveOptimization(a2, v103, v241, v242, (__int64)v243);
                          p_right = (unsigned int *)(*(_QWORD *)&rcDst.left + 16LL);
                          v42 = v248 == (struct CShape *)1;
                          v248 = (struct CShape *)((char *)v248 - 1);
                          *(_QWORD *)&rcDst.left += 16LL;
                        }
                        while ( !v42 );
                        if ( v243[0] )
                        {
                          *((_BYTE *)v103 + 963) = 0;
                          MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(v103, a2);
                          CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
                          v238 = (void *)*((_QWORD *)MoveRenderPassInfoRef + 2);
                          *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
                          if ( v238 )
                            DeleteObject(v238);
                          v103 = v254;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v116 = (struct IImageSource *)*((_QWORD *)v103 + 113);
    v117 = (struct IImageSource *)((char *)v116 + 64);
    if ( v116 )
      v116 = (struct IImageSource *)((char *)v116 + 64);
    if ( a4 == v116 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque(v117) )
      {
        if ( v243[3] )
        {
          CWindowNode::ClipAgainstMargins((__int64)v103);
          v289[0] = (float)v260.left;
          v289[1] = (float)v260.top;
          v289[2] = (float)v260.right;
          v289[3] = (float)v260.bottom;
          v239 = CDrawingContext::VisualWasRendered(a2, v289, v103);
          v17 = v239;
          if ( v239 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v240, 0LL, 0, v239, 0xBA8u);
            goto LABEL_387;
          }
        }
      }
    }
    CRegionShape::~CRegionShape((CRegionShape *)&v274);
    v102 = v252 + 1;
    ++*(_DWORD *)&v250[3];
    ++v252;
    if ( *(_DWORD *)&v250[3] >= (unsigned int)v245 )
      goto LABEL_113;
  }
  v188 = CRegionShape::BuildFromRects((__int64)&v274, (__int64)&v260, 1);
  v17 = v188;
  if ( v188 >= 0 )
  {
    v187 = &v274;
    goto LABEL_310;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v189, 0LL, 0, v188, 0xA7Au);
LABEL_387:
  CRegionShape::~CRegionShape((CRegionShape *)&v274);
LABEL_113:
  v86 = v247;
LABEL_114:
  v87 = v246;
LABEL_115:
  v88 = v244;
  if ( v243[1] )
    goto LABEL_284;
LABEL_116:
  if ( v86 )
    (**v86)(v86, 1LL);
  if ( v87 )
    (**v87)(v87, 1LL);
  if ( v88 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v88)(v88, 1LL);
LABEL_122:
  if ( *(_QWORD *)&v256.left )
    (***(void (__fastcall ****)(_QWORD, __int64))&v256.left)(*(_QWORD *)&v256.left, 1LL);
  if ( *(_QWORD *)&v256.right )
    (***(void (__fastcall ****)(_QWORD, __int64))&v256.right)(*(_QWORD *)&v256.right, 1LL);
LABEL_126:
  if ( v255 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v255 + 16LL))(v255);
  return (unsigned int)v17;
}
