/*
 * XREFs of EtwTracePostInjectedGestureMessage @ 0x1C00E7DD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpp @ 0x1C00E8C50 (McTemplateK0cpp.c)
 */

void __fastcall EtwTracePostInjectedGestureMessage(_QWORD *a1, char a2)
{
  int v4; // r9d
  int v5; // edx
  int v6; // r8d

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1224);
    McTemplateK0cpp(*a1, v5, v6, v4, *a1, a2);
  }
}
