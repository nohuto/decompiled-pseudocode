/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C00220FC
 * Callers:
 *     GetHvPpmCapabilities @ 0x1C001A314 (GetHvPpmCapabilities.c)
 *     InitPerfStatesInternal @ 0x1C001DE98 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E73C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EC8C (InitCpcStatesInternal.c)
 *     GetRegistryDwordValue @ 0x1C00220D8 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C002217C (GetRegistryQwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C0028AFC (ProcLibTraceSummary2.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0032F2C (PopulateEnergyEstimationParameters.c)
 *     ReadEnergyEquation @ 0x1C003319C (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00333FC (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C000CEC0 (memset.c)
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
