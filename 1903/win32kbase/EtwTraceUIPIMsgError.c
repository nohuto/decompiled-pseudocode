/*
 * XREFs of EtwTraceUIPIMsgError @ 0x1C0072120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqDDD @ 0x1C00721EC (WPP_RECORDER_SF_qqDDD.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C0072510 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     McTemplateK0nqxx @ 0x1C01102F8 (McTemplateK0nqxx.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIMsgError(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        char a3,
        char a4,
        __int64 a5)
{
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _UNKNOWN **result; // rax
  int v14; // [rsp+20h] [rbp-78h]
  _BYTE v15[40]; // [rsp+50h] [rbp-48h] BYREF

  memset(v15, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v15,
    1u,
    0LL,
    a1,
    0LL,
    a2);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxx(v10, v9, v11, v12, (__int64)v15, a3, a4, a5);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qqDDD(v10, v9, v11, v12, v14, (char)a2, (char)a1, a3, a4, a5);
  return result;
}
