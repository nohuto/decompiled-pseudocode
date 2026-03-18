/*
 * XREFs of xxxPlayEventSound @ 0x1C01037C0
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E31E0 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1)
{
  RPC_BINDING_HANDLE *v1; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 )
  {
    v1 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(a1);
    CUserPlaySound::PlaySync(v1);
    EnterCrit(0LL, 1LL);
  }
  return 1LL;
}
