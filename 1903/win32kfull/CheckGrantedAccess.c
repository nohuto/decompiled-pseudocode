/*
 * XREFs of CheckGrantedAccess @ 0x1C00BE534
 * Callers:
 *     NtUserGetCaretBlinkTime @ 0x1C00BA580 (NtUserGetCaretBlinkTime.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C011B6F8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C011C2DC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     NtUserGetDoubleClickTime @ 0x1C0126E40 (NtUserGetDoubleClickTime.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0127140 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01CCA00 (-_SwapMouseButton@@YAHH@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
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
