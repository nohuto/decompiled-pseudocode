/*
 * XREFs of ZwDeleteWnfStateName @ 0x1401C1B50
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D4650 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E8EA4 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x14072871C (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
