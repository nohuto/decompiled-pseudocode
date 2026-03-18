/*
 * XREFs of MiDecrementControlAreaCount @ 0x140094E14
 * Callers:
 *     MiDeleteControlArea @ 0x140094D1C (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140119F1C (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1624 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
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
