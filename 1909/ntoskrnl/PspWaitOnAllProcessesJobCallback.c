/*
 * XREFs of PspWaitOnAllProcessesJobCallback @ 0x1408C8260
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x14068A0A0 (PspGetNextJobProcess.c)
 *     PspWaitForUsermodeExit @ 0x1408C9638 (PspWaitForUsermodeExit.c)
 */

__int64 __fastcall PspWaitOnAllProcessesJobCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _KPROCESS *v4; // r9
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *NextJobProcess; // rax
  _KPROCESS *v7; // rbx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v9, 0, 24);
  v3 = a1;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    NextJobProcess = (_KPROCESS *)PspGetNextJobProcess(a1, (__int64)CurrentThread, v9, v4);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (NextJobProcess[2].ActiveProcessors.Bitmap[4] & 0x4000000000LL) == 0
      && NextJobProcess != KeGetCurrentThread()->ApcState.Process )
    {
      *(_BYTE *)(a2 + 4) |= 2u;
      PspWaitForUsermodeExit(NextJobProcess);
    }
    v4 = v7;
    a1 = v3;
  }
  return 0LL;
}
