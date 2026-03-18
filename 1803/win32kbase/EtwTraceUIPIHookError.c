/*
 * XREFs of EtwTraceUIPIHookError @ 0x1C00AD2B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB3FC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB4A0 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIHookError(
        __int64 a1,
        char a2,
        struct tagTHREADINFO *a3,
        struct tagTHREADINFO *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD v11[8]; // [rsp+30h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( (W32kEtwEnabledKeyword & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x4000000000004000LL) != 0
    && (qword_1C019A1C8 & 0x4000000000004000LL) == qword_1C019A1C8 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v11, 2, a3, 0LL, a4, 0LL);
    HIDWORD(v11[4]) = a5;
    HIDWORD(v11[5]) = a6;
    v11[6] = a7;
    v11[7] = a8;
    LOBYTE(v11[5]) = a2;
    EtwpTraceUIPIError(&UIPIHookEvent, (ULONGLONG)v11, 0x40u);
  }
}
