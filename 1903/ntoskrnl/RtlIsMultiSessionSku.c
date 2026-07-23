/*
 * XREFs of RtlIsMultiSessionSku @ 0x1405BD790
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14017E9D8 (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405BD718 (SepIsImpersonationAllowedDueToCapability.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14077538C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x1408D1A90 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1408D1E70 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
