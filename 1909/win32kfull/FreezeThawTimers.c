/*
 * XREFs of FreezeThawTimers @ 0x1C00F0B30
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00FAE6C (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C01DAF74 (--1CAutoPushLockSh@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *FreezeThawTimers()
{
  return gtmrListHead;
}
