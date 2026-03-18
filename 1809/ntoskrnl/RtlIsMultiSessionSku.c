/*
 * XREFs of RtlIsMultiSessionSku @ 0x1406AD9E0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140174AB4 (OpenGlobalizationUserSettingsKey.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AD96C (SepIsImpersonationAllowedDueToCapability.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140736978 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140893CC0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1408CD2D0 (NtSetSystemTime.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9C00 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

char RtlIsMultiSessionSku()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
