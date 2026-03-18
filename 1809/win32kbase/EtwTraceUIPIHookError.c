/*
 * XREFs of EtwTraceUIPIHookError @ 0x1C00E88E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C003B7D0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     McTemplateK0ndcdxx @ 0x1C00E99BC (McTemplateK0ndcdxx.c)
 */

void __fastcall EtwTraceUIPIHookError(
        __int64 a1,
        char a2,
        PETHREAD *a3,
        PETHREAD *a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _BYTE v15[40]; // [rsp+50h] [rbp-38h] BYREF

  memset(v15, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v15,
    2,
    a3,
    0LL,
    a4,
    0LL);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0ndcdxx(v12, v11, v13, v14, (__int64)v15, a5, a2, a6, a7, a8);
}
