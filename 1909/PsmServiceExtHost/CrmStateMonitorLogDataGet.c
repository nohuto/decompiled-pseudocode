/*
 * XREFs of CrmStateMonitorLogDataGet @ 0x1800045F0
 * Callers:
 *     CrmLogStateMonitorRundown @ 0x180003F58 (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorStateSet @ 0x1800040C8 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x180004190 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x1800042E0 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

const void *__fastcall CrmStateMonitorLogDataGet(const void **a1, _DWORD *a2, const void *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebp
  const void *v10; // rdx
  BOOL v11; // ecx
  const void *result; // rax

  memset_0(a2, 0, 0x38uLL);
  v9 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1, v6, v7, v8);
  memcpy_0(a2 + 4, a1[5], v9);
  v10 = a3;
  if ( !a3 )
    v10 = a1[5];
  memcpy_0(a2, v10, v9);
  v11 = 1;
  if ( *(_DWORD *)a1 == 5 && a3 )
    v11 = *a2 == 20 * (*a2 / 0x14u);
  *((_QWORD *)a2 + 5) = a1[6];
  result = (const void *)MEMORY[0x7FFE0008];
  *((_QWORD *)a2 + 4) = MEMORY[0x7FFE0008];
  if ( v11 )
    a1[6] = result;
  else
    a2[12] = 1;
  return result;
}
