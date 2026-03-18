/*
 * XREFs of ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01CC2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023F14 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 */

unsigned __int64 __fastcall zzzHideCursorNoCapture(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx

  if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 424) + 112LL)
    && (GetAppCompatFlags2(1024LL, v3) & 0x100) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
  {
    zzzSetCursor(0LL);
  }
  return 0LL;
}
