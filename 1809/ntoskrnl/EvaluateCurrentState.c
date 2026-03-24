/*
 * XREFs of EvaluateCurrentState @ 0x1401B3694
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x14008CBB0 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x14008DC40 (NtCancelWaitCompletionPacket.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1401109A0 (FsRtlAddBaseMcbEntryEx.c)
 *     FeatureServicing_43969648_EnableKey @ 0x140581E8C (FeatureServicing_43969648_EnableKey.c)
 *     RtlQueryAtomInAtomTable @ 0x1405F5840 (RtlQueryAtomInAtomTable.c)
 *     NtCreateWaitCompletionPacket @ 0x1406A00D0 (NtCreateWaitCompletionPacket.c)
 *     AdtpWriteToEtw @ 0x14074D564 (AdtpWriteToEtw.c)
 * Callees:
 *     EvaluateFeature @ 0x1401B373C (EvaluateFeature.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(_DWORD **a1)
{
  EvaluateFeature();
  return **a1 != 1;
}
