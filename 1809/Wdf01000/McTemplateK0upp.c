/*
 * XREFs of McTemplateK0upp @ 0x1C0045744
 * Callers:
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00BD050 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00BD1B0 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00BD310 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1C00BE560 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1C00BE6D0 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00BE840 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1C00C1040 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C1210 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C13F0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C15D0 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1C00C1920 (VfEvtIoWrite.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00456E4 (McGenEventWrite.c)
 */

NTSTATUS __fastcall McTemplateK0upp(
        _MCGEN_TRACE_CONTEXT *Descriptor,
        const _EVENT_DESCRIPTOR *Activity,
        const _GUID *_Arg0,
        unsigned __int8 _Arg1,
        const void *_Arg2,
        const void *Context)
{
  _EVENT_DATA_DESCRIPTOR EventData[4]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int8 v8; // [rsp+A8h] [rbp+28h] BYREF

  v8 = _Arg1;
  *(_QWORD *)&EventData[1].Size = 1LL;
  EventData[1].Ptr = (unsigned __int64)&v8;
  *(_QWORD *)&EventData[2].Size = 8LL;
  EventData[2].Ptr = (unsigned __int64)&_Arg2;
  EventData[3].Ptr = (unsigned __int64)&Context;
  *(_QWORD *)&EventData[3].Size = 8LL;
  return McGenEventWrite(Descriptor, Activity, _Arg0, 4u, EventData);
}
