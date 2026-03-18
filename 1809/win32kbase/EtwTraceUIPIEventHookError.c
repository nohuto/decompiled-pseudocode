/*
 * XREFs of EtwTraceUIPIEventHookError @ 0x1C00E8800
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C003B7D0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     McTemplateK0nqxqqddq @ 0x1C00E9B8C (McTemplateK0nqxqqddq.c)
 */

void __fastcall EtwTraceUIPIEventHookError(__int64 a1, PETHREAD *a2, PETHREAD *a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _BYTE v10[40]; // [rsp+60h] [rbp-38h] BYREF

  memset(v10, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v10,
    3,
    a2,
    0LL,
    a3,
    0LL);
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxqqddq(
      v7,
      v6,
      v8,
      v9,
      (__int64)v10,
      *(_DWORD *)(a1 + 28),
      *(_QWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 44),
      *(_DWORD *)(a1 + 48),
      *(_DWORD *)(a1 + 52),
      *(_DWORD *)(a1 + 56));
}
