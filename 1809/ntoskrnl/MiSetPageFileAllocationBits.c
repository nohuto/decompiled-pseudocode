/*
 * XREFs of MiSetPageFileAllocationBits @ 0x140150838
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14012413C (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14014EFE0 (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x140150C80 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x140076D80 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v4; // rdi

  v4 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v4;
}
