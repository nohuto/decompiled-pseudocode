/*
 * XREFs of DbgkpGetServerSiloState @ 0x140727D8C
 * Callers:
 *     DbgkpInitializePhase1 @ 0x1409AEA4C (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x1409AEA9C (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 960;
}
