/*
 * XREFs of EtwTraceEndSendMessage @ 0x1C007CB80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cp @ 0x1C010F268 (McTemplateK0cp.c)
 */

void __fastcall EtwTraceEndSendMessage(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0cp(v3, &EndSendMessage, v4, v2, a1);
  }
}
