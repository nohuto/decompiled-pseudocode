/*
 * XREFs of RtlGetSuiteMask @ 0x1406B5A90
 * Callers:
 *     RtlGetVersion @ 0x1406B59D0 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
