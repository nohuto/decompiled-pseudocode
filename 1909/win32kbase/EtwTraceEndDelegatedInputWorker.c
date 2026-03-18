/*
 * XREFs of EtwTraceEndDelegatedInputWorker @ 0x1C010B1B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpttttttpppqqq @ 0x1C010D004 (McTemplateK0cpttttttpppqqq.c)
 */

void __fastcall EtwTraceEndDelegatedInputWorker(char a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    else
      LOBYTE(v4) = -1;
    McTemplateK0cpttttttpppqqq(v2, (unsigned int)&EndDelegatedInputWorker, v3, v4, a1);
  }
}
