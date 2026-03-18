/*
 * XREFs of McTemplateK0qqq @ 0x1C010FB50
 * Callers:
 *     EtwTraceFocusedProcessChange @ 0x1C009C600 (EtwTraceFocusedProcessChange.c)
 *     EtwTraceGreMovePointerEnd @ 0x1C00A56F0 (EtwTraceGreMovePointerEnd.c)
 *     EtwTraceGreMovePointerBegin @ 0x1C00A5710 (EtwTraceGreMovePointerBegin.c)
 *     EtwTraceBeginPointerFrameBuildPartial @ 0x1C010D4D0 (EtwTraceBeginPointerFrameBuildPartial.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C010D500 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C010D550 (EtwTraceBeginPointerFrameCommit.c)
 *     EtwTraceBeginPointerFrameCreation @ 0x1C010D580 (EtwTraceBeginPointerFrameCreation.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C010D5B0 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceCursorSize @ 0x1C010D7E0 (EtwTraceCursorSize.c)
 *     EtwTraceEndPointerFrameBuildPartial @ 0x1C010DBC0 (EtwTraceEndPointerFrameBuildPartial.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C010DBF0 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C010DC40 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C010DC70 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C010DCA0 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1C01220B8 (-ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1C006C7F8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

ULONG __stdcall McTemplateK0qqq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const unsigned int Arg0,
        const unsigned int Arg1,
        const unsigned int Arg2)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  const unsigned int *p_Arg2; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  unsigned int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = Arg0;
  v8 = &v14;
  v9 = 4LL;
  p_Arg1 = &Arg1;
  p_Arg2 = &Arg2;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWrite(Context, Descriptor, (LPCGUID)&::Context.Flags, 4u, &EventData);
}
