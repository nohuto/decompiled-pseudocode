/*
 * XREFs of McTemplateK0qq @ 0x1C00AECC8
 * Callers:
 *     EtwTraceFocusChange @ 0x1C006B250 (EtwTraceFocusChange.c)
 *     xxxCreateThreadInfo @ 0x1C006F538 (xxxCreateThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3780 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00AB810 (EtwTraceCompleteInputDeviceRead.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C00ABCF0 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C00ABD20 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C00AC830 (EtwTraceStartInputDeviceRead.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

ULONG __stdcall McTemplateK0qq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const unsigned int Arg0,
        const unsigned int Arg1)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
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
  return McGenEventWriteKM(4LL, Descriptor, &W32kControlGuid, 3u, &v6);
}
