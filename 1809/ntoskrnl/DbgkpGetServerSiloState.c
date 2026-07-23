/*
 * XREFs of DbgkpGetServerSiloState @ 0x14072900C
 * Callers:
 *     DbgkpInitializePhase1 @ 0x1409AFA4C (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x1409AFA9C (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 960;
}
