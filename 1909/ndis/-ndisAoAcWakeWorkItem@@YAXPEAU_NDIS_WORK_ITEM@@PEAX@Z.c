/*
 * XREFs of ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB6A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ndisCancelIdleRequestSync @ 0x1C00B81B0 (ndisCancelIdleRequestSync.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00BA8C0 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD598 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3C58 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisAoAcWakeWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // al
  bool v5; // zf
  KIRQL v6; // si
  _LARGE_INTEGER v7; // rax
  __int64 v8; // rdx
  bool v9; // cf
  int v10; // edx
  int v11; // eax
  char v12; // si
  _NDIS_MINIPORT_AOAC *v13; // rbx

  AoAc = a2->AoAc;
  if ( a2->SelectiveSuspend && (a2->PnPFlags & 0x60) == 0x60 && (unsigned int)(a2->DeviceCaps.DeviceWake - 2) <= 2 )
  {
    KeWaitForSingleObject(&AoAc->NicQuietCheckCompleteEvent, Executive, 0, 0, 0LL);
    ndisCancelIdleRequestSync(a2, 7u, 0, 0);
  }
  KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  ndisUpdateMiniportCsTrafficStatistics(a2, NdisCSTrafficTotalDX);
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v5 = AoAc->ActiveState == NdisNicQuiet;
  v6 = v4;
  AoAc->WakeWorkItemScheduled = 0;
  if ( v5 )
  {
    AoAc->ActiveState = NdisNicResuming;
    KeClearEvent(&a2->PowerD0CompleteEvent);
    AoAc->TempRefReason = NdisAoAcTempRefWake;
    v7.QuadPart = MEMORY[0xFFFFF78000000014];
    ++AoAc->CsPowerTransitions;
    AoAc->LastWakeTime = v7;
    AoAc->TakeWakeToRefTime = 1;
    v8 = MEMORY[0xFFFFF78000000008];
    v9 = AoAc->IsInCsResiliency != 0;
    AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
    v5 = AoAc->WakeWorkItemWakeReason == NdisMEventD0_AoAcSurpriseWake;
    AoAc->CurrentCsResiliencyStartTime = v8 & -(__int64)v9;
    if ( v5 )
      ++AoAc->CsSurpriseWakes;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        14,
        39,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        (char)a2,
        AoAc->ActiveRef);
    }
    KeReleaseSpinLock(&AoAc->Lock, v6);
    v11 = ndisRequestDevicePowerD0((__int64)a2, AoAc->WakeWorkItemWakeReason);
    v12 = v11;
    if ( v11 != 259 )
    {
      v13 = a2->AoAc;
      NdisTraceLoggingUnexpectedAoAcError(a2, 7u, v11);
      v13->LastUnexpectedFailureLine[1] = v13->LastUnexpectedFailureLine[0];
      v13->LastUnexpectedFailureLine[0] = 7;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x28u,
          (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
          v12,
          a2);
    }
  }
  else
  {
    KeReleaseSpinLock(&AoAc->Lock, v4);
  }
  ndisDereferenceMiniport((__int64)a2, 4u);
}
