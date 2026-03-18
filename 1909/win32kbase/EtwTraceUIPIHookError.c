/*
 * XREFs of EtwTraceUIPIHookError @ 0x1C010C590
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C005C040 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     McTemplateK0ndcdxx @ 0x1C010D6DC (McTemplateK0ndcdxx.c)
 *     WPP_RECORDER_SF_qDqq @ 0x1C010F694 (WPP_RECORDER_SF_qDqq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHookError(
        char a1,
        char a2,
        PETHREAD *a3,
        PETHREAD *a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _UNKNOWN **result; // rax
  int v17; // [rsp+20h] [rbp-78h]
  _BYTE v18[40]; // [rsp+50h] [rbp-48h] BYREF

  memset(v18, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v18,
    2,
    a3,
    0LL,
    a4,
    0LL);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0ndcdxx(v13, v12, v14, v15, (__int64)v18, a5, a2, a6, a7, a8);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qDqq(v13, v12, v14, v15, v17, a1, a2, (char)a3, (char)a4);
  return result;
}
