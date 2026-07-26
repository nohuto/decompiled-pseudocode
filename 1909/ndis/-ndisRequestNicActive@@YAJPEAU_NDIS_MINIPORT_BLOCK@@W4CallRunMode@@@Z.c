/*
 * XREFs of ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BCDBC
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00BB2E8 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00BC184 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ndisCancelIdleRequestSync @ 0x1C00B81B0 (ndisCancelIdleRequestSync.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00B93D0 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD598 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C00BD9B8 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3C58 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

__int64 __fastcall ndisRequestNicActive(struct _NDIS_MINIPORT_BLOCK *a1, enum CallRunMode a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned int v5; // esi
  KIRQL v6; // al
  KIRQL v8; // al
  KIRQL v9; // si
  __int64 v10; // r8
  bool v11; // cf
  int v12; // edx
  KIRQL v13; // si
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  _KEVENT *p_PowerD0CompleteEvent; // rbp
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // esi
  _NDIS_MINIPORT_AOAC *v19; // rbx

  AoAc = a1->AoAc;
  v5 = a1->Flags & 0x80;
  v6 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( AoAc->ActiveState == NdisNicActive )
  {
    KeReleaseSpinLock(&AoAc->Lock, v6);
    return 0LL;
  }
  KeReleaseSpinLock(&AoAc->Lock, v6);
  if ( v5 )
    return ndisWdfRequestNicActive(a1, a2, NdisAoAcTempRefNone);
  if ( a1->SelectiveSuspend && (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
  {
    KeWaitForSingleObject(&AoAc->NicQuietCheckCompleteEvent, Executive, 0, 0, 0LL);
    ndisCancelIdleRequestSync(a1, 7u, 0, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    v9 = v8;
    if ( !AoAc->SSIdleConfirmed )
    {
      AoAc->ActiveState = NdisNicActive;
      KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
      v10 = MEMORY[0xFFFFF78000000008];
      v11 = AoAc->IsInCsResiliency != 0;
      AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
      AoAc->CurrentCsResiliencyStartTime = v10 & -(__int64)v11;
      KeReleaseSpinLock(&AoAc->Lock, v9);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop((__int64)a1, 7);
      return 0LL;
    }
    KeReleaseSpinLock(&AoAc->Lock, v8);
  }
  KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficTotalDX);
  v13 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ActiveState = AoAc->ActiveState;
  if ( ActiveState == NdisNicQuiet )
  {
    if ( AoAc->DeviceGone )
    {
      KeReleaseSpinLock(&AoAc->Lock, v13);
      v18 = -1073741823;
    }
    else
    {
      AoAc->ActiveState = NdisNicResuming;
      ++AoAc->CsPowerTransitions;
      p_PowerD0CompleteEvent = &a1->PowerD0CompleteEvent;
      v16 = MEMORY[0xFFFFF78000000008];
      v11 = AoAc->IsInCsResiliency != 0;
      AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
      AoAc->CurrentCsResiliencyStartTime = v16 & -(__int64)v11;
      KeClearEvent(&a1->PowerD0CompleteEvent);
      KeReleaseSpinLock(&AoAc->Lock, v13);
      v17 = ndisRequestDevicePowerD0((__int64)a1, 6u);
      v18 = v17;
      if ( v17 == 259 )
        goto LABEL_26;
      v19 = a1->AoAc;
      NdisTraceLoggingUnexpectedAoAcError(a1, 1u, v17);
      v19->LastUnexpectedFailureLine[1] = v19->LastUnexpectedFailureLine[0];
      v19->LastUnexpectedFailureLine[0] = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x12u,
          (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
          v18,
          a1);
    }
  }
  else
  {
    if ( ActiveState == NdisNicError )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          14,
          19,
          (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
          (char)a1);
      }
      KeReleaseSpinLock(&AoAc->Lock, v13);
      return (unsigned int)-1073741823;
    }
    KeReleaseSpinLock(&AoAc->Lock, v13);
    v18 = 259;
  }
  if ( v18 == 259 )
  {
    p_PowerD0CompleteEvent = &a1->PowerD0CompleteEvent;
LABEL_26:
    if ( a2 == RunSynchronous )
    {
      KeWaitForSingleObject(p_PowerD0CompleteEvent, Executive, 0, 0, 0LL);
      return 0;
    }
  }
  return v18;
}
