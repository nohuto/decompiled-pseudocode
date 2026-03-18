/*
 * XREFs of EtwpGetCurrentSiloState @ 0x140312604
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406473F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwpGetCurrentSiloState()
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
}
