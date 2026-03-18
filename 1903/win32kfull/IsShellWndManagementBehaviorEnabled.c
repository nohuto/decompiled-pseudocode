/*
 * XREFs of IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C002DFBC (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C002E54C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C002E774 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     xxxDesktopRecalc @ 0x1C0115E7C (xxxDesktopRecalc.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C0140990 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FCA7C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEF4C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02122BC (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellWndManagementBehaviorEnabled(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *(_QWORD *)(a1 + 328) )
    return (a2 & *(_DWORD *)(a1 + 336)) != 0;
  return v2;
}
