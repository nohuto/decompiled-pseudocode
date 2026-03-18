/*
 * XREFs of McTemplateK0qqq @ 0x1C010D1E0
 * Callers:
 *     EtwTraceFocusedProcessChange @ 0x1C009AD20 (EtwTraceFocusedProcessChange.c)
 *     EtwTraceGreMovePointerEnd @ 0x1C00A46A0 (EtwTraceGreMovePointerEnd.c)
 *     EtwTraceGreMovePointerBegin @ 0x1C00A46C0 (EtwTraceGreMovePointerBegin.c)
 *     EtwTraceBeginPointerFrameBuildPartial @ 0x1C010AB60 (EtwTraceBeginPointerFrameBuildPartial.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C010AB90 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C010ABE0 (EtwTraceBeginPointerFrameCommit.c)
 *     EtwTraceBeginPointerFrameCreation @ 0x1C010AC10 (EtwTraceBeginPointerFrameCreation.c)
 *     EtwTraceBeginPointerFrameMessageGeneration @ 0x1C010AC40 (EtwTraceBeginPointerFrameMessageGeneration.c)
 *     EtwTraceCursorSize @ 0x1C010AE70 (EtwTraceCursorSize.c)
 *     EtwTraceEndPointerFrameBuildPartial @ 0x1C010B250 (EtwTraceEndPointerFrameBuildPartial.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C010B280 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C010B2D0 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C010B300 (EtwTraceEndPointerFrameCreation.c)
 *     EtwTraceEndPointerFrameMessageGeneration @ 0x1C010B330 (EtwTraceEndPointerFrameMessageGeneration.c)
 *     ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1C011F748 (-ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0058898 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
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
