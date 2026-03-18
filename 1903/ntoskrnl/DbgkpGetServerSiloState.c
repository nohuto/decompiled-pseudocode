/*
 * XREFs of DbgkpGetServerSiloState @ 0x14075900C
 * Callers:
 *     DbgkpInitializePhase1 @ 0x140A021E0 (DbgkpInitializePhase1.c)
 *     DbgkpInitializePhase0 @ 0x140A02230 (DbgkpInitializePhase0.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 960;
}
