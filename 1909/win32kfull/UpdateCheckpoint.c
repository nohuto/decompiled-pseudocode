/*
 * XREFs of UpdateCheckpoint @ 0x1C00143E8
 * Callers:
 *     WPUpdateCheckPointSettings @ 0x1C0011190 (WPUpdateCheckPointSettings.c)
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C00140C0 (_GetWindowPlacement.c)
 *     xxxSetInternalWindowPos @ 0x1C01F83B4 (xxxSetInternalWindowPos.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC060 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C0014440 (CkptRestore.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall UpdateCheckpoint(__int64 a1)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = 0LL;
  v3[1] = 0LL;
  GetRect(a1, v3, 66LL);
  return CkptRestore(a1, v3);
}
