/*
 * XREFs of ZwCreateWnfStateName @ 0x1401B9BB0
 * Callers:
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065262C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x140656AB8 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406CF840 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
