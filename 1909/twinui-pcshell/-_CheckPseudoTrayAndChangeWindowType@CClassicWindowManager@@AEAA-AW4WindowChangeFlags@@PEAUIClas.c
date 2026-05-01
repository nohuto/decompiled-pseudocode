/*
 * XREFs of ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180149CD8
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180051700 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180051EE0 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x180147FF0 (CClassicWindowManager--ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___.c)
 *     ?RefreshCollection@CClassicWindowManager@@UEAAJXZ @ 0x1801495B0 (-RefreshCollection@CClassicWindowManager@@UEAAJXZ.c)
 * Callees:
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180085804 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 */

__int64 __fastcall CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        int a3)
{
  char v6; // al

  v6 = CClassicWindowManager::IsWindowPseudoTrayAfterChange((__int64)a1, (__int64)a2, a3);
  return CClassicWindowManager::_ChangeWindowType(a1, a2, a3 | (v6 != 0 ? 32 : 64));
}
