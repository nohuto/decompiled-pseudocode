/*
 * XREFs of rimFindAndReclaimHoldingFrame @ 0x1C0123810
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C008966C (rimFindHoldingFrame.c)
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C0122860 (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 *     rimReclaimHoldingFrame @ 0x1C0123E10 (rimReclaimHoldingFrame.c)
 */

_QWORD *__fastcall rimFindAndReclaimHoldingFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *result; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx

  result = rimFindHoldingFrame(a1, a2);
  v8 = result;
  if ( result )
  {
    InputTraceLogging::RIM::DropCompleteFrame(a2, (__int64)result, a3 != 0, a4);
    return (_QWORD *)rimReclaimHoldingFrame(v10, v9, v8);
  }
  return result;
}
