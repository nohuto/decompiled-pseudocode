/*
 * XREFs of PopValidateContextMembership @ 0x1407472A8
 * Callers:
 *     PopGetSettingNotificationName @ 0x1406A0760 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400B39B0 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
