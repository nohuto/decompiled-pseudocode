/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24
 * Callers:
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 *     xxxGetSystemMenu @ 0x1C000C650 (xxxGetSystemMenu.c)
 *     _GetSubMenu @ 0x1C000C820 (_GetSubMenu.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C001B7C0 (NtUserThunkedMenuItemInfo.c)
 *     xxxSetMenuItemInfo @ 0x1C001D574 (xxxSetMenuItemInfo.c)
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     xxxEnableMenuItem @ 0x1C001FF08 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C002104C (xxxGetMenuBarInfo.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     _SetMenuDefaultItem @ 0x1C008F994 (_SetMenuDefaultItem.c)
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 *     NtUserCreateWindowEx @ 0x1C0094570 (NtUserCreateWindowEx.c)
 *     xxxMNCanClose @ 0x1C00A93A0 (xxxMNCanClose.c)
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     xxxPaintMenuBar @ 0x1C00F912C (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C00FC000 (xxxCalcMenuBar.c)
 *     _ServerFixupMenuDC @ 0x1C010C914 (_ServerFixupMenuDC.c)
 *     NtUserDeleteMenu @ 0x1C0110010 (NtUserDeleteMenu.c)
 *     NtUserDestroyMenu @ 0x1C01252A0 (NtUserDestroyMenu.c)
 *     NtUserThunkedMenuInfo @ 0x1C01293D0 (NtUserThunkedMenuInfo.c)
 *     NtUserRemoveMenu @ 0x1C012D3B0 (NtUserRemoveMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C0132A20 (xxxSetDialogSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0132AC4 (xxxLoadSysDesktopMenu.c)
 *     LockDesktopMenu @ 0x1C0132B94 (LockDesktopMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x1C0132E50 (NtUserSetMenuDefaultItem.c)
 *     NtUserEnableMenuItem @ 0x1C01351D0 (NtUserEnableMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     NtUserSetSystemMenu @ 0x1C01547D0 (NtUserSetSystemMenu.c)
 *     NtUserSetMenu @ 0x1C0154DE0 (NtUserSetMenu.c)
 *     NtUserCheckMenuItem @ 0x1C0158A90 (NtUserCheckMenuItem.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C0159780 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0159810 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C01D71B8 (--4-$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1C0224190 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMNSetTop @ 0x1C0226E04 (xxxMNSetTop.c)
 *     NtUserGetMenuItemRect @ 0x1C022D7D0 (NtUserGetMenuItemRect.c)
 *     NtUserHiliteMenuItem @ 0x1C022FC80 (NtUserHiliteMenuItem.c)
 *     NtUserMenuItemFromPoint @ 0x1C02323C0 (NtUserMenuItemFromPoint.c)
 *     NtUserSetMenuContextHelpId @ 0x1C0234ED0 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C0234FB0 (NtUserSetMenuFlagRtoL.c)
 *     NtUserTrackPopupMenuEx @ 0x1C0236880 (NtUserTrackPopupMenuEx.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023CB9C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MenuRecalc @ 0x1C02402C0 (MenuRecalc.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02417CC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0242160 (xxxDoScrollMenu.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C025A704 (_GetMenuDefaultItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRefBase<tagMENU>::operator=(_QWORD *a1, __int64 a2)
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
      *a1 = *(_QWORD *)(a2 + 152);
      ++*(_DWORD *)(*a1 + 8LL);
    }
    else
    {
      *a1 = gSmartObjNullRef;
    }
  }
  return a1;
}
