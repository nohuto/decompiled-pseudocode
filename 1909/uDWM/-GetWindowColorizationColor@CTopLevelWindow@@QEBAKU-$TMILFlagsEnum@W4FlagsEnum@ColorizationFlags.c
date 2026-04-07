/*
 * XREFs of ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020C74
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180014FA8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017770 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180020BCC (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180036E4C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetWindowColorizationColor(__int64 a1, char a2)
{
  CDesktopManager *v3; // rsi
  struct CTopLevelWindow::WindowFrame *v5; // rax
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *(_DWORD *)(a1 + 584),
         1,
         (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 607LL) & 0x10) != 0);
  if ( (a2 & 1) == 0 && (a2 & 2) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 584) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 607LL) & 0x10) != 0 )
      a2 |= 1u;
    else
      a2 |= 2u;
  }
  CDesktopManager::GetEffectiveWindowColorizationColor((__int64)v3, *((float *)v5 + 470), a2, &v7);
  return v7;
}
