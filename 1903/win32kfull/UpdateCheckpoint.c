/*
 * XREFs of UpdateCheckpoint @ 0x1C0090C28
 * Callers:
 *     _GetWindowPlacement @ 0x1C0090900 (_GetWindowPlacement.c)
 *     xxxSetWindowPlacement @ 0x1C0122AB8 (xxxSetWindowPlacement.c)
 *     WPUpdateCheckPointSettings @ 0x1C0123000 (WPUpdateCheckPointSettings.c)
 *     xxxSetInternalWindowPos @ 0x1C01F8664 (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = 0LL;
  v3[1] = 0LL;
  GetRect(a1, v3, 66LL);
  return CkptRestore(a1, v3);
}
