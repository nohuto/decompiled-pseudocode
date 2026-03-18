/*
 * XREFs of Endpoint_ClearStallTransferCompletion @ 0x1C0017A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddqd @ 0x1C001DAFC (WPP_RECORDER_SF_ddqd.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ClearStallTransferCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqd(Context[10], 4, (_DWORD)Context, 65);
  ESM_AddEvent(Context + 36);
  return 3221225494LL;
}
