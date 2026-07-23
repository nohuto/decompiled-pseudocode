/*
 * XREFs of RtlGetSuiteMask @ 0x1406D9C50
 * Callers:
 *     RtlGetVersion @ 0x1406D9B80 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}
