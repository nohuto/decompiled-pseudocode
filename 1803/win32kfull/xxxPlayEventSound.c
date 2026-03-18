/*
 * XREFs of xxxPlayEventSound @ 0x1C00FF4F0
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00E4AF4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  RPC_BINDING_HANDLE *v4; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 )
  {
    v4 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(gptiCurrent, a2, a3, a4);
    CUserPlaySound::PlaySync(v4);
    EnterCrit(0LL, 1LL);
  }
  return 1LL;
}
