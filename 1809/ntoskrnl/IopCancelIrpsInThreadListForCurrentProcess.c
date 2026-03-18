/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x140676134
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x140284D10 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFileEx @ 0x1406A68D0 (NtCancelIoFileEx.c)
 * Callees:
 *     IopCancelApcRequired @ 0x14008DB60 (IopCancelApcRequired.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PsGetNextProcessThread @ 0x140675900 (PsGetNextProcessThread.c)
 *     IopCancelIrpsInThreadList @ 0x1406A6A28 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _KPROCESS *Process; // rsi
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  _QWORD *v8; // rbx
  _QWORD v10[18]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset(v10, 0, 0x88uLL);
  v10[11] = a1;
  v10[12] = a2;
  LOBYTE(v10[16]) = 0;
  KeInitializeEvent((PRKEVENT)&v10[13], NotificationEvent, 0);
  for ( i = 0LL; ; i = v8 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)Process, i);
    v8 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (unsigned int)IopCancelApcRequired((__int64)NextProcessThread, a1, a2) )
      v4 |= IopCancelIrpsInThreadList(v8, v10);
  }
  return v4;
}
