/*
 * XREFs of RtlSetSystemGlobalData @ 0x1401B5F44
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 */

DWORD __cdecl RtlSetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  if ( PsIsCurrentThreadInServerSilo() )
    *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 584LL) = *(_DWORD *)Buffer;
  else
    MEMORY[0xFFFFF78000000240] = *(_DWORD *)Buffer;
  return 0;
}
