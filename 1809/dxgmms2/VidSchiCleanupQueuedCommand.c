/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C003951C
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C00CB3F0 (VidSchiCleanupPacket_PriorityTable.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3)
{
  char v4; // al
  _BYTE v5[56]; // [rsp+20h] [rbp-38h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v5, (unsigned __int64 *)a1 + 206, a3, 0);
  *((_BYTE *)a1 + 2428) |= 1u;
  AcquireSpinLock::Release((AcquireSpinLock *)v5);
  VidSchiCleanupPacket_PriorityTable(a1);
  v4 = *((_BYTE *)a1 + 2428);
  if ( (v4 & 2) == 0 )
    *((_BYTE *)a1 + 2428) = v4 & 0xFE;
  AcquireSpinLock::Release((AcquireSpinLock *)v5);
}
