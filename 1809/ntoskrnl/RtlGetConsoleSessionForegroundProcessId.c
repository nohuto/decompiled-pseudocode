/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1408904F0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}
