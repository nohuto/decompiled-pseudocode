/*
 * XREFs of PspHardDereferenceSiloWorker @ 0x140306724
 * Callers:
 *     PsReleaseSiloHardReference @ 0x1403066B0 (PsReleaseSiloHardReference.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x14068736C (PspEvaluateAndNotifyEmptyJob.c)
 *     PspJobClose @ 0x1406E2430 (PspJobClose.c)
 *     PspBeginSiloTeardown @ 0x1408C48E8 (PspBeginSiloTeardown.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void __fastcall PspHardDereferenceSiloWorker(__int64 a1)
{
  signed __int64 v2; // rdi

  if ( !a1 )
    NT_ASSERT("!PsIsHostSilo(Silo)");
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    NT_ASSERT("PspJobIsSilo(Silo)");
  v2 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 1504));
  if ( !v2 )
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    *(_QWORD *)(a1 + 1512) = 0LL;
    *(_QWORD *)(a1 + 1528) = PspCompleteHardDereferenceSiloDeferred;
    *(_QWORD *)(a1 + 1536) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 1512), DelayedWorkQueue);
  }
  if ( v2 == -1 )
    NT_ASSERT("Count != -1");
}
