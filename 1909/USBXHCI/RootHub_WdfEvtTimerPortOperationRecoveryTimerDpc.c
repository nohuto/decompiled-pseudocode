/*
 * XREFs of RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x1C0003DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 */

__int64 __fastcall RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc(__int64 a1)
{
  __int64 **v1; // rax
  __int64 *v2; // rdx
  __int64 v3; // rbx
  int v5; // [rsp+28h] [rbp-10h]

  v1 = (__int64 **)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C0056400);
  v2 = *v1;
  v3 = **v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *((_DWORD *)v2 + 2);
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      (_DWORD)v2,
      11,
      211,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v5);
  }
  return Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 2, 4133, 0, 0LL, 0LL);
}
