/*
 * XREFs of _UnhookWinEvent @ 0x1C00B61F0
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00B6240 (NtUserUnhookWinEvent.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     DestroyEventHook @ 0x1C00B5660 (DestroyEventHook.c)
 */

__int64 __fastcall UnhookWinEvent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0
    || (v2 = gptiCurrent, v3 = gptiCurrent, *(_QWORD *)(a1 + 16) != gptiCurrent) )
  {
    UserSetLastError(6LL, v2, v3, v4);
    return 0LL;
  }
  else
  {
    DestroyEventHook(a1);
    return 1LL;
  }
}
