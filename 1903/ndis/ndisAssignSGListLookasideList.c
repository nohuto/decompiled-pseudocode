/*
 * XREFs of ndisAssignSGListLookasideList @ 0x1C0035C78
 * Callers:
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C0035504 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAssignSGListLookasideList(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 96LL));
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 520LL) = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(v5 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 96LL), v4);
}
