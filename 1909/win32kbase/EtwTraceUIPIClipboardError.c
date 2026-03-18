/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1C010C390
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C005C040 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C005CF44 (WPP_RECORDER_SF_qDD.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     McTemplateK0nqqq @ 0x1C010D818 (McTemplateK0nqqq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIClipboardError(PEPROCESS *a1, PEPROCESS *a2, char a3, __int64 a4)
{
  char v5; // bl
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _UNKNOWN **result; // rax
  char v13; // [rsp+44h] [rbp-54h]
  _BYTE v14[40]; // [rsp+48h] [rbp-50h] BYREF

  v5 = a4;
  v13 = BYTE4(a4);
  memset(v14, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v14,
    6,
    0LL,
    a1,
    0LL,
    a2);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq(v9, (unsigned int)&UIPIClipboardEvent, v10, v11, (__int64)v14, a3, v5, v13);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_qDD(
                          (_DWORD)gBaseLog,
                          v8,
                          18,
                          15,
                          (__int64)&WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids,
                          (char)a2,
                          a3,
                          v5);
  }
  return result;
}
