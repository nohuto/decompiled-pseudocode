/*
 * XREFs of VidSchiProcessGpuEngineTimeoutDpc @ 0x1C0037E50
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002D5AC (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchiProcessGpuEngineTimeoutDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx
  __int64 v2; // r8
  _BYTE v3[56]; // [rsp+20h] [rbp-38h] BYREF

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[380], ListEntry);
  AcquireSpinLock::AcquireSpinLock(
    (AcquireSpinLock *)v3,
    (unsigned __int64 *)(*((_QWORD *)&Next[1].Next + 1) + 1648LL),
    v2,
    1);
  *((_DWORD *)&Next[125].Next + 3) = 1;
  *((_BYTE *)&Next[125].Next + 10) = 1;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
