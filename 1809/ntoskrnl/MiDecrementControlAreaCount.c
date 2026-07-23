/*
 * XREFs of MiDecrementControlAreaCount @ 0x140094D54
 * Callers:
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140119FAC (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
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
