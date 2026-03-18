/*
 * XREFs of EtwTraceUIPIEventHookError @ 0x1C00AD1A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB3FC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB4A0 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIEventHookError(__int64 a1, struct tagTHREADINFO *a2, struct tagTHREADINFO *a3)
{
  _QWORD v6[10]; // [rsp+30h] [rbp-78h] BYREF

  memset(v6, 0, 0x48uLL);
  if ( (W32kEtwEnabledKeyword & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x4000000000004000LL) != 0
    && (qword_1C019A1C8 & 0x4000000000004000LL) == qword_1C019A1C8 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v6, 3, a2, 0LL, a3, 0LL);
    HIDWORD(v6[4]) = *(_DWORD *)(a1 + 20);
    v6[5] = *(_QWORD *)(a1 + 24);
    v6[6] = *(_QWORD *)(a1 + 32);
    v6[7] = *(_QWORD *)(a1 + 40);
    LODWORD(v6[8]) = *(_DWORD *)(a1 + 48);
    EtwpTraceUIPIError(&UIPIEventHookEvent, (ULONGLONG)v6, 0x48u);
  }
}
