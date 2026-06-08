/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x1C001C614
 * Callers:
 *     GetRegistryDwordValue @ 0x1C001C5F0 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001C694 (GetRegistryQwordValue.c)
 *     ProcLibTraceSummary2 @ 0x1C001CB00 (ProcLibTraceSummary2.c)
 *     GetHvPpmCapabilities @ 0x1C00201C8 (GetHvPpmCapabilities.c)
 *     InitPerfStatesInternal @ 0x1C0029684 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0029F7C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C002A4DC (InitCpcStatesInternal.c)
 *     PopulateEnergyEstimationParameters @ 0x1C00360F0 (PopulateEnergyEstimationParameters.c)
 *     ReadEnergyEquation @ 0x1C0036360 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00365C0 (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x1C000E300 (memset.c)
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
