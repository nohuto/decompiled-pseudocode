/*
 * XREFs of EtwTraceUIPIInputError @ 0x1C0059990
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0059050 (NtUserGetAsyncKeyState.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0118E74 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z @ 0x1C00AB3FC (-EtwpSetTraceHeader@@YAXPEAUtagUIPI_TRACE_HEADER@@KPEAUtagTHREADINFO@@PEAUtagPROCESSINFO@@12@Z.c)
 *     ?EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z @ 0x1C00AB4A0 (-EtwpTraceUIPIError@@YAXPEBU_EVENT_DESCRIPTOR@@QEAXK@Z.c)
 */

void __fastcall EtwTraceUIPIInputError(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  _QWORD v8[6]; // [rsp+38h] [rbp-50h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( (W32kEtwEnabledKeyword & 0x4000000000004000LL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x4000000000004000LL) != 0
    && (qword_1C019A1C8 & 0x4000000000004000LL) == qword_1C019A1C8 )
  {
    EtwpSetTraceHeader((struct tagUIPI_TRACE_HEADER *)v8, 5u, a1, 0LL, a2, 0LL);
    HIDWORD(v8[4]) = a5;
    v8[5] = a4;
    EtwpTraceUIPIError(&UIPIInputEvent, v8, 0x30u);
  }
}
