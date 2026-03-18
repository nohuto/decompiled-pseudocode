/*
 * XREFs of EtwTraceUIPIInputError @ 0x1C0072050
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0071D10 (NtUserGetAsyncKeyState.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A1750 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C016F63C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C0072510 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00726E8 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     McTemplateK0nqqq @ 0x1C0110188 (McTemplateK0nqqq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIInputError(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        char a3,
        __int64 a4,
        char a5)
{
  char v6; // bl
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _UNKNOWN **result; // rax
  char v14; // [rsp+44h] [rbp-64h]
  _BYTE v15[40]; // [rsp+48h] [rbp-60h] BYREF

  v6 = a4;
  v14 = BYTE4(a4);
  memset(v15, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v15,
    5u,
    a1,
    0LL,
    a2,
    0LL);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq(v10, (unsigned int)&UIPIInputEvent, v11, v12, (__int64)v15, a5, v6, v14);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_qq(
                          (_DWORD)gBaseLog,
                          v9,
                          18,
                          14,
                          (__int64)&WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids,
                          (char)a1,
                          a3);
  }
  return result;
}
