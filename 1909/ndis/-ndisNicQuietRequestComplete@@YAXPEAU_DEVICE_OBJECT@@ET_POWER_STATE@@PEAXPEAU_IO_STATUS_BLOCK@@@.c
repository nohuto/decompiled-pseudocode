/*
 * XREFs of ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00BCB00
 * Callers:
 *     ndisWdfNotifyDevicePower @ 0x1C00A7114 (ndisWdfNotifyDevicePower.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3C58 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisNicQuietRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _NDIS_MINIPORT_BLOCK *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  char v7; // bp
  int Status; // esi
  KIRQL v9; // r14
  __int64 v10; // rdx
  _NDIS_MINIPORT_AOAC *v11; // rbx

  AoAc = Context->AoAc;
  if ( (Context->Flags & 0x80u) == 0 )
  {
    v7 = 0;
    Status = IoStatus->Status;
  }
  else
  {
    v7 = 1;
    Status = 0;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&Context->AoAc->Lock);
  if ( v7 )
  {
    if ( AoAc->ActiveState == NdisNicSuspending )
      AoAc->ActiveState = NdisNicQuiet;
  }
  else
  {
    AoAc->ActiveState = ((Status >> 31) & 2) + 2;
    KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
  }
  if ( AoAc->CurrentCsResiliencyStartTime )
  {
    AoAc->TotalCsResiliencyTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentCsResiliencyStartTime;
    AoAc->CurrentCsResiliencyStartTime = 0LL;
  }
  KeReleaseSpinLock(&AoAc->Lock, v9);
  if ( Status >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        9u,
        0x2Au,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        (char)Context,
        &Context->pAdapterInstanceName->Length);
  }
  else
  {
    v11 = Context->AoAc;
    NdisTraceLoggingUnexpectedAoAcError(Context, 8u, Status);
    v11->LastUnexpectedFailureLine[1] = v11->LastUnexpectedFailureLine[0];
    v11->LastUnexpectedFailureLine[0] = 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x29u,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        Status,
        Context);
  }
}
