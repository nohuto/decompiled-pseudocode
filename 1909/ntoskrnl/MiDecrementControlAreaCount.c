/*
 * XREFs of MiDecrementControlAreaCount @ 0x1400BF8A4
 * Callers:
 *     MiDeleteControlArea @ 0x1400BF77C (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x14010A178 (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x1402EA1F8 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
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
