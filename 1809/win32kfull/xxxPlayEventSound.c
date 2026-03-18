/*
 * XREFs of xxxPlayEventSound @ 0x1C011E550
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FF074 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  RPC_BINDING_HANDLE *v4; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
  {
    v4 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(a1, gptiCurrent, a3, a4);
    CUserPlaySound::PlaySync(v4);
    EnterCrit(0LL, 1LL);
  }
  return 1LL;
}
