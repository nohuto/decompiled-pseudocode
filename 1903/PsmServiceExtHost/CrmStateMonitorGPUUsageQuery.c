/*
 * XREFs of CrmStateMonitorGPUUsageQuery @ 0x1800048CC
 * Callers:
 *     CrmStateMonitorGPUUsageCSCallback @ 0x180003560 (CrmStateMonitorGPUUsageCSCallback.c)
 *     CrmStateMonitorGPUUsageTimerCallback @ 0x180004020 (CrmStateMonitorGPUUsageTimerCallback.c)
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x1800709F4 (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x180070BEC (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CrmStateMonitorGPUUsageQuery(_QWORD *a1)
{
  NTSTATUS result; // eax
  _DWORD SystemInformation[4]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD *v4; // [rsp+30h] [rbp-30h]
  int v5; // [rsp+38h] [rbp-28h]
  int v6; // [rsp+3Ch] [rbp-24h]
  _DWORD v7[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+48h] [rbp-18h]

  SystemInformation[3] = 0;
  v6 = 0;
  v8 = 0LL;
  v7[1] = -1;
  SystemInformation[0] = 45;
  SystemInformation[1] = 1802856515;
  SystemInformation[2] = 28;
  v4 = v7;
  v5 = 16;
  v7[0] = 1;
  result = NtQuerySystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    *a1 = v8;
    return 0;
  }
  return result;
}
