/*
 * XREFs of NdisMIdleNotificationCompleteEx @ 0x1C0073C90
 * Callers:
 *     NdisMIdleNotificationComplete @ 0x1C0073C70 (NdisMIdleNotificationComplete.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisRequestPowerResume @ 0x1C0075358 (ndisRequestPowerResume.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C0075A74 (ndisSelectiveSuspendResumeOperations.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0077340 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

void __fastcall NdisMIdleNotificationCompleteEx(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  KIRQL v5; // si
  unsigned int Value; // eax

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  ndisLogMiniportEvent((__int64)a1, 0x11u);
  if ( (unsigned __int8)byte_1C00A025E >= 4u )
    WPP_SF_qD(0x1Bu, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)a1, a2);
  SelectiveSuspend->Flags.Value &= ~4u;
  KeSetEvent(&SelectiveSuspend->IdleNotificationCompleteEvent, 0, 0);
  SelectiveSuspend->Flags.Value &= ~0x80u;
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x100) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    if ( a2 >= 0 && a1->CurrentDevicePowerState == PowerDeviceD3 )
      ndisAoAcScheduleWakeWorkItem(a1, NdisMEventD0_AoAcSurpriseWake);
  }
  else if ( (Value & 0x10) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisRequestPowerResume(a1);
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisSelectiveSuspendResumeOperations(a1, 0LL);
  }
  ndisDereferenceMiniport((__int64)a1, 0x15u);
}
