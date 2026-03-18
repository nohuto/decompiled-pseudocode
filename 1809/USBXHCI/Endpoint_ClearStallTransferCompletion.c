/*
 * XREFs of Endpoint_ClearStallTransferCompletion @ 0x1C0014DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddqd @ 0x1C001A73C (WPP_RECORDER_SF_ddqd.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ClearStallTransferCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  WPP_RECORDER_SF_ddqd(Context[10], 4, (_DWORD)Context, 65);
  ESM_AddEvent(Context + 36);
  return 3221225494LL;
}
