/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1408D1960
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14017F0C8 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
