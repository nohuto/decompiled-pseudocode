/*
 * XREFs of CrmStateMonitorGPUUsageTimerCallback @ 0x180004020
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800040C8 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorGPUUsageQuery @ 0x1800048CC (CrmStateMonitorGPUUsageQuery.c)
 */

__int64 __fastcall CrmStateMonitorGPUUsageTimerCallback(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = CrmStateMonitorGPUUsageQuery(v9);
  v4 = v9[0];
  if ( v3 < 0 )
    v4 = -1LL;
  RtlQueryUnbiasedInterruptTime(&v11);
  v5 = v11 - *(_QWORD *)(a2 + 96);
  if ( v4 == -1 || *(_QWORD *)(a2 + 104) == -1LL )
    v6 = v11 - *(_QWORD *)(a2 + 96);
  else
    v6 = v4 - *(_QWORD *)(a2 + 104);
  if ( v5 )
    v7 = 100 * v6 / v5;
  else
    LODWORD(v7) = 100;
  v10 = v7;
  CrmStateMonitorStateSet(a2, &v10, 4LL);
  result = v11;
  *(_QWORD *)(a2 + 96) = v11;
  *(_QWORD *)(a2 + 104) = v4;
  return result;
}
