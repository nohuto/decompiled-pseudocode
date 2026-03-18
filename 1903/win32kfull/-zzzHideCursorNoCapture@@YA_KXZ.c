/*
 * XREFs of ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01CC430
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 */

unsigned __int64 __fastcall zzzHideCursorNoCapture(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 424) + 112LL)
    && (GetAppCompatFlags2(1024LL, v4, v5, v6) & 0x100) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
  {
    zzzSetCursor(0LL, v7, v8, v9);
  }
  return 0LL;
}
