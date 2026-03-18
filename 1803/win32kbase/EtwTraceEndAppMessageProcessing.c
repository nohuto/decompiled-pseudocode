/*
 * XREFs of EtwTraceEndAppMessageProcessing @ 0x1C005EC10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cq @ 0x1C00AD5B4 (McTemplateK0cq.c)
 */

void __fastcall EtwTraceEndAppMessageProcessing(int a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1216);
    McTemplateK0cq(v3, "M", v4, v2, a1);
  }
}
