/*
 * XREFs of LpcpReplyWaitReplyPort @ 0x140884F20
 * Callers:
 *     LpcReplyWaitReplyPort @ 0x140884E50 (LpcReplyWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x140885150 (NtReplyWaitReplyPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0800 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1406CAD00 (AlpcpProbeForWriteMessageHeader.c)
 */

__int64 __fastcall LpcpReplyWaitReplyPort(void ***a1, unsigned __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
    AlpcpProbeForWriteMessageHeader(a2, 0);
  v9 = AlpcpProcessSynchronousRequest(a1, 0x20001u, a2, 0LL, a2, 0LL, 0LL, 0LL, a3, a4);
  if ( v9 == -1073740029 )
    v9 = -1073741769;
  if ( v9 == -1073740031 )
    v9 = -1073741229;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
