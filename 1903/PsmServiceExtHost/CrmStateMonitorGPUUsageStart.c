/*
 * XREFs of CrmStateMonitorGPUUsageStart @ 0x1800034F0
 * Callers:
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x180003980 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x1800046A4 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorGPUUsageStart(unsigned int *a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  const void *v8; // rdx
  void *v9; // r9
  __int64 result; // rax

  v5 = a1 + 14;
  *((_QWORD *)a1 + 5) = a1 + 14;
  v6 = *a1;
  *v5 = 100;
  v7 = CrmStateMonitorStateSizeGet(v6, v5, a3, a2);
  memcpy_0(v9, v8, v7);
  result = TpAllocTimer(a1 + 22, CrmStateMonitorGPUUsageTimerCallback, a1, 0LL);
  if ( (int)result >= 0 )
    return CrmRegisterToStateMonitor(a1 + 16, 8LL);
  return result;
}
