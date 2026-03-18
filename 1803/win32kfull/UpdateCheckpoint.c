/*
 * XREFs of UpdateCheckpoint @ 0x1C00669AC
 * Callers:
 *     WPUpdateCheckPointSettings @ 0x1C0065010 (WPUpdateCheckPointSettings.c)
 *     xxxSetWindowPlacement @ 0x1C0065970 (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C00666E0 (_GetWindowPlacement.c)
 *     xxxSetInternalWindowPos @ 0x1C01BF838 (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  int v3[4]; // [rsp+20h] [rbp-28h] BYREF

  GetRect(a1, v3, 66);
  return CkptRestore(a1, v3);
}
