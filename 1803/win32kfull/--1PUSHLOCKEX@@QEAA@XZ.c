/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0004AD8 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C0007C4C (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C007780C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0078820 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007DA90 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00BE1F0 (UmfdUnloadFontFileInternal.c)
 *     UmfdLoadFontFile @ 0x1C00BE2A0 (UmfdLoadFontFile.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00BED68 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00C4F48 (GreUpdateSpriteClipRgn.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00C51A8 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C00C5A48 (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00C5B50 (GreSfmCloseCompositorRef.c)
 *     GreNotifyDirtySprite @ 0x1C00E85BC (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00E86A8 (GreAdjustSpriteDirtyAccum.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00E8C1C (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00ED75C (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00EDA1C (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00EDB8C (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00EDD74 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4B38 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     FreeFileView @ 0x1C00FFF18 (FreeFileView.c)
 *     GreForceClipRgnChange @ 0x1C010781C (GreForceClipRgnChange.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0136AF0 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0136E58 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0137094 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C0138F58 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@XZ @ 0x1C019FB24 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@XZ.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A09AC (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C023C0C4 (GreAddBitmapD3DDirtyRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C023C974 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C023CA80 (GreHLsurfSetUpdateId.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0250EEC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0263FD0 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __fastcall PUSHLOCKEX::~PUSHLOCKEX(PUSHLOCKEX *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
