/*
 * XREFs of PnpDeviceCompletionRequestDestroyWorkItem @ 0x14015B500
 * Callers:
 *     <none>
 * Callees:
 *     PnpDisableWatchdog @ 0x1400EFC58 (PnpDisableWatchdog.c)
 *     IoFreeWorkItem @ 0x14012E310 (IoFreeWorkItem.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroyWorkItem(__int64 a1, _QWORD *a2, struct _IO_WORKITEM *a3)
{
  PnpDisableWatchdog(a2, 2);
  IoFreeWorkItem(a3);
  ExFreePoolWithTag(a2, 0x31706E50u);
}
