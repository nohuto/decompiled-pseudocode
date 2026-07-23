/*
 * XREFs of ZwDeleteWnfStateName @ 0x1401B9D50
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065262C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C9338 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x1406E2788 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
