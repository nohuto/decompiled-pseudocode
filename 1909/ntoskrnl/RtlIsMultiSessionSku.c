/*
 * XREFs of RtlIsMultiSessionSku @ 0x1405BDB70
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14017F0C8 (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405BDAF8 (SepIsImpersonationAllowedDueToCapability.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14077896C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x1408D1390 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1408D1770 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
