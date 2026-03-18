/*
 * XREFs of safe_cast_fnid_to_PMENUWND @ 0x1C003795C
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     MNGetPopupFromMenu @ 0x1C012D050 (MNGetPopupFromMenu.c)
 *     xxxGetMenuBarInfo @ 0x1C012D47C (xxxGetMenuBarInfo.c)
 *     MNFreePopup @ 0x1C02104E4 (MNFreePopup.c)
 *     xxxMNStartMenuState @ 0x1C0210DE4 (xxxMNStartMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0221274 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221A34 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02229F0 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C02465DC (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0246784 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02469B4 (xxxMNUpdateDraggingInfo.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
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
    return *(_QWORD *)(a1 + 280);
  return *(_QWORD *)(v1 + 296);
}
