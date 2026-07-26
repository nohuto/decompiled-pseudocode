/*
 * XREFs of ndisQueryPowerComplete @ 0x1C0011690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
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

  Status = IoStatus->Status;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(31LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, (unsigned int)Status);
  if ( Status < 0 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(32LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context, (unsigned int)IoStatus->Status);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxq(
        (_DWORD)DeviceObject,
        (unsigned int)&QueryPowerComplete,
        (_DWORD)Context + 4040,
        (_DWORD)Context + 4040,
        *((_DWORD *)Context + 1022),
        *((_QWORD *)Context + 507),
        IoStatus->Status);
  }
  v7 = (_IRP *)*((_QWORD *)Context + 97);
  v7->IoStatus.Status = Status;
  IofCompleteRequest(v7, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(Context + 4152), v7, 0x20u);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(33LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, Context);
}
