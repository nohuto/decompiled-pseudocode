/*
 * XREFs of ZwDeleteWnfStateName @ 0x1401C26D0
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D3D30 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406EA0E4 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x140729A8C (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
