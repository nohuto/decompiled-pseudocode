/*
 * XREFs of CheckGrantedAccess @ 0x1C005E558
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C005B7C4 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     NtUserGetDoubleClickTime @ 0x1C005E360 (NtUserGetDoubleClickTime.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C005E3D8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C005E4F0 (NtUserGetCaretBlinkTime.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C006DAE0 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     _SwapMouseButton @ 0x1C01980F0 (_SwapMouseButton.c)
 *     xxxInjectTouchInput @ 0x1C01A9474 (xxxInjectTouchInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  __int64 v2; // rdx

  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL, v2);
  return 0LL;
}
