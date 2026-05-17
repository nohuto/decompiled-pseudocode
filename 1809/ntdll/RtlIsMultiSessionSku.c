/*
 * XREFs of RtlIsMultiSessionSku @ 0x18004AA60
 * Callers:
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004C444 (OpenGlobalizationUserSettingsKey.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x18008AAE0 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 */

char RtlIsMultiSessionSku()
{
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 28);
  else
    return MEMORY[0x7FFE02F1] & 1;
}
