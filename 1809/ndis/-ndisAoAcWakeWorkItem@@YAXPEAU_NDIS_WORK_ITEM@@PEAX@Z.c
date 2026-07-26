/*
 * XREFs of ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00777D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0011040 (ndisRequestDevicePowerD0.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     ndisCancelIdleRequestSync @ 0x1C00747D0 (ndisCancelIdleRequestSync.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0076AF4 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00794A8 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007E874 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
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
  int v10; // eax
  int v11; // esi
  _NDIS_MINIPORT_AOAC *v12; // rbx

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
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(0x25u, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, (__int64)a2, AoAc->ActiveRef);
    KeReleaseSpinLock(&AoAc->Lock, v6);
    v10 = ndisRequestDevicePowerD0((__int64)a2, AoAc->WakeWorkItemWakeReason);
    v11 = v10;
    if ( v10 != 259 )
    {
      v12 = a2->AoAc;
      NdisTraceLoggingUnexpectedAoAcError(a2, 0x877u, v10);
      v12->LastUnexpectedFailureLine[1] = v12->LastUnexpectedFailureLine[0];
      v12->LastUnexpectedFailureLine[0] = 2167;
      if ( (unsigned __int8)byte_1C00A025D >= 2u )
        WPP_SF_dq(0x26u, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, v11, a2);
    }
  }
  else
  {
    KeReleaseSpinLock(&AoAc->Lock, v4);
  }
  ndisDereferenceMiniport((__int64)a2, 4u);
}
