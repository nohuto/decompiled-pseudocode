/*
 * XREFs of EtwTraceEndAppMessageProcessing @ 0x1C0069070
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cq @ 0x1C00E8A28 (McTemplateK0cq.c)
 */

void __fastcall EtwTraceEndAppMessageProcessing(int a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1224);
    McTemplateK0cq(v3, &EndAppMessageProcessing, v4, v2, a1);
  }
}
