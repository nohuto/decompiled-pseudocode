/*
 * XREFs of RtlSetSystemGlobalData @ 0x1401B5DBC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlSetSystemGlobalData(__int64 a1, _DWORD *a2)
{
  if ( PsIsCurrentThreadInServerSilo() )
    *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 584LL) = *a2;
  else
    MEMORY[0xFFFFF78000000240] = *a2;
  return 0LL;
}
