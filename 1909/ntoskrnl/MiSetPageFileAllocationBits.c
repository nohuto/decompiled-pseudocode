/*
 * XREFs of MiSetPageFileAllocationBits @ 0x14014DB20
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400DC1D4 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x14014DD60 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x1400076F0 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v3; // rdi

  v3 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v3;
}
