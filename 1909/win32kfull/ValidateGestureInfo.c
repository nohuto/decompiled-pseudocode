/*
 * XREFs of ValidateGestureInfo @ 0x1C0213EF8
 * Callers:
 *     SendGestureMessage @ 0x1C0213BEC (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x1C0230070 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87LL, a2, a3, a4);
  return 0LL;
}
