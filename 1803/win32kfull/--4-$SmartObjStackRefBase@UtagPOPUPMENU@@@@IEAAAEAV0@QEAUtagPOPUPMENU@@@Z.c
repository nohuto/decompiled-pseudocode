/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetMenuInfo @ 0x1C0013668 (xxxSetMenuInfo.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00217EC (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C002196C (MNGetPopupFromMenu.c)
 *     xxxInsertMenuItem @ 0x1C0023244 (xxxInsertMenuItem.c)
 *     xxxGetSystemMenu @ 0x1C00C2104 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00C2670 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C00C36A8 (xxxGetMenuBarInfo.c)
 *     MNFlushDestroyedPopups @ 0x1C01D50C0 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C01D52D0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01D5AC4 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C01E3E44 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C01E45B8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01E4EFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C01E54D4 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C01E6574 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0204D38 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNDragOver @ 0x1C0205428 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C02055B8 (xxxMNSetGapState.c)
 *     xxxEndMenu @ 0x1C0205D9C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
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
