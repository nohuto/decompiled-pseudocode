/*
 * XREFs of ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C023A5D8
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF004 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C012E190 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0200654 (WPP_RECORDER_SF_qd.c)
 */

bool __fastcall NotifyShell::ArrangementCompleted(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = a2;
    WPP_RECORDER_SF_qd(a1, a2, a3, 0xBu, (__int64)&WPP_9c76f83846f93a05eb3032aeec27f59d_Traceguids, a1, v4);
  }
  return anonymous_namespace_::NotifyShellSimplePayload();
}
