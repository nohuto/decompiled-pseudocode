/*
 * XREFs of ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC818
 * Callers:
 *     ?ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0019840 (-ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB590 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     ndisSelectiveSuspendStop @ 0x1C00B9798 (ndisSelectiveSuspendStop.c)
 *     ndisSubmitIdleRequest @ 0x1C00BA044 (ndisSubmitIdleRequest.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BAF70 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C00BD4CC (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BDC0C (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00C3C58 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C011D074 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisNicQuietCheckRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  unsigned int v3; // ebx
  KIRQL v4; // bp
  KSPIN_LOCK *v5; // rcx
  unsigned int v6; // eax
  KIRQL v7; // al
  __int64 v8; // r8
  unsigned int v9; // r9d
  int v10; // eax
  char v11; // bp
  unsigned int v12; // esi
  _NDIS_MINIPORT_AOAC *v13; // rbx
  KIRQL v14; // al
  KIRQL v15; // bl

  AoAc = a1->AoAc;
  v3 = a1->Flags & 0x80;
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( !ndisAoAcIsD0Required(AoAc) && AoAc->ActiveState == NdisNicActive )
  {
    AoAc->ActiveState = NdisNicSuspending;
    KeClearEvent(&AoAc->PowerSuspendCompleteEvent);
    KeClearEvent(&AoAc->NicQuietCheckCompleteEvent);
    if ( AoAc->CurrentActiveStartTime )
    {
      AoAc->TotalCsActiveTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentActiveStartTime;
      AoAc->CurrentActiveStartTime = 0LL;
    }
    if ( (AoAc->WakeFlags.Value & 1) != 0 && a1->LastWakeReason == 65534 )
    {
      ++AoAc->CsSpuriousWakes;
      ndisUpdateCsSpuriousWakeStats(AoAc, (enum _NDIS_PM_WAKE_REASON_TYPE)65534);
    }
    AoAc->WakeFlags.Value = 0;
    AoAc->LastWakePatternId = 0;
    KeReleaseSpinLock(&AoAc->Lock, v4);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendStop(a1, 7);
    if ( v3 )
    {
      v6 = ndisWdfRequestNicQuiet(a1);
    }
    else
    {
      if ( a1->SelectiveSuspend && (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
        AoAc->SSIdleConfirmed = 0;
        KeReleaseSpinLock(&AoAc->Lock, v7);
        v10 = ndisSubmitIdleRequest((__int64)a1, 1u, v8, v9);
        v11 = v10;
        if ( v10 != 259 )
        {
          v13 = a1->AoAc;
          NdisTraceLoggingUnexpectedAoAcError(a1, 3u, 0);
          v13->LastUnexpectedFailureLine[1] = v13->LastUnexpectedFailureLine[0];
          v13->LastUnexpectedFailureLine[0] = 3;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x1Au,
              (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
              v11,
              a1);
          v12 = -1073741823;
          goto LABEL_22;
        }
        v12 = 0;
LABEL_23:
        KeSetEvent(&AoAc->NicQuietCheckCompleteEvent, 0, 0);
        return v12;
      }
      v6 = ndisRequestNicQuiet(a1, 0);
    }
    v12 = v6;
    if ( v6 )
    {
LABEL_22:
      v14 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
      AoAc->ActiveState = NdisNicError;
      v15 = v14;
      KeSetEvent(&AoAc->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&AoAc->Lock, v15);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  if ( (unsigned int)(AoAc->ActiveState - 1) <= 1 && AoAc->CurrentCsResiliencyStartTime )
  {
    AoAc->TotalCsResiliencyTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentCsResiliencyStartTime;
    AoAc->CurrentCsResiliencyStartTime = 0LL;
  }
  KeReleaseSpinLock(v5, v4);
  return 0LL;
}
