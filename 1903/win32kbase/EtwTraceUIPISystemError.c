/*
 * XREFs of EtwTraceUIPISystemError @ 0x1C00722D0
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C01173E0 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C011C810 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C011D260 (NtUserSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C0072510 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     McTemplateK0nq @ 0x1C0110108 (McTemplateK0nq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPISystemError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _UNKNOWN **result; // rax
  _BYTE v9[40]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v9,
    7u,
    0LL,
    a1,
    0LL,
    a2);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nq(v5, v4, v6, v7, (__int64)v9);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          (_DWORD)gBaseLog,
                          v4,
                          18,
                          16,
                          (__int64)&WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids,
                          (char)a1);
  }
  return result;
}
