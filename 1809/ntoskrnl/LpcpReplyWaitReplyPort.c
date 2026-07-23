/*
 * XREFs of LpcpReplyWaitReplyPort @ 0x14084ACA0
 * Callers:
 *     LpcReplyWaitReplyPort @ 0x14084ABD0 (LpcReplyWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x14084AED0 (NtReplyWaitReplyPort.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1406A5810 (AlpcpProbeForWriteMessageHeader.c)
 */

__int64 __fastcall LpcpReplyWaitReplyPort(__int64 a1, __int128 *a2, unsigned __int8 a3, unsigned __int8 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 )
    AlpcpProbeForWriteMessageHeader((unsigned __int64)a2, 0);
  v9 = AlpcpProcessSynchronousRequest(a1, 0x20001u, a2, 0LL, (unsigned __int64)a2, 0LL, 0LL, 0LL, a3, a4);
  if ( v9 == -1073740029 )
    v9 = -1073741769;
  if ( v9 == -1073740031 )
    v9 = -1073741229;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v9;
}
