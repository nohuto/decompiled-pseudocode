/*
 * XREFs of ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0191068
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     IsShellProcess @ 0x1C003740C (IsShellProcess.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0037FDC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0038234 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::ShouldDeliverWheelEventToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3)
{
  char v3; // bl
  __int64 v6; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v8; // rax

  v3 = 0;
  if ( !*(_DWORD *)a3 )
    return 0;
  if ( *((_DWORD *)a2 + 6) == 2 || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
    return 1;
  v6 = *(unsigned int *)(*((_QWORD *)a2 + 1) + 104LL);
  if ( (v6 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
  if ( CInputDest::IsCompositionInput(a3) )
    return 1;
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( !ThreadInfo || (*(_DWORD *)(*((_QWORD *)ThreadInfo + 52) + 812LL) & 0x30) != 0 )
  {
    v8 = CInputDest::GetThreadInfo(a3);
    if ( !v8 || !(unsigned int)IsShellProcess(*((_QWORD *)v8 + 52)) )
      return 1;
  }
  return v3;
}
