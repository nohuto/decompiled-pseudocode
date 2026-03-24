/*
 * XREFs of RtlGetSuiteMask @ 0x1406B47F0
 * Callers:
 *     RtlGetVersion @ 0x1406B4730 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C20 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetSuiteMask()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(unsigned int *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
