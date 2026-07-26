/*
 * XREFs of ?ndisNicQuietWaitWakeCallback@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00BCCB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCompleteWaitWake @ 0x1C0013B78 (ndisCompleteWaitWake.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00BB16C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

void __fastcall ndisNicQuietWaitWakeCallback(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  if ( IoStatus->Status >= 0 )
    ndisAoAcScheduleWakeWorkItem(Context, NdisMEventD0_AoAcWake);
  ndisCompleteWaitWake((__int64)Context);
}
