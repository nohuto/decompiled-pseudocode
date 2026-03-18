/*
 * XREFs of _UnhookWinEvent @ 0x1C00B6A08
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00B6960 (NtUserUnhookWinEvent.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     DestroyEventHook @ 0x1C00B4380 (DestroyEventHook.c)
 */

__int64 __fastcall UnhookWinEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  v4 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  if ( (*(_BYTE *)(v4 + *((_QWORD *)&gSharedInfo + 1) + 25) & 1) != 0
    || (v4 = gptiCurrent, a3 = gptiCurrent, *(_QWORD *)(a1 + 16) != gptiCurrent) )
  {
    UserSetLastError(6LL, v4, a3, a4);
    return 0LL;
  }
  else
  {
    DestroyEventHook(a1);
    return 1LL;
  }
}
