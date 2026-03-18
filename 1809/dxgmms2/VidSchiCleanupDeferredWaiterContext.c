/*
 * XREFs of VidSchiCleanupDeferredWaiterContext @ 0x1C001161C
 * Callers:
 *     VidSchFlushContext @ 0x1C007AEE0 (VidSchFlushContext.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0011F58 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C00307C0 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiCleanupDeferredWaiterContext(__int64 a1, __int64 a2, bool a3)
{
  _QWORD **v3; // rdi
  __int64 v4; // r8
  _QWORD *v5; // rbx
  _QWORD *v6; // rdx
  int v7; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+30h] [rbp-38h]
  _BYTE v10[48]; // [rsp+38h] [rbp-30h] BYREF

  v3 = (_QWORD **)(a1 + 688);
  AcquireSpinLock::AcquireSpinLock(
    (AcquireSpinLock *)v10,
    (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 1648LL),
    a3,
    0);
  v5 = *v3;
  v8[1] = v8;
  v8[0] = v8;
  v9 = 0;
  if ( v5 == v3 )
    goto LABEL_2;
  do
  {
    v6 = v5 - 4;
    LOBYTE(v4) = 1;
    v7 = *((_DWORD *)v5 + 60);
    v5 = (_QWORD *)*v5;
    if ( (v7 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v8, v6, v4);
    else
      VidSchiUnwaitWaitQueuePacket(v8, v6, v4);
  }
  while ( v5 != v3 );
  if ( !v9 )
LABEL_2:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v8);
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
}
