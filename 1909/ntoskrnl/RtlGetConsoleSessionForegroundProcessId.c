/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1408CE0B0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}
