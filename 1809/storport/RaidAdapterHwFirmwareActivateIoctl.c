/*
 * XREFs of RaidAdapterHwFirmwareActivateIoctl @ 0x1C0037F70
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0003014 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000DE48 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0045014 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     StorLogIoError @ 0x1C00463C4 (StorLogIoError.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareActivateIoctl(_QWORD *a1, IRP *a2)
{
  PVOID v2; // rbx
  signed int v5; // edi
  ULONG v7; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v7 = 0;
  P = 0LL;
  if ( a1[68] && a1[69] )
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x10 )
    {
      v5 = -1073741820;
      goto LABEL_13;
    }
    RaBuildHwFirmwareActivateBufferForMiniport(a1[1], a2, &P, &v7);
    v2 = P;
    if ( !P )
    {
      v5 = -1073741801;
      goto LABEL_13;
    }
    v5 = RaidAdapterSendSrbIoControlSynchronously(
           (__int64)a1,
           a2,
           (unsigned int *)P,
           v7,
           (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
           1,
           128);
  }
  else
  {
    v5 = -1073741823;
  }
  if ( v5 >= 0 )
    StorLogIoError(a1, 0LL, 1074004128LL, 5LL);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72536152u);
LABEL_13:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v5);
}
