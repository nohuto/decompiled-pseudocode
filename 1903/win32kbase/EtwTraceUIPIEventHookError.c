/*
 * XREFs of EtwTraceUIPIEventHookError @ 0x1C010EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C0072510 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     McTemplateK0nqxqqddq @ 0x1C011021C (McTemplateK0nqxqqddq.c)
 *     WPP_RECORDER_SF_qqDqq @ 0x1C0112120 (WPP_RECORDER_SF_qqDqq.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIEventHookError(__int64 a1, PETHREAD *a2, PETHREAD *a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _UNKNOWN **result; // rax
  int v11; // [rsp+20h] [rbp-88h]
  _BYTE v12[40]; // [rsp+60h] [rbp-48h] BYREF

  memset(v12, 0, 0x24uLL);
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v12,
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
      (__int64)v12,
      *(_DWORD *)(a1 + 28),
      *(_QWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 44),
      *(_DWORD *)(a1 + 48),
      *(_DWORD *)(a1 + 52),
      *(_DWORD *)(a1 + 56));
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qqDqq(
                          v7,
                          v6,
                          v8,
                          v9,
                          v11,
                          a1,
                          *(_QWORD *)(a1 + 16),
                          *(_DWORD *)(a1 + 56),
                          (char)a2,
                          (char)a3);
  return result;
}
