/*
 * XREFs of EtwpCancelStackWalkApc @ 0x14030F3A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x14030F3BC (EtwpFinalizePendingApc.c)
 */

__int64 __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  return EtwpFinalizePendingApc(*(_QWORD *)(a1 + 56), a1);
}
