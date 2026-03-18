/*
 * XREFs of EtwTraceBeginDelegatedInputWorker @ 0x1C010D400
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpttttttpppqqq @ 0x1C010F974 (McTemplateK0cpttttttpppqqq.c)
 */

void __fastcall EtwTraceBeginDelegatedInputWorker(__int64 a1)
{
  int v2; // r9d

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    else
      LOBYTE(v2) = -1;
    McTemplateK0cpttttttpppqqq(
      -__CFSHR__(*(_DWORD *)(a1 + 100), 7),
      (unsigned int)&BeginDelegatedInputWorker,
      -__CFSHR__(*(_DWORD *)(a1 + 100), 8),
      v2,
      a1);
  }
}
