/*
 * XREFs of MiDecrementControlAreaCount @ 0x1400DFA24
 * Callers:
 *     MiDeleteControlArea @ 0x1400DF8FC (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x14010A5A8 (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA498 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

int __fastcall MiDecrementControlAreaCount(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v2; // rax

  _InterlockedDecrement64(a2);
  v2 = *(_QWORD *)(a1 + 1288);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 1296);
    if ( !v2 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 2064), 0, 0);
  }
  return v2;
}
