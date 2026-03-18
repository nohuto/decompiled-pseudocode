/*
 * XREFs of CheckGrantedAccess @ 0x1C005FC14
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C005BC60 (NtUserGetCaretBlinkTime.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00F56E8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetDoubleClickTime @ 0x1C0102570 (NtUserGetDoubleClickTime.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0135350 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01CC870 (-_SwapMouseButton@@YAHH@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
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
