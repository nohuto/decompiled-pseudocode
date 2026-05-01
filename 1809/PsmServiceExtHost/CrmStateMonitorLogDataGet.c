/*
 * XREFs of CrmStateMonitorLogDataGet @ 0x180032A34
 * Callers:
 *     CrmLogStateMonitorRundown @ 0x18003235C (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x1800324D0 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x180032620 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 */

const void *__fastcall CrmStateMonitorLogDataGet(const void **a1, _QWORD *a2, const void *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  const void *v8; // rdx
  const void *result; // rax

  v7 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1);
  memcpy_0((void *)(v6 + 16), a1[5], v7);
  v8 = a3;
  if ( !a3 )
    v8 = a1[5];
  memcpy_0(a2, v8, v7);
  a2[5] = a1[6];
  result = (const void *)MEMORY[0x7FFE0008];
  a2[4] = MEMORY[0x7FFE0008];
  a1[6] = result;
  return result;
}
