/*
 * XREFs of UpdateCheckpoint @ 0x1C00B6E60
 * Callers:
 *     _GetWindowPlacement @ 0x1C00B6B80 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C00B87BC (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C0134260 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C01E2320 (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  GetRect(a1, (__int64)v3, 66);
  return CkptRestore(a1, v3);
}
