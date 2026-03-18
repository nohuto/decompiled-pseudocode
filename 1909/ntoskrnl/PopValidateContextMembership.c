/*
 * XREFs of PopValidateContextMembership @ 0x1407491A8
 * Callers:
 *     PopGetSettingNotificationName @ 0x14069D2A4 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400F0060 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
