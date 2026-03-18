/*
 * XREFs of RootHub_WdfEvtTimerPortOperationPendingTimerDpc @ 0x1C0003D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C002127C (RootHub_DetectAndAcknowledgePortResume.c)
 */

__int64 __fastcall RootHub_WdfEvtTimerPortOperationPendingTimerDpc(__int64 a1)
{
  __int64 **v1; // rax
  int v2; // edx
  __int64 *v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // edi

  v1 = (__int64 **)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     a1,
                     off_1C0056400);
  v3 = *v1;
  v4 = **v1;
  v5 = *((_DWORD *)*v1 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
      v2,
      11,
      212,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v5);
  }
  *((_BYTE *)v3 + 18) = 0;
  return RootHub_DetectAndAcknowledgePortResume(v4, v5, 0LL);
}
