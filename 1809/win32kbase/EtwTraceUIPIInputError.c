/*
 * XREFs of EtwTraceUIPIInputError @ 0x1C003B5A0
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0038940 (NtUserGetAsyncKeyState.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0140C70 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C003B7D0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     McTemplateK0nqqq @ 0x1C00E9AF8 (McTemplateK0nqqq.c)
 */

void __fastcall EtwTraceUIPIInputError(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  char v6; // bl
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char v11; // [rsp+44h] [rbp-54h]
  _BYTE v12[40]; // [rsp+48h] [rbp-50h] BYREF

  v6 = a4;
  v11 = BYTE4(a4);
  memset(v12, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v12,
    5u,
    a1,
    0LL,
    a2,
    0LL);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq(v8, (unsigned int)&UIPIInputEvent, v9, v10, (__int64)v12, a5, v6, v11);
}
