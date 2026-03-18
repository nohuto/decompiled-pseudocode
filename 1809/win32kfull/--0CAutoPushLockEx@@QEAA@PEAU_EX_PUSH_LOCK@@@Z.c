/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002358 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C00085A4 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A25C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000A6F4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C000ACC8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreNotifyDirtySprite @ 0x1C0010ABC (GreNotifyDirtySprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00746A8 (GreUpdateSpriteClipRgn.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0074C48 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C0075ADC (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C007EB54 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008FE00 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0091440 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0096B08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     GreSfmCloseCompositorRef @ 0x1C00A209C (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C00A2514 (GreSfmOpenCompositorRef.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00A2AA8 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00A2D9C (GreSetRedirectionSurfaceSignaling.c)
 *     GreForceClipRgnChange @ 0x1C00A2FFC (GreForceClipRgnChange.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00C83F0 (GreTransferSpriteStateToDwmState.c)
 *     FreeFileView @ 0x1C00CBF00 (FreeFileView.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00D64E4 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00E86D4 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00E8960 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00E8AF4 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00E8CD4 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     UmfdLoadFontFile @ 0x1C0100E70 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C011A088 (UmfdUnloadFontFileInternal.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C01225E0 (GreAdjustSpriteDirtyAccum.c)
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C0161610 (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01C0D58 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1C84 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0253244 (GreAddBitmapD3DDirtyRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0253CBC (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0253E1C (GreHLsurfSetUpdateId.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0267C50 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0267F5C (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0277BB0 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     GreMakeFontDir @ 0x1C029CE1C (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

CAutoPushLockEx *__fastcall CAutoPushLockEx::CAutoPushLockEx(CAutoPushLockEx *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
