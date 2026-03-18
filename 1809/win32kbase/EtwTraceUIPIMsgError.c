/*
 * XREFs of EtwTraceUIPIMsgError @ 0x1C003B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C003B7D0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     McTemplateK0nqxx @ 0x1C00E9C68 (McTemplateK0nqxx.c)
 */

void __fastcall EtwTraceUIPIMsgError(
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
  _BYTE v13[40]; // [rsp+40h] [rbp-48h] BYREF

  memset(v13, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v13,
    1u,
    0LL,
    a1,
    0LL,
    a2);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxx(v10, v9, v11, v12, (__int64)v13, a3, a4, a5);
}
