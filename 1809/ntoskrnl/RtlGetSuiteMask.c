/*
 * XREFs of RtlGetSuiteMask @ 0x1406B4810
 * Callers:
 *     RtlGetVersion @ 0x1406B4750 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetSuiteMask()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(unsigned int *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
