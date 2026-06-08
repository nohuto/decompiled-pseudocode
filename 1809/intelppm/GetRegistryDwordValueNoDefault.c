/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C0023418
 * Callers:
 *     IsIntelPccDriverPresent @ 0x1C0003F88 (IsIntelPccDriverPresent.c)
 *     ProcLibTraceSummary2 @ 0x1C001FECC (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C0022910 (InitPerfStatesInternal.c)
 *     GetRegistryDwordValue @ 0x1C00233F4 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0023498 (GetRegistryQwordValue.c)
 *     GetHvPpmCapabilities @ 0x1C002C37C (GetHvPpmCapabilities.c)
 *     InitCpcStatesInternal @ 0x1C002FF1C (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00311EC (InitPerfFeedbackInternal.c)
 *     PopulateEnergyEstimationModel @ 0x1C0036040 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0036130 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0036C30 (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C0004FC0 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValueNoDefault(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  v7[2] = a2;
  v7[3] = a3;
  LODWORD(v7[4]) = 0x4000000;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
