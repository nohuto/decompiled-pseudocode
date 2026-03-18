/*
 * XREFs of DbgkpGetServerSiloState @ 0x14075D89C
 * Callers:
 *     DbgkpInitializePhase1 @ 0x140A026FC (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x140A0274C (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 960;
}
