/*
 * XREFs of InitializeEnumerationContext @ 0x1C0003C84
 * Callers:
 *     GetPerfDomain @ 0x1C0022064 (GetPerfDomain.c)
 *     ProcLibTraceControlCallback @ 0x1C0029130 (ProcLibTraceControlCallback.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0030974 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0030EDC (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeEnumerationContext(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)(a3 + 24) = a2;
}
