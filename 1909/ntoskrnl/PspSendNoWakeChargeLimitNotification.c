/*
 * XREFs of PspSendNoWakeChargeLimitNotification @ 0x1408C7938
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140613050 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSendNoWakeChargeLimitNotification(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  if ( !a1 )
  {
    v3 = -1;
    v1 = 4LL;
    v4 = 0;
    return ZwUpdateWnfStateData((__int64)&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, (__int64)&v3, v1);
  }
  if ( !PspNoWakeChargeReferencedProcess )
  {
    v5 = 0LL;
    result = PspEnumJobsAndProcessesInJobHierarchy(a1, 0, 0, (int)PspGetProcessInJobHierarchyCallback, (__int64)&v5, 0);
    if ( v5 )
    {
      v3 = 1;
      v1 = 8LL;
      v4 = *(_DWORD *)(v5 + 744);
      PspNoWakeChargeReferencedProcess = (PVOID)v5;
      return ZwUpdateWnfStateData((__int64)&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, (__int64)&v3, v1);
    }
  }
  return result;
}
