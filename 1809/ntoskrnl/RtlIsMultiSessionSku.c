/*
 * XREFs of RtlIsMultiSessionSku @ 0x1406AEC60
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140174BD4 (OpenGlobalizationUserSettingsKey.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406AEBEC (SepIsImpersonationAllowedDueToCapability.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140737B48 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x140894B20 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140894F00 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1408CE570 (NtSetSystemTime.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 140) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
