/*
 * XREFs of EtwTraceUIPISystemError @ 0x1C0013C10
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C00B5B60 (NtUserEnableTouchPad.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00B9B20 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00BA130 (NtUserSystemParametersInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB3FC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB4A0 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPISystemError(struct tagPROCESSINFO *a1, struct tagPROCESSINFO *a2, int a3)
{
  _DWORD v6[10]; // [rsp+30h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( (W32kEtwEnabledKeyword & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x4000000000004000LL) != 0
    && (qword_1C019A1C8 & 0x4000000000004000LL) == qword_1C019A1C8 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v6, 7u, 0LL, a1, 0LL, a2);
    v6[9] = a3;
    EtwpTraceUIPIError(&UIPISystemEvent, v6, 0x28u);
  }
}
