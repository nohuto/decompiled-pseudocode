/*
 * XREFs of EtwTraceUIPIHandleValidationError @ 0x1C005BEC4
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00243F0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     ValidateHwndEx @ 0x1C0026630 (ValidateHwndEx.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C002BBC4 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1C005BF78 (WPP_RECORDER_SF_DDqq.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C005C040 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     McTemplateK0nxqq @ 0x1C010DA24 (McTemplateK0nxqq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIHandleValidationError(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        char a3,
        char a4)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _UNKNOWN **result; // rax
  int v13; // [rsp+20h] [rbp-78h]
  _BYTE v14[40]; // [rsp+50h] [rbp-48h] BYREF

  memset(v14, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v14,
    4u,
    0LL,
    a1,
    0LL,
    a2);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nxqq(v9, v8, v10, v11, (__int64)v14, a3, a4);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_DDqq(v9, v8, v10, v11, v13, a3, a4, (char)a2, (char)a1);
  return result;
}
