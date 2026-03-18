/*
 * XREFs of MiSetPageFileAllocationBits @ 0x14014D480
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400F0E24 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     MiFindPageFileWriteCluster @ 0x14014D6C0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 */

void __fastcall MiSetPageFileAllocationBits(__int64 a1, ULONG a2, ULONG a3)
{
  __int64 v3; // rdi

  v3 = a3;
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 8LL), a2, a3);
  *(_QWORD *)(a1 + 24) -= v3;
}
