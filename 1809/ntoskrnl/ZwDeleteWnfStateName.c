/*
 * XREFs of ZwDeleteWnfStateName @ 0x1401B9BF0
 * Callers:
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065146C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB04 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C8098 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x1406E14E8 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
