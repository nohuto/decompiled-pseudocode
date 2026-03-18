/*
 * XREFs of ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0030F0C
 * Callers:
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C000AB24 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     GreUpdateSpriteClipRgn @ 0x1C002F814 (GreUpdateSpriteClipRgn.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0030DA4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C008282C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     GreForceClipRgnChange @ 0x1C0089134 (GreForceClipRgnChange.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0089214 (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C008A5DC (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C008A780 (GreSfmCloseCompositorRef.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C008B938 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0092F60 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     GreNotifyDirtySprite @ 0x1C00CC698 (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00CD2FC (GreAdjustSpriteDirtyAccum.c)
 *     UmfdLoadFontFile @ 0x1C00F9F20 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00FD088 (UmfdUnloadFontFileInternal.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C010658C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0106924 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0106B94 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     FreeFileView @ 0x1C01200F4 (FreeFileView.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0121510 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C01219EC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0141D14 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C0141F30 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0142114 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C0161BBC (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0162410 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0162CB8 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C0166A88 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D4924 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D5A74 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026C22C (GreAddBitmapD3DDirtyRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026CC00 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026CD48 (GreHLsurfSetUpdateId.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02806F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0280A10 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C028D590 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     GreMakeFontDir @ 0x1C02B3244 (GreMakeFontDir.c)
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
