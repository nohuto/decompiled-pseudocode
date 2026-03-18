/*
 * XREFs of ZwCreateWnfStateName @ 0x1401B9A30
 * Callers:
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065148C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x140655918 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406CE5C0 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
