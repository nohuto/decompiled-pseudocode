/*
 * XREFs of LpcpRequestWaitReplyPort @ 0x1406A44C8
 * Callers:
 *     LpcRequestWaitReplyPortEx @ 0x1406A43F0 (LpcRequestWaitReplyPortEx.c)
 *     NtRequestWaitReplyPort @ 0x1406A4430 (NtRequestWaitReplyPort.c)
 *     LpcRequestWaitReplyPort @ 0x1406DACD0 (LpcRequestWaitReplyPort.c)
 *     IopSendMessageToTrackService @ 0x14081A974 (IopSendMessageToTrackService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1406A4590 (AlpcpProbeForWriteMessageHeader.c)
 */

__int64 __fastcall LpcpRequestWaitReplyPort(
        __int64 a1,
        __int128 *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx

  if ( a4 )
    AlpcpProbeForWriteMessageHeader(a3, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = AlpcpProcessSynchronousRequest(a1, a6 | 0x20000u, a2, 0LL, a3, 0LL, 0LL, 0LL, a4, a5);
  KeLeaveCriticalRegion();
  if ( v11 == -1073740029 )
    v11 = -1073741769;
  if ( v11 == -1073740031 )
    return (unsigned int)-1073741229;
  return v11;
}
