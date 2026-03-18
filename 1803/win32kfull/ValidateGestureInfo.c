/*
 * XREFs of ValidateGestureInfo @ 0x1C01D80F4
 * Callers:
 *     SendGestureMessage @ 0x1C01D7DEC (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x1C01F1540 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1, __int64 a2)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87LL, a2);
  return 0LL;
}
