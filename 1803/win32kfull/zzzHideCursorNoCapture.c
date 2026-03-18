/*
 * XREFs of zzzHideCursorNoCapture @ 0x1C0197810
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 */

__int64 __fastcall zzzHideCursorNoCapture(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 424) + 104LL)
    && (GetAppCompatFlags2(0x400u, v2) & 0x100) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
  {
    zzzSetCursor(0LL);
  }
  return 0LL;
}
