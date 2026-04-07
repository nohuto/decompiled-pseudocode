/*
 * XREFs of IsOpenThemeDataPresent @ 0x18004E738
 * Callers:
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180010C04 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017770 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800183E8 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001CA20 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D8D0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001EBB0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180035750 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180036E4C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180039540 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18003DC18 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003F790 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180045EE8 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18004B818 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18004F580 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenThemeDataPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800DBCF8 == 1 )
    return 1;
  if ( dword_1800DBCF8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800DBCF8 = 2 - (v1 != 0);
  return result;
}
