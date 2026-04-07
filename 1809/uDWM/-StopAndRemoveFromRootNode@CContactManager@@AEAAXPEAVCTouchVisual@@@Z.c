/*
 * XREFs of ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18000B3C8
 * Callers:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18000B324 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180091910 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x180091978 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x180091C24 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x180092720 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009281C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180093628 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18009382C (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180093BB8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180094210 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800943F0 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180095408 (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CContactManager::StopAndRemoveFromRootNode(CContactManager *this, struct CTouchVisual *a2)
{
  CContactManager *v3; // rcx

  if ( a2 )
  {
    (*(void (__fastcall **)(struct CTouchVisual *))(*(_QWORD *)a2 + 200LL))(a2);
    CContactManager::RemoveFromTouchNode(v3, *((_QWORD *)a2 + 36), a2);
  }
}
