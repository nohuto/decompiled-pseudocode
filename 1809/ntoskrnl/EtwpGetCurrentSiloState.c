/*
 * XREFs of EtwpGetCurrentSiloState @ 0x140312704
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1406473D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwpGetCurrentSiloState()
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
}
