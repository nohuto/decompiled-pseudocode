/*
 * XREFs of HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x1C000F210
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1C007290C (HUBMISC_GenerateUserNotificationForPersistentOverCurrent.c)
 */

__int64 __fastcall HUBPSM20_NotifyingUserAboutPersistentOverCurrent(__int64 a1)
{
  HUBMISC_GenerateUserNotificationForPersistentOverCurrent(*(_QWORD *)(a1 + 960));
  return 3013LL;
}
