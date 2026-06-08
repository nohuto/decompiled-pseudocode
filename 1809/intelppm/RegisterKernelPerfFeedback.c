/*
 * XREFs of RegisterKernelPerfFeedback @ 0x1C0032AA0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x1C00311EC (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterKernelPerfFeedback(__int64 a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(char *, _QWORD))RegisterKernelPerfStatesCallback);
}
