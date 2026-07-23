/*
 * XREFs of EvaluateCurrentState @ 0x1401B3F70
 * Callers:
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     EtwpTraceThreadRundown @ 0x14017C50C (EtwpTraceThreadRundown.c)
 *     FeatureServicing_43969648_EnableKey @ 0x140582E8C (FeatureServicing_43969648_EnableKey.c)
 *     RtlQueryAtomInAtomTable @ 0x1405F6840 (RtlQueryAtomInAtomTable.c)
 *     EtwTraceThread @ 0x1406247EC (EtwTraceThread.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 *     SeValidSecurityDescriptor @ 0x14069E910 (SeValidSecurityDescriptor.c)
 *     AdtpWriteToEtw @ 0x14074E754 (AdtpWriteToEtw.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14082FF40 (PiDevCfgResetDeviceKeyCallback.c)
 *     WmipQueryAllDataMultiple @ 0x1408B4C84 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1408B4F6C (WmipQuerySingleMultiple.c)
 * Callees:
 *     EvaluateFeature @ 0x1401B4018 (EvaluateFeature.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(_DWORD **a1)
{
  EvaluateFeature();
  return **a1 != 1;
}
