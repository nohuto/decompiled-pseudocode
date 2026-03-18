/*
 * XREFs of McTemplateK0qq @ 0x1C00E97D4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 *     EtwTraceFocusChange @ 0x1C0089EC0 (EtwTraceFocusChange.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C008E130 (EtwTraceStartInputDeviceRead.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C008E590 (EtwTraceCompleteInputDeviceRead.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C00E63A0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C00E63D0 (EtwTraceDwmManipulationFrameStart.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0050EB8 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

ULONG __stdcall McTemplateK0qq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const unsigned int Arg0,
        const unsigned int Arg1)
{
  EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = Arg0;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  p_Arg1 = &Arg1;
  v12 = 0;
  v11 = 4;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)4, Descriptor, (LPCGUID)&::Context.Flags, 3u, &v6);
}
