/*
 * XREFs of EvaluateCurrentState @ 0x1401B3674
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x140062B00 (NtAssociateWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x14008CBB0 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x14008DC40 (NtCancelWaitCompletionPacket.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400A3EE0 (RtlpIsNameInExpressionPrivate.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x140110980 (FsRtlAddBaseMcbEntryEx.c)
 *     FeatureServicing_43969648_EnableKey @ 0x140581E8C (FeatureServicing_43969648_EnableKey.c)
 *     RtlQueryAtomInAtomTable @ 0x1405F5840 (RtlQueryAtomInAtomTable.c)
 *     IopAllocRealFileObject @ 0x14063BB00 (IopAllocRealFileObject.c)
 *     NtCreateWaitCompletionPacket @ 0x1406A00F0 (NtCreateWaitCompletionPacket.c)
 *     AdtpWriteToEtw @ 0x14074D584 (AdtpWriteToEtw.c)
 * Callees:
 *     EvaluateFeature @ 0x1401B371C (EvaluateFeature.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(_DWORD **a1)
{
  EvaluateFeature();
  return **a1 != 1;
}
