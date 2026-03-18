/*
 * XREFs of _UnhookWinEvent @ 0x1C00D8B3C
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00D7580 (NtUserUnhookWinEvent.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     DestroyEventHook @ 0x1C00D8B90 (DestroyEventHook.c)
 */

__int64 __fastcall UnhookWinEvent(__int64 a1)
{
  __int64 v1; // rdx

  v1 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  if ( (*(_BYTE *)(v1 + gSharedInfo[1] + 25) & 1) != 0 || (v1 = gptiCurrent, *(_QWORD *)(a1 + 16) != gptiCurrent) )
  {
    UserSetLastError(6LL, v1);
    return 0LL;
  }
  else
  {
    DestroyEventHook();
    return 1LL;
  }
}
