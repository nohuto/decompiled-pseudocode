/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608
 * Callers:
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 *     xxxGetSystemMenu @ 0x1C000C650 (xxxGetSystemMenu.c)
 *     _GetSubMenu @ 0x1C000C820 (_GetSubMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxLoadSysMenu @ 0x1C001B578 (xxxLoadSysMenu.c)
 *     xxxSetMenuItemInfo @ 0x1C001D574 (xxxSetMenuItemInfo.c)
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x1C001FF08 (xxxEnableMenuItem.c)
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     MNFreeItem @ 0x1C0022A10 (MNFreeItem.c)
 *     _SetMenuDefaultItem @ 0x1C008F994 (_SetMenuDefaultItem.c)
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     xxxPaintMenuBar @ 0x1C00F912C (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C010C914 (_ServerFixupMenuDC.c)
 *     xxxTranslateAccelerator @ 0x1C0110944 (xxxTranslateAccelerator.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01157EC (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     NtUserDestroyMenu @ 0x1C01252A0 (NtUserDestroyMenu.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0129020 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     NtUserRemoveMenu @ 0x1C012D3B0 (NtUserRemoveMenu.c)
 *     xxxCsDdeInitialize @ 0x1C0132700 (xxxCsDdeInitialize.c)
 *     xxxSetDialogSystemMenu @ 0x1C0132A20 (xxxSetDialogSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0132AC4 (xxxLoadSysDesktopMenu.c)
 *     LockDesktopMenu @ 0x1C0132B94 (LockDesktopMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x1C0132E50 (NtUserSetMenuDefaultItem.c)
 *     NtUserEnableMenuItem @ 0x1C01351D0 (NtUserEnableMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     NtUserSetSystemMenu @ 0x1C01547D0 (NtUserSetSystemMenu.c)
 *     NtUserSetMenu @ 0x1C0154DE0 (NtUserSetMenu.c)
 *     NtUserCheckMenuItem @ 0x1C0158A90 (NtUserCheckMenuItem.c)
 *     _CheckMenuItem @ 0x1C0158B84 (_CheckMenuItem.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C0159780 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0159810 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0164214 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C016460C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0222274 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     LockPopupMenu @ 0x1C0222BFC (LockPopupMenu.c)
 *     UnlockPopupMenu @ 0x1C0223038 (UnlockPopupMenu.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0224190 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMNSetTop @ 0x1C0226E04 (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     NtUserHiliteMenuItem @ 0x1C022FC80 (NtUserHiliteMenuItem.c)
 *     NtUserMenuItemFromPoint @ 0x1C02323C0 (NtUserMenuItemFromPoint.c)
 *     NtUserSetMenuContextHelpId @ 0x1C0234ED0 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C0234FB0 (NtUserSetMenuFlagRtoL.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023CB9C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F910 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     MenuRecalc @ 0x1C02402C0 (MenuRecalc.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02417CC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0242160 (xxxDoScrollMenu.c)
 *     xxxMNUpdateShownMenu @ 0x1C02473A0 (xxxMNUpdateShownMenu.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C024D7F4 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 *     _GetMenuDefaultItem @ 0x1C025A704 (_GetMenuDefaultItem.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::Init(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v7; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 152);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 152) + 8LL);
  }
  result = *(_QWORD *)(v5 + 1472);
  *v7 = result;
  *(_QWORD *)(v5 + 1472) = v7;
  return result;
}
