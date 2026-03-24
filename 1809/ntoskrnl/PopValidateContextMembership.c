/*
 * XREFs of PopValidateContextMembership @ 0x14071E644
 * Callers:
 *     PopGetSettingNotificationName @ 0x14058E66C (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400DCB10 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
