/*
 * XREFs of EtwTraceInputQueueUnLocked @ 0x1C0094760
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpq @ 0x1C00E9110 (McTemplateK0cpq.c)
 */

void __fastcall EtwTraceInputQueueUnLocked(__int64 a1)
{
  char v1; // di
  PETHREAD *v2; // rcx
  char ThreadId; // bl
  int v4; // r9d
  int v5; // ecx
  int v6; // r8d

  v1 = a1;
  v2 = *(PETHREAD **)(a1 + 64);
  if ( v2 )
    ThreadId = (unsigned __int8)PsGetThreadId(*v2);
  else
    ThreadId = 0;
  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1224);
    McTemplateK0cpq(v5, (unsigned int)&InputQueueUnLocked, v6, v4, v1, ThreadId);
  }
}
