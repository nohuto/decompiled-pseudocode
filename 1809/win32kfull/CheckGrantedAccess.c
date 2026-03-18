/*
 * XREFs of CheckGrantedAccess @ 0x1C00AA204
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserGetDoubleClickTime @ 0x1C00A84D0 (NtUserGetDoubleClickTime.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00A8568 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C00A8690 (NtUserGetCaretBlinkTime.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00ACE38 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00D8060 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     _SwapMouseButton @ 0x1C01B90F0 (_SwapMouseButton.c)
 *     xxxInjectTouchInput @ 0x1C01CBA28 (xxxInjectTouchInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL, v2, v3, v4);
  return 0LL;
}
