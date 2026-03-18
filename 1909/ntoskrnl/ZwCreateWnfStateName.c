/*
 * XREFs of ZwCreateWnfStateName @ 0x1401C2530
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x14069FF58 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1406A1344 (PopCreateNotificationName.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D3D30 (PspAllocateAndQueryProcessNotificationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
