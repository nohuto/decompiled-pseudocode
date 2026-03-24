/*
 * XREFs of EtwpCancelStackWalkApc @ 0x14030F1B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x14030F1CC (EtwpFinalizePendingApc.c)
 */

__int64 __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  return EtwpFinalizePendingApc(*(_QWORD *)(a1 + 56), a1);
}
