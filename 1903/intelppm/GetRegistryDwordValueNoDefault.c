/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C001FC34
 * Callers:
 *     GetRegistryQwordValue @ 0x1C001FB3C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C001FC10 (GetRegistryDwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C0022B5C (ProcLibTraceSummary2.c)
 *     InitPerfStatesInternal @ 0x1C0023A18 (InitPerfStatesInternal.c)
 *     GetHvPpmCapabilities @ 0x1C002E8AC (GetHvPpmCapabilities.c)
 *     InitCpcStatesInternal @ 0x1C0032738 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0033A90 (InitPerfFeedbackInternal.c)
 *     InitDriver @ 0x1C0039268 (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C003953C (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C0039628 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0039DB0 (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C00046C0 (memset.c)
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
