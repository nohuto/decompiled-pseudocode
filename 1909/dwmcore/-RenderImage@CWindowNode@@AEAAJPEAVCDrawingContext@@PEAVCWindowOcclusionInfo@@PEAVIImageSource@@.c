/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180068340 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18000711C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180012D38 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800151CC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800166EC (-CalculateSubtractionRectangles@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAIAEBV1@.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001D18C (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180028EDC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18003A6C8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800427AC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x180042858 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180048780 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800487D8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18004AF7C (--1CRegionShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E5C4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800681F0 (-ClipAgainstMargins@CWindowNode@@QEAAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEA_N3@Z @ 0x180069770 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMil.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800698D0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180069C68 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x18006A1DC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006A664 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x18007903C (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008E940 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AF1C0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800BDFC0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18016B09C (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 *     ?FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016DE28 (-FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18016E720 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18016E9E0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180170280 (-VisualWasRendered@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017F290 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x180180CA4 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019A584 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C0D58 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C183C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x1801C199C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1801EEBE0 (-Deflate@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x180249E90 (-ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z.c)
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
  char v75; // r10
  struct IImageSource *v76; // r14
  int v77; // r11d
  __int64 v78; // r8
  int v79; // eax
  int v80; // eax
  unsigned int v81; // ecx
  int v82; // eax
  unsigned int v83; // ecx
  LONG v84; // ecx
  LONG v85; // eax
  struct CShape **v86; // rbx
  int v87; // eax
  unsigned int v88; // ecx
  struct IImageSource *v89; // r15
  struct IImageSource *v90; // rax
  int v91; // eax
  unsigned int v92; // ecx
  struct IImageSource *v93; // rax
  CCompositionSurfaceBitmap *v94; // rcx
  struct IImageSource *v95; // rdx
  __int64 v96; // rax
  CCompositionSurfaceBitmap *v97; // rcx
  __int64 v98; // rax
  CCompositionSurfaceBitmap *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // r9
  int v102; // edx
  unsigned int v103; // r8d
  CMILMatrix *TopByReference; // rax
  __int64 i; // r12
  int v106; // eax
  unsigned int v107; // ecx
  int v108; // eax
  unsigned int v109; // ecx
  int v110; // eax
  unsigned int v111; // ecx
  __int64 v112; // rdx
  __int64 v113; // r9
  int v114; // edx
  unsigned int v115; // r8d
  CMILMatrix *v116; // rax
  float v117; // xmm1_4
  float v118; // xmm4_4
  float v119; // xmm3_4
  float v120; // xmm2_4
  unsigned int v121; // ecx
  unsigned int v122; // eax
  unsigned int v123; // edx
  int v124; // eax
  unsigned int v125; // ecx
  int v126; // eax
  unsigned int v127; // ecx
  float v128; // xmm15_4
  float v129; // xmm14_4
  unsigned int v130; // xmm0_4
  int v131; // eax
  unsigned int v132; // ecx
  int v133; // eax
  unsigned int v134; // ecx
  struct IImageSource *v135; // rsi
  int v136; // eax
  unsigned int v137; // ecx
  float v138; // xmm2_4
  float v139; // xmm11_4
  float v140; // xmm8_4
  int v141; // eax
  unsigned int v142; // ecx
  int v143; // eax
  unsigned int v144; // ecx
  int v145; // eax
  unsigned int v146; // ecx
  int v147; // eax
  __int64 v148; // rdx
  unsigned int v149; // ecx
  __int64 v150; // r8
  int v151; // eax
  unsigned int v152; // ecx
  void ***v153; // rax
  int v154; // eax
  unsigned int v155; // ecx
  int v156; // ecx
  char v157; // r15
  int v158; // eax
  LONG v159; // r8d
  LONG v160; // r9d
  LONG v161; // edx
  struct _D3DCOLORVALUE *v162; // rbx
  int v163; // eax
  unsigned int v164; // ecx
  const struct _D3DCOLORVALUE *v165; // r8
  int v166; // eax
  unsigned int v167; // ecx
  struct IImageSource *v168; // rcx
  int v169; // eax
  unsigned int v170; // ecx
  int v171; // eax
  unsigned int v172; // ecx
  int v173; // eax
  unsigned int v174; // ecx
  int v175; // eax
  unsigned int v176; // ecx
  char v177; // al
  int v178; // eax
  unsigned int v179; // ecx
  HWND v180; // r8
  int v181; // edx
  int v182; // ecx
  int v183; // eax
  float v184; // xmm0_4
  __m128i v185; // xmm3
  unsigned int v186; // eax
  float v187; // xmm3_4
  __m128i v188; // xmm2
  int v189; // eax
  float v190; // xmm2_4
  int v191; // r8d
  int v192; // eax
  unsigned int v193; // ecx
  struct tagRECT *MoveRects; // rax
  LONG *p_right; // rax
  __m128i v196; // xmm3
  __m128i v197; // xmm4
  __m128i v198; // xmm6
  __m128i v199; // xmm0
  float v200; // xmm5_4
  float v201; // xmm2_4
  float v202; // xmm3_4
  float v203; // xmm4_4
  float v204; // xmm6_4
  float v205; // xmm1_4
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  void *v207; // rcx
  int v208; // eax
  unsigned int v209; // ecx
  int v210; // [rsp+28h] [rbp-E0h]
  int v211; // [rsp+30h] [rbp-D8h]
  bool v212[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v213; // [rsp+50h] [rbp-B8h] BYREF
  struct CShape *v214; // [rsp+58h] [rbp-B0h] BYREF
  void ***v215; // [rsp+60h] [rbp-A8h] BYREF
  struct IImageSource *v216; // [rsp+68h] [rbp-A0h]
  bool v217[8]; // [rsp+70h] [rbp-98h] BYREF
  struct IImageSource *v218; // [rsp+78h] [rbp-90h] BYREF
  int v219; // [rsp+80h] [rbp-88h]
  int v220; // [rsp+84h] [rbp-84h] BYREF
  CVisual *v221; // [rsp+88h] [rbp-80h] BYREF
  struct ISwapChainContent *v222; // [rsp+90h] [rbp-78h] BYREF
  float v223; // [rsp+98h] [rbp-70h]
  unsigned __int32 v224; // [rsp+9Ch] [rbp-6Ch]
  struct _D3DCOLORVALUE *v225; // [rsp+A0h] [rbp-68h]
  _QWORD v226[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v227[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v228; // [rsp+F8h] [rbp-10h]
  __int128 v229; // [rsp+108h] [rbp+0h] BYREF
  tagRECT rcDst; // [rsp+118h] [rbp+10h] BYREF
  __int128 v231; // [rsp+128h] [rbp+20h] BYREF
  __int128 v232; // [rsp+138h] [rbp+30h] BYREF
  float v233; // [rsp+148h] [rbp+40h] BYREF
  float v234; // [rsp+14Ch] [rbp+44h]
  float v235; // [rsp+150h] [rbp+48h]
  float v236; // [rsp+154h] [rbp+4Ch]
  int v237[4]; // [rsp+158h] [rbp+50h] BYREF
  tagRECT v238; // [rsp+168h] [rbp+60h] BYREF
  __int128 v239; // [rsp+178h] [rbp+70h] BYREF
  __int128 v240; // [rsp+188h] [rbp+80h]
  __int128 v241; // [rsp+198h] [rbp+90h]
  __int128 v242; // [rsp+1A8h] [rbp+A0h]
  __int16 v243; // [rsp+1B8h] [rbp+B0h]
  struct tagRECT v244; // [rsp+1C8h] [rbp+C0h] BYREF
  float v245; // [rsp+1D8h] [rbp+D0h]
  float v246; // [rsp+1DCh] [rbp+D4h]
  float v247; // [rsp+1E0h] [rbp+D8h]
  float v248; // [rsp+1E4h] [rbp+DCh]
  void **v249; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v250; // [rsp+1F0h] [rbp+E8h]
  void *lpMem; // [rsp+1F8h] [rbp+F0h]
  _DWORD v252[16]; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v253; // [rsp+240h] [rbp+138h]
  struct tagRECT v254; // [rsp+248h] [rbp+140h] BYREF
  char v255[80]; // [rsp+258h] [rbp+150h] BYREF
  struct tagRECT v256; // [rsp+2A8h] [rbp+1A0h] BYREF
  char v257[16]; // [rsp+2B8h] [rbp+1B0h] BYREF

  v10 = *((_DWORD *)this + 215) & 0xFFFFFFFD;
  v225 = a10;
  v216 = a4;
  *(_QWORD *)&v231 = a3;
  *(_QWORD *)&rcDst.left = a5;
  v222 = 0LL;
  v215 = 0LL;
  v214 = 0LL;
  v213 = 0LL;
  v212[1] = 0;
  v228 = 0;
  v217[1] = 0;
  v14 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x94Fu, 0LL);
    goto LABEL_86;
  }
  RenderBounds = CWindowNode::GetRenderBounds(
                   (_DWORD)this,
                   (_DWORD)a4,
                   (_DWORD)a5,
                   (unsigned int)&v229,
                   (__int64)&v212[2],
                   (__int64)&v220);
  v16 = RenderBounds;
  if ( RenderBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, RenderBounds, 0x955u, 0LL);
    goto LABEL_86;
  }
  v19 = (float)(int)v229;
  v20 = (float)SDWORD1(v229);
  v21 = (float)SDWORD2(v229);
  v22 = (float)SHIDWORD(v229);
  if ( *((_BYTE *)a2 + 6348) )
  {
    if ( g_DisplayManager )
    {
      v100 = 0LL;
      if ( *((_DWORD *)g_DisplayManager + 18) )
      {
        v101 = *((_QWORD *)g_DisplayManager + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v101 + 8 * v100)) )
        {
          v100 = (unsigned int)(v102 + 1);
          if ( (unsigned int)v100 >= v103 )
            goto LABEL_4;
        }
        *(_QWORD *)&v232 = __PAIR64__(LODWORD(v20), LODWORD(v19));
        *((_QWORD *)&v232 + 1) = __PAIR64__(LODWORD(v22), LODWORD(v21));
        TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 480));
        CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 1556); i = (unsigned int)(i + 1) )
          CVisual::ExcludeFromVisibleRegion(*(_QWORD *)(*((_QWORD *)a2 + 775) + 8 * i), &v238, a2);
      }
    }
  }
LABEL_4:
  (*(void (__fastcall **)(struct IImageSource *, char *, float *))(*(_QWORD *)a4 + 64LL))(a4, v227, &v233);
  if ( (float)(v235 - v233) == 0.0 || (float)(v236 - v234) == 0.0 )
    goto LABEL_86;
  v23 = a9;
  if ( v212[2] && !a8 && !a9 )
  {
    v24 = *((_DWORD *)this + 216);
    v249 = &CRegionShape::`vftable';
    v250 = 0LL;
    v252[0] = 0;
    lpMem = v252;
    v253 = 0LL;
    v219 = v10 & 1;
    v232 = v229;
    v231 = v229;
    if ( v24 || *((_DWORD *)this + 218) || *((_DWORD *)this + 217) || *((_DWORD *)this + 219) )
    {
      v84 = *((_DWORD *)this + 166) + v24;
      rcDst.right = *((_DWORD *)this + 168) - *((_DWORD *)this + 217);
      rcDst.top = *((_DWORD *)this + 218) + *((_DWORD *)this + 167);
      v85 = *((_DWORD *)this + 169) - *((_DWORD *)this + 219);
      rcDst.left = v84;
      rcDst.bottom = v85;
      IntersectRect(&rcDst, &rcDst, (const RECT *)((char *)this + 712));
      if ( !EqualRect(&rcDst, (const RECT *)((char *)this + 712)) )
      {
        OffsetRect(&rcDst, -*((_DWORD *)this + 178), -*((_DWORD *)this + 179));
        if ( *((_BYTE *)this + 947) )
          OffsetRect(&rcDst, -*((_DWORD *)this + 237), -*((_DWORD *)this + 238));
        v238 = rcDst;
        TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v232, &v238);
      }
    }
    if ( a6 && (a6->cxLeftWidth || a6->cyTopHeight || a6->cxRightWidth || a6->cyBottomHeight) )
    {
      v23 = 1;
      v71 = a6->cxLeftWidth + v229;
      v72 = DWORD1(v231) + a6->cyTopHeight;
      v73 = HIDWORD(v231) - a6->cyBottomHeight;
      v74 = DWORD2(v231) - a6->cxRightWidth;
      *(_QWORD *)&v231 = __PAIR64__(v72, v71);
      if ( v74 <= v71 )
        DWORD2(v231) = v71;
      else
        DWORD2(v231) = v74;
      if ( v73 <= v72 )
        HIDWORD(v231) = v72;
      else
        HIDWORD(v231) = v73;
    }
    TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v231, &v232);
    if ( v23 && !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEquivalentTo(&v231, &v232) )
    {
      v76 = v216;
      if ( v75
        && (v216 == *((struct IImageSource **)this + 93) || *((_BYTE *)this + 947))
        && *((_QWORD *)a2 + 46)
        && *((_BYTE *)a2 + 6133) )
      {
        memset_0(&v255[4], 0, 0x24uLL);
        *(_QWORD *)v255 = 0xFF00000100000002uLL;
        v106 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v255, 1);
        v16 = v106;
        if ( v106 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v107, 0LL, 0, v106, 0xAFFu, 0LL);
          CRegionShape::~CRegionShape((CRegionShape *)&v249);
          goto LABEL_86;
        }
        v212[1] = 1;
      }
      if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v231) )
      {
        v108 = CRegionShape::BuildFromRects((__int64)&v249, (__int64)&v232, v77);
        v16 = v108;
        if ( v108 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, v108, 0xB20u, 0LL);
          goto LABEL_298;
        }
      }
      else
      {
        `vector constructor iterator'(
          v255,
          16LL,
          4LL,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
        v79 = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::CalculateSubtractionRectangles(&v232, &v231, v78, v255);
        v80 = CRegionShape::BuildFromRects((__int64)&v249, (__int64)v255, v79);
        v16 = v80;
        if ( v80 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v80, 0xB1Cu, 0LL);
          goto LABEL_298;
        }
      }
      v240 = _xmm;
      v241 = _xmm;
      v242 = _xmm;
      v239 = _xmm;
      v243 = 32085;
      CMILMatrix::SetTranslation(
        (CMILMatrix *)&v239,
        COERCE_FLOAT(LODWORD(v233) ^ _xmm),
        COERCE_FLOAT(LODWORD(v234) ^ _xmm),
        0.0);
      v82 = CDrawingContext::FillShapeWithBitmap(a2, v76, (struct CMILMatrix *)&v239, (struct CShape *)&v249, 0);
      v16 = v82;
      if ( v82 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0xB2Au, 0LL);
        goto LABEL_298;
      }
    }
    v26 = DWORD2(v231);
    if ( SDWORD2(v231) > (int)v231 )
    {
      v27 = HIDWORD(v231);
      if ( SHIDWORD(v231) > SDWORD1(v231) )
      {
        v28 = *((_BYTE *)a2 + 6347) == 0;
        v29 = (float)(int)v231;
        v30 = (float)SDWORD1(v231);
        v31 = (float)SDWORD2(v231);
        v32 = (float)SHIDWORD(v231);
        *(float *)v237 = (float)(int)v231;
        *(float *)&v237[1] = (float)SDWORD1(v231);
        *(float *)&v237[2] = (float)SDWORD2(v231);
        *(float *)&v237[3] = (float)SHIDWORD(v231);
        if ( v28 )
          goto LABEL_40;
        v33 = *((_DWORD *)a2 + 120);
        v238 = *(tagRECT *)v237;
        if ( v33 )
          v34 = (void *)(*((_QWORD *)a2 + 62) + 68LL * (unsigned int)(v33 - 1));
        else
          v34 = &CMILMatrix::Identity;
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v34, (float *)&v238.left, (float *)&rcDst.left);
        v35 = *(float *)&rcDst.right;
        v36 = *(float *)&rcDst.left;
        if ( *(float *)&rcDst.right > *(float *)&rcDst.left )
        {
          v37 = *(float *)&rcDst.bottom;
          v38 = *(float *)&rcDst.top;
          if ( *(float *)&rcDst.bottom > *(float *)&rcDst.top )
          {
            CScopedClipStack::GetClipBoundsWorld((__int64)a2 + 1008, (__int64)&v232);
            if ( *(float *)&v232 > v36 )
            {
              rcDst.left = v232;
              v36 = *(float *)&v232;
            }
            v39 = v38;
            if ( *((float *)&v232 + 1) > v38 )
            {
              rcDst.top = DWORD1(v232);
              v38 = *((float *)&v232 + 1);
              v39 = *((float *)&v232 + 1);
            }
            if ( v35 > *((float *)&v232 + 2) )
            {
              rcDst.right = DWORD2(v232);
              v35 = *((float *)&v232 + 2);
            }
            if ( v37 > *((float *)&v232 + 3) )
            {
              rcDst.bottom = HIDWORD(v232);
              v37 = *((float *)&v232 + 3);
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
              v238 = rcDst;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, tagRECT *, _QWORD))(*(_QWORD *)v40 + 56LL))(
                      v40,
                      &v238,
                      a7) )
              {
                v29 = *(float *)v237;
LABEL_40:
                v41 = v30;
                v42 = v31;
                v43 = v235 - v233;
                v44 = v29;
                *(float *)&rcDst.top = v30;
                v45 = v236 - v234;
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
                  v42 = v235 - v233;
                  v47 = v235 - v233;
                  *(float *)&rcDst.right = v235 - v233;
                }
                v48 = v32;
                if ( v32 > v45 )
                {
                  *(float *)&rcDst.bottom = v236 - v234;
                  v48 = v236 - v234;
                }
                if ( v47 <= v44 || v48 <= v46 )
                  goto LABEL_60;
                *((float *)&v232 + 1) = v41 + v234;
                *((float *)&v232 + 3) = v234 + v48;
                *(float *)&v232 = v44 + v233;
                *((float *)&v232 + 2) = v42 + v233;
                if ( v212[1] )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(&v232);
                if ( !*((_QWORD *)a2 + 45) && !*((_QWORD *)a2 + 787) )
                {
                  v49 = *((_DWORD *)a2 + 69);
                  v218 = 0LL;
                  v50 = CDrawingContext::ImageSourceToDrawListImageSource(a2, v216, 0LL, &v218);
                  v16 = v50;
                  if ( v50 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xB8Fu, 0LL);
                  }
                  else
                  {
                    LODWORD(v52) = (_DWORD)v218;
                    if ( !v218 )
                      goto LABEL_59;
                    v53 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
                            a2,
                            v218,
                            &v232,
                            &rcDst,
                            a7,
                            v49,
                            (_BYTE)v219);
                    v16 = v53;
                    if ( v53 >= 0 )
                    {
                      v52 = v218;
                      if ( v218 )
                      {
                        v218 = 0LL;
                        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v52 + 16LL))(v52);
                      }
                      goto LABEL_59;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0xB9Au, 0LL);
                  }
                  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v218);
                  goto LABEL_59;
                }
                CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v239, (const struct MilRectF *)&rcDst);
                v110 = CDrawingContext::FillShapeForBounds(a2, (const struct CShape *)&v239);
                v16 = v110;
                if ( v110 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v111, 0LL, 0, v110, 0xBA1u, 0LL);
                CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v239);
LABEL_59:
                if ( v16 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v52, 0LL, 0, v16, 0xB6Cu, 0LL);
                  goto LABEL_298;
                }
LABEL_60:
                if ( v212[1] )
                {
                  CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  v212[1] = 0;
                }
                if ( (v216 == *((struct IImageSource **)this + 93) || *((_BYTE *)this + 947)) && (_BYTE)v219 )
                {
                  CDrawingContext::RecordWindowMoveOptimization(a2, this, v25, 0LL);
                  *((_BYTE *)this + 945) = 0;
                  CWindowNode::ClipAgainstMargins((__int64)this);
                  v28 = *((_BYTE *)a2 + 6348) == 0;
                  v55 = (float)(int)v229;
                  v221 = this;
                  v56 = (float)SDWORD1(v229);
                  v57 = (float)SDWORD2(v229);
                  v58 = (float)SHIDWORD(v229);
                  if ( !v28 )
                  {
                    if ( g_DisplayManager )
                    {
                      v112 = 0LL;
                      if ( *((_DWORD *)g_DisplayManager + 18) )
                      {
                        v113 = *((_QWORD *)g_DisplayManager + 6);
                        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v113 + 8 * v112)) )
                        {
                          v112 = (unsigned int)(v114 + 1);
                          if ( (unsigned int)v112 >= v115 )
                            goto LABEL_65;
                        }
                        if ( (*(unsigned __int8 (__fastcall **)(CWindowNode *))(*(_QWORD *)this + 312LL))(this) )
                        {
                          *(_QWORD *)&v232 = __PAIR64__(LODWORD(v56), LODWORD(v55));
                          *((_QWORD *)&v232 + 1) = __PAIR64__(LODWORD(v58), LODWORD(v57));
                          v116 = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 480));
                          CMILMatrix::Transform2DBoundsHelper<0>(v116);
                          CScopedClipStack::GetClipBoundsWorld((__int64)a2 + 1008, (__int64)&v229);
                          v117 = *(float *)&v229;
                          if ( *(float *)&v244.left > *(float *)&v229 )
                          {
                            LODWORD(v229) = v244.left;
                            v117 = *(float *)&v244.left;
                          }
                          v118 = *((float *)&v229 + 1);
                          if ( *(float *)&v244.top > *((float *)&v229 + 1) )
                          {
                            DWORD1(v229) = v244.top;
                            v118 = *(float *)&v244.top;
                          }
                          v119 = *((float *)&v229 + 2);
                          if ( *((float *)&v229 + 2) > *(float *)&v244.right )
                          {
                            DWORD2(v229) = v244.right;
                            v119 = *(float *)&v244.right;
                          }
                          v120 = *((float *)&v229 + 3);
                          if ( *((float *)&v229 + 3) > *(float *)&v244.bottom )
                          {
                            HIDWORD(v229) = v244.bottom;
                            v120 = *(float *)&v244.bottom;
                          }
                          if ( v119 <= v117 || v120 <= v118 )
                            v229 = 0uLL;
                          CVisual::AddToVisibleRegion(v221);
                          v122 = *((_DWORD *)a2 + 1556);
                          v123 = v122 + 1;
                          if ( v122 + 1 < v122 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v121, 0LL, 0, -2147024362, 0xB8u, 0LL);
                          }
                          else if ( v123 > *((_DWORD *)a2 + 1555) )
                          {
                            v124 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 6200, 8LL, 1LL, &v221);
                            if ( v124 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(v125, 0LL, 0, v124, 0xC3u, 0LL);
                          }
                          else
                          {
                            *(_QWORD *)(*((_QWORD *)a2 + 775) + 8LL * v122) = v221;
                            *((_DWORD *)a2 + 1556) = v123;
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
                v62 = (float)(v26 - v231);
                if ( v62 > (float)(v43 - 0.0) )
                {
                  *(_QWORD *)&v229 = __PAIR64__(LODWORD(v30), LODWORD(v43));
                  *((_QWORD *)&v229 + 1) = __PAIR64__(LODWORD(v32), LODWORD(v31));
                  v60 = (unsigned __int8)CDrawingContext::IsOccluded(a2, &v229, a7) == 0;
                }
                v63 = *(float *)v237;
                v64 = v45 - 0.0;
                v65 = (float)(v27 - DWORD1(v231));
                if ( v65 > (float)(v45 - 0.0) )
                {
                  *(_QWORD *)&v231 = __PAIR64__(LODWORD(v45), v237[0]);
                  *((_QWORD *)&v231 + 1) = __PAIR64__(LODWORD(v32), LODWORD(v31));
                  v61 = (unsigned __int8)CDrawingContext::IsOccluded(a2, &v231, a7) == 0;
                }
                if ( !v60 && !v61 )
                  goto LABEL_72;
                memset_0(&v255[4], 0, 0x24uLL);
                *(_QWORD *)v255 = 2LL;
                v126 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v255, 1);
                v16 = v126;
                if ( v126 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v127, 0LL, 0, v126, 0xBD3u, 0LL);
                  goto LABEL_298;
                }
                if ( v60 )
                {
                  v128 = *(float *)&v229 + COERCE_FLOAT(v229 ^ _xmm);
                  v129 = *((float *)&v229 + 2) + COERCE_FLOAT(v229 ^ _xmm);
                  *(float *)&v130 = *((float *)&v229 + 3) + COERCE_FLOAT(DWORD1(v229) ^ _xmm);
                  v239 = _xmm;
                  *((float *)&v229 + 1) = *((float *)&v229 + 1) + COERCE_FLOAT(DWORD1(v229) ^ _xmm);
                  v240 = _xmm;
                  *(float *)&v229 = v128;
                  *((_QWORD *)&v229 + 1) = __PAIR64__(v130, LODWORD(v129));
                  v241 = _xmm;
                  v242 = _xmm;
                  v243 = 32085;
                  CMILMatrix::SetTranslation((CMILMatrix *)&v239, v43, *(float *)&v237[1], 0.0);
                  v131 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v239, 1, 1);
                  v16 = v131;
                  if ( v131 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, v131, 0xBE2u, 0LL);
                    goto LABEL_197;
                  }
                  v133 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
                  v16 = v133;
                  if ( v133 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, v133, 0xBE8u, 0LL);
                    goto LABEL_199;
                  }
                  v239 = _xmm;
                  v240 = _xmm;
                  v241 = _xmm;
                  v242 = _xmm;
                  v243 = 32085;
                  CMILMatrix::SetTranslation(
                    (CMILMatrix *)&v239,
                    1.0 - (float)(v59 + v233),
                    COERCE_FLOAT(LODWORD(v234) ^ _xmm),
                    0.0);
                  CMILMatrix::Scale((CMILMatrix *)&v239, v129 - v128, v65 / v64, 1.0);
                  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v255, (const struct MilRectF *)&v229);
                  v135 = v216;
                  v136 = CDrawingContext::FillShapeWithBitmap(
                           a2,
                           v216,
                           (struct CMILMatrix *)&v239,
                           (struct CShape *)v255,
                           v10);
                  v16 = v136;
                  if ( v136 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v137, 0LL, 0, v136, 0xBFCu, 0LL);
LABEL_193:
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v255);
LABEL_199:
                    CRegionShape::~CRegionShape((CRegionShape *)&v249);
                    CDrawingContext::PopTransformInternal(a2, 1);
                    goto LABEL_200;
                  }
                  CDrawingContext::PopTransformInternal(a2, 1);
                  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v255);
                  v63 = *(float *)v237;
                }
                else
                {
                  v135 = v216;
                }
                if ( !v61 )
                {
LABEL_208:
                  CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  v212[1] = 0;
                  goto LABEL_72;
                }
                LODWORD(v138) = v231 ^ _xmm;
                v139 = COERCE_FLOAT(DWORD1(v231) ^ _xmm) + *((float *)&v231 + 1);
                v140 = COERCE_FLOAT(DWORD1(v231) ^ _xmm) + *((float *)&v231 + 3);
                *(float *)&v231 = *(float *)&v231 + COERCE_FLOAT(v231 ^ _xmm);
                v240 = _xmm;
                *((float *)&v231 + 1) = v139;
                *((float *)&v231 + 3) = v140;
                v241 = _xmm;
                v242 = _xmm;
                *((float *)&v231 + 2) = *((float *)&v231 + 2) + v138;
                v239 = _xmm;
                v243 = 32085;
                CMILMatrix::SetTranslation((CMILMatrix *)&v239, v63, v45, 0.0);
                v141 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v239, 1, 1);
                v16 = v141;
                if ( v141 >= 0 )
                {
                  v143 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
                  v16 = v143;
                  if ( v143 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, v143, 0xC14u, 0LL);
                    goto LABEL_199;
                  }
                  v241 = _xmm;
                  v240 = _xmm;
                  v239 = _xmm;
                  v242 = _xmm;
                  v243 = 32085;
                  CMILMatrix::SetTranslation(
                    (CMILMatrix *)&v239,
                    COERCE_FLOAT(LODWORD(v233) ^ _xmm),
                    1.0 - (float)(v64 + v234),
                    0.0);
                  CMILMatrix::Scale((CMILMatrix *)&v239, v62 / v59, v140 - v139, 1.0);
                  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v255, (const struct MilRectF *)&v231);
                  v145 = CDrawingContext::FillShapeWithBitmap(
                           a2,
                           v135,
                           (struct CMILMatrix *)&v239,
                           (struct CShape *)v255,
                           v10);
                  v16 = v145;
                  if ( v145 >= 0 )
                  {
                    CDrawingContext::PopTransformInternal(a2, 1);
                    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v255);
                    goto LABEL_208;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v146, 0LL, 0, v145, 0xC28u, 0LL);
                  goto LABEL_193;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v142, 0LL, 0, v141, 0xC0Eu, 0LL);
LABEL_197:
                CRegionShape::~CRegionShape((CRegionShape *)&v249);
LABEL_200:
                v67 = v213;
                v69 = v214;
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
    if ( v253 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v253 + 16LL))(v253);
    if ( v252 != lpMem )
    {
      operator delete(lpMem);
      v252[0] = 0;
      lpMem = v252;
    }
    v66 = v250;
    if ( v250 )
    {
      v250 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    goto LABEL_78;
  }
  `vector constructor iterator'(
    (char *)v237,
    4LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  v237[0] = v10;
  v86 = (struct CShape **)v226;
  v226[0] = *(_QWORD *)&rcDst.left;
  v219 = 0;
  v221 = (CVisual *)v226;
  while ( 1 )
  {
    v28 = *v86 == 0LL;
    lpMem = v252;
    v250 = 0LL;
    v249 = &CRegionShape::`vftable';
    v252[0] = 0;
    v253 = 0LL;
    if ( v28 )
      break;
    if ( !(_BYTE)v220 )
      goto LABEL_112;
    v147 = CRegionShape::BuildFromRects((__int64)&v249, (__int64)&v229, 1);
    v16 = v147;
    if ( v147 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v149, 0LL, 0, v147, 0x998u, 0LL);
      goto LABEL_298;
    }
    if ( v215 )
      ((void (__fastcall *)(void ***, __int64))**v215)(v215, 1LL);
    v150 = (__int64)*v86;
    v215 = 0LL;
    v151 = CShape::Combine((__int64)&v249, v148, v150, 0LL, 1, &v215);
    v16 = v151;
    if ( v151 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v152, 0LL, 0, v151, 0x9A2u, 0LL);
      goto LABEL_298;
    }
    v153 = v215;
LABEL_217:
    *v86 = (struct CShape *)v153;
LABEL_112:
    v239 = _xmm;
    v240 = _xmm;
    v241 = _xmm;
    v242 = _xmm;
    v243 = 32085;
    v87 = CWindowNode::ApplyTextureToLocalTransform(this, v216, (struct CMILMatrix *)&v239);
    v16 = v87;
    if ( v87 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0, v87, 0x9B3u, 0LL);
      goto LABEL_298;
    }
    if ( a9 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v239);
      CMilRectLFromMilRectF(&v254, v257);
      v156 = *((_DWORD *)this + 178);
      v157 = 0;
      v158 = *((_DWORD *)this + 179);
      v159 = *((_DWORD *)this + 174) - v156;
      v160 = *((_DWORD *)this + 176) - v156;
      v161 = *((_DWORD *)this + 175) - v158;
      LODWORD(v218) = *((_DWORD *)this + 177) - v158;
      v217[0] = 0;
      v212[0] = 0;
      if ( v160 - v159 > v254.right - v254.left )
      {
        v217[0] = 1;
        if ( *((_BYTE *)this + 942) )
        {
          v244.left = v159;
          v244.right = v254.left + v160 - v254.right;
        }
        else
        {
          v244.right = v160;
          v244.left = v159 + v254.right - v254.left;
        }
        v244.top = v161;
        v244.bottom = v254.bottom + v161 - v254.top;
      }
      if ( (int)v218 - v161 > v254.bottom - v254.top )
      {
        v256.left = v159;
        v157 = 1;
        v256.top = v254.bottom + v161 - v254.top;
        v212[0] = 1;
        v256.right = v160;
        v256.bottom = (int)v218;
      }
      if ( v217[0] )
      {
        if ( v213 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v213)(v213, 1LL);
        v168 = *v86;
        v213 = 0LL;
        v218 = v168;
        v169 = CShape::ClipWithRect(v168, &v244, &v213);
        v16 = v169;
        if ( v169 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v170, 0LL, 0, v169, 0xA13u, 0LL);
          goto LABEL_298;
        }
        v162 = v225;
        v171 = CDrawingContext::FillRectangularShapeWithColor(a2, v213, v225);
        v16 = v171;
        if ( v171 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v172, 0LL, 0, v171, 0xA17u, 0LL);
          goto LABEL_298;
        }
        if ( v212[0] )
          goto LABEL_228;
        v67 = v213;
      }
      else
      {
        if ( !v157 )
          goto LABEL_114;
        v162 = v225;
LABEL_228:
        if ( v213 )
          (**(void (__fastcall ***)(struct CShape *, __int64))v213)(v213, 1LL);
        v213 = 0LL;
        v218 = *(struct IImageSource **)v221;
        v163 = CShape::ClipWithRect(v218, &v256, &v213);
        v16 = v163;
        if ( v163 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v164, 0LL, 0, v163, 0xA22u, 0LL);
          goto LABEL_298;
        }
        v165 = v162;
        v67 = v213;
        v166 = CDrawingContext::FillRectangularShapeWithColor(a2, v213, v165);
        v16 = v166;
        if ( v166 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v167, 0LL, 0, v166, 0xA26u, 0LL);
LABEL_288:
          CRegionShape::~CRegionShape((CRegionShape *)&v249);
          goto LABEL_79;
        }
      }
      if ( v214 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v214)(v214, 1LL);
      v214 = 0LL;
      v173 = CShape::ClipWithRect(v218, &v254, &v214);
      v16 = v173;
      if ( v173 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v174, 0LL, 0, v173, 0xA34u, 0LL);
        goto LABEL_288;
      }
      v86 = (struct CShape **)v221;
      *(_QWORD *)v221 = v214;
    }
LABEL_114:
    v89 = v216;
    v212[0] = 0;
    if ( (**(int (__fastcall ***)(struct IImageSource *, GUID *, struct ISwapChainContent **))v216)(
           v216,
           &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
           &v222) >= 0 )
    {
      v175 = CDrawingContext::DrawAsOverlay((COverlayContext **)a2, v222, v212);
      v16 = v175;
      if ( v175 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0, v175, 0xA41u, 0LL);
        goto LABEL_298;
      }
      v177 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v222 + 112LL))(v222);
      if ( v212[0] || v177 )
        goto LABEL_121;
      v89 = v216;
    }
    v90 = (struct IImageSource *)*((_QWORD *)this + 111);
    if ( v90 )
      v90 = (struct IImageSource *)((char *)v90 + 64);
    if ( v89 == v90
      && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v239 - 1.0)) & _xmm) >= 0.0000011920929
       || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v240 + 1) - 1.0)) & _xmm) >= 0.0000011920929) )
    {
      memset_0(&v255[4], 0, 0x24uLL);
      *(_QWORD *)v255 = 0x100000002LL;
      v178 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v255, 1);
      v16 = v178;
      if ( v178 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v179, 0LL, 0, v178, 0xA53u, 0LL);
        goto LABEL_298;
      }
      v89 = v216;
      v212[1] = 1;
    }
    v91 = CDrawingContext::FillShapeWithBitmap(a2, v89, (struct CMILMatrix *)&v239, *v86, v237[v219]);
    v16 = v91;
    if ( v91 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, v91, 0xA5Bu, 0LL);
      goto LABEL_298;
    }
    if ( v212[1] )
    {
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
      v212[1] = 0;
    }
LABEL_121:
    v93 = (struct IImageSource *)*((_QWORD *)this + 111);
    v94 = (struct IImageSource *)((char *)v93 + 64);
    if ( v93 )
      v93 = (struct IImageSource *)((char *)v93 + 64);
    v95 = v216;
    if ( v216 == v93 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque(v94) && v212[2] )
        CDrawingContext::RecordWindowMoveOptimization(a2, this, v180, &v217[1]);
      v95 = v216;
    }
    v96 = *((_QWORD *)this + 111);
    v97 = (CCompositionSurfaceBitmap *)(v96 + 64);
    if ( v96 )
      v96 += 64LL;
    if ( v95 == (struct IImageSource *)v96 )
    {
      if ( CCompositionSurfaceBitmap::IsOpaque(v97) && v212[2] )
      {
        if ( *((_BYTE *)this + 945) )
        {
          if ( *((_BYTE *)this + 1016) )
          {
            if ( !v217[1] )
            {
              v181 = *((_DWORD *)this + 178);
              v182 = *((_DWORD *)this + 179);
              v183 = *((_DWORD *)this + 174) - v181;
              v212[0] = 0;
              v184 = (float)v183;
              v185 = _mm_cvtsi32_si128(*((_DWORD *)this + 175) - v182);
              v186 = *((_DWORD *)this + 176) - v181;
              *(float *)&v232 = v184;
              LODWORD(v187) = _mm_cvtepi32_ps(v185).m128_u32[0];
              v188 = _mm_cvtsi32_si128(v186);
              v189 = *((_DWORD *)this + 177) - v182;
              *((float *)&v232 + 1) = v187;
              LODWORD(v190) = _mm_cvtepi32_ps(v188).m128_u32[0];
              *((float *)&v232 + 2) = v190;
              *((float *)&v232 + 3) = (float)v189;
              if ( a8
                || a9
                && (float)(v190 - v184) >= (float)(v235 - v233)
                && (float)((float)v189 - v187) >= (float)(v236 - v234) )
              {
                if ( (_QWORD)v231 )
                  v191 = *(_DWORD *)(v231 + 32);
                else
                  v191 = 0;
                v192 = CDrawingContext::CalcRectFullyVisible(a2, (const struct MilRectF *)&v232, v191, v212);
                v16 = v192;
                if ( v192 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v193, 0LL, 0, v192, 0xA8Bu, 0LL);
                  goto LABEL_298;
                }
                if ( v212[0] )
                {
                  v212[0] = 0;
                  LODWORD(v218) = 0;
                  MoveRects = CDwmMetaRegion::GetMoveRects((CWindowNode *)((char *)this + 976), (unsigned int *)&v218);
                  if ( MoveRects )
                  {
                    if ( (_DWORD)v218 )
                    {
                      p_right = &MoveRects->right;
                      *(_QWORD *)&rcDst.left = (unsigned int)v218;
                      v218 = (struct IImageSource *)p_right;
                      do
                      {
                        v196 = _mm_cvtsi32_si128(*p_right);
                        v197 = _mm_cvtsi32_si128(p_right[1]);
                        v198 = _mm_cvtsi32_si128(*((_DWORD *)this + 248));
                        v199 = _mm_cvtsi32_si128(*((_DWORD *)this + 249));
                        v200 = (float)*(p_right - 2);
                        v201 = (float)*(p_right - 1);
                        v245 = v200;
                        v246 = v201;
                        LODWORD(v202) = _mm_cvtepi32_ps(v196).m128_u32[0];
                        LODWORD(v203) = _mm_cvtepi32_ps(v197).m128_u32[0];
                        v247 = v202;
                        v248 = v203;
                        LODWORD(v204) = _mm_cvtepi32_ps(v198).m128_u32[0];
                        v223 = v204;
                        v224 = _mm_cvtepi32_ps(v199).m128_u32[0];
                        if ( a9 && *((_BYTE *)this + 942) )
                        {
                          v246 = v201 + 0.0;
                          v248 = v203 + 0.0;
                          v205 = (float)(*((float *)&v232 + 2) - *(float *)&v232) - (float)(v235 - v233);
                          v247 = v202 + v205;
                          v245 = v205 + v200;
                          v223 = v205 + v204;
                        }
                        CDrawingContext::RecordMoveOptimization(a2, this, v210, v211, (__int64)v212);
                        p_right = (LONG *)((char *)v218 + 16);
                        v28 = (*(_QWORD *)&rcDst.left)-- == 1LL;
                        v218 = (struct IImageSource *)((char *)v218 + 16);
                      }
                      while ( !v28 );
                      if ( v212[0] )
                      {
                        *((_BYTE *)this + 945) = 0;
                        MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a2);
                        CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
                        v207 = (void *)*((_QWORD *)MoveRenderPassInfoRef + 2);
                        *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
                        if ( v207 )
                          DeleteObject(v207);
                        v86 = (struct CShape **)v221;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v95 = v216;
    }
    v98 = *((_QWORD *)this + 111);
    v99 = (CCompositionSurfaceBitmap *)(v98 + 64);
    if ( v98 )
      v98 += 64LL;
    if ( v95 == (struct IImageSource *)v98 && CCompositionSurfaceBitmap::IsOpaque(v99) && v212[2] )
    {
      CWindowNode::ClipAgainstMargins((__int64)this);
      *(float *)&v238.left = (float)(int)v229;
      *(float *)&v238.top = (float)SDWORD1(v229);
      *(float *)&v238.right = (float)SDWORD2(v229);
      *(float *)&v238.bottom = (float)SHIDWORD(v229);
      v208 = CDrawingContext::VisualWasRendered(a2, &v238, this);
      v16 = v208;
      if ( v208 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v209, 0LL, 0, v208, 0xAD7u, 0LL);
        goto LABEL_298;
      }
    }
    CRegionShape::~CRegionShape((CRegionShape *)&v249);
    v221 = (CVisual *)++v86;
    if ( ++v219 )
      goto LABEL_78;
  }
  v154 = CRegionShape::BuildFromRects((__int64)&v249, (__int64)&v229, 1);
  v16 = v154;
  if ( v154 >= 0 )
  {
    v153 = &v249;
    goto LABEL_217;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v155, 0LL, 0, v154, 0x9A9u, 0LL);
LABEL_298:
  CRegionShape::~CRegionShape((CRegionShape *)&v249);
LABEL_78:
  v67 = v213;
LABEL_79:
  v68 = v215;
  v69 = v214;
  if ( v212[1] )
    goto LABEL_201;
LABEL_80:
  if ( v68 )
    ((void (__fastcall *)(void ***, __int64))**v68)(v68, 1LL);
  if ( v69 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v69)(v69, 1LL);
  if ( v67 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v67)(v67, 1LL);
LABEL_86:
  if ( v222 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v222 + 16LL))(v222);
  return (unsigned int)v16;
}
