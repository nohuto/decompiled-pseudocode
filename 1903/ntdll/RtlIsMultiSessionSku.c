/*
 * XREFs of RtlIsMultiSessionSku @ 0x18000BCD0
 * Callers:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1800863D0 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 */

char RtlIsMultiSessionSku()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((_BYTE *)NtCurrentPeb()->HotpatchInformation + 28);
  else
    return MEMORY[0x7FFE02F1] & 1;
}
