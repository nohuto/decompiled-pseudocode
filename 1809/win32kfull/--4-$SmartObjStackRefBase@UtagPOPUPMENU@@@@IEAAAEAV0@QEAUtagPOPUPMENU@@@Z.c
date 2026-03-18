/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006A6D4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C006A864 (MNGetPopupFromMenu.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C006C328 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxGetSystemMenu @ 0x1C00A625C (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00A6654 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C00AAED0 (xxxSetMenuInfo.c)
 *     xxxGetMenuBarInfo @ 0x1C00ABF90 (xxxGetMenuBarInfo.c)
 *     MNFlushDestroyedPopups @ 0x1C01F9C90 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01F9EC0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C01F9F80 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01FA6E4 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0209D14 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C020A4AC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C020ADFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C020B400 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C020C4CC (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C022DE28 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNDragOver @ 0x1C022E524 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C022E6BC (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1C022EED4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRefBase<tagPOPUPMENU>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a2 != *(_QWORD *)*a1 )
  {
    if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
    {
      if ( *(_BYTE *)(*a1 + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
    if ( a2 )
    {
      *a1 = *(_QWORD *)(a2 + 88);
      ++*(_DWORD *)(*a1 + 8LL);
    }
    else
    {
      *a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
