/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C002196C (MNGetPopupFromMenu.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxGetMenuBarInfo @ 0x1C00C36A8 (xxxGetMenuBarInfo.c)
 *     MNFreePopup @ 0x1C01D51B4 (MNFreePopup.c)
 *     xxxMNStartMenuState @ 0x1C01D5AC4 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C01E3E44 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C01E45B8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C01E54D4 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNFindWindowFromPoint @ 0x1C01E6A2C (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0205428 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C02055B8 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02057B0 (xxxMNUpdateDraggingInfo.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PMENUWND(__int64 a1)
{
  __int64 v1; // rdx

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_WORD *)(v1 + 42) & 0x3FFF) != 0x29C )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return *(_QWORD *)(a1 + 272);
  return *(_QWORD *)(v1 + 296);
}
