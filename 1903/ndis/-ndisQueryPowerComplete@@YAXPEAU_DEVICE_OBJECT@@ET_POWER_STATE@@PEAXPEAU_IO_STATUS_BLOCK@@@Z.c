/*
 * XREFs of ?ndisQueryPowerComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0012E40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 */

void __fastcall ndisQueryPowerComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // esi
  _IRP *v7; // rbx
  int v8; // edx

  Status = IoStatus->Status;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      14,
      31,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)Context,
      IoStatus->Status);
  if ( Status < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        14,
        32,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        (char)Context,
        IoStatus->Status);
    if ( (byte_1C00E8041 & 8) != 0 )
      McTemplateK0jqxq(
        (_DWORD)DeviceObject,
        (unsigned int)&QueryPowerComplete,
        (_DWORD)Context + 4008,
        (_DWORD)Context + 4008,
        *((_DWORD *)Context + 1014),
        *((_QWORD *)Context + 503),
        IoStatus->Status);
  }
  v7 = (_IRP *)*((_QWORD *)Context + 97);
  v7->IoStatus.Status = Status;
  IofCompleteRequest(v7, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(Context + 4120), v7, 0x20u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      14,
      33,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)Context);
  }
}
