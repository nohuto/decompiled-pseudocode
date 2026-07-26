/*
 * XREFs of ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C00BD9B8
 * Callers:
 *     ndisWdfNotifyDevicePower @ 0x1C00A7114 (ndisWdfNotifyDevicePower.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00BCDBC (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00BA8C0 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00BD598 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00BD8B8 (-ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

__int64 __fastcall ndisWdfRequestNicActive(
        struct _NDIS_MINIPORT_BLOCK *a1,
        enum CallRunMode a2,
        enum _NDIS_TMP_REF_REASON a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  int v7; // edx
  KIRQL v8; // di
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  unsigned int v10; // edi
  __int64 v12; // rdx
  bool v13; // cf
  __int64 v14; // rdx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // ebx

  AoAc = a1->AoAc;
  KeWaitForSingleObject(&AoAc->NicQuietCheckCompleteEvent, Executive, 0, 0, 0LL);
  ndisUpdateMiniportCsTrafficStatistics(a1, 2);
  v8 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ActiveState = AoAc->ActiveState;
  if ( (unsigned int)(ActiveState - 1) > 1 )
  {
    if ( ActiveState == NdisNicError )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          14,
          17,
          (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
          (char)a1);
      }
      KeReleaseSpinLock(&AoAc->Lock, v8);
      return (unsigned int)-1073741823;
    }
    KeReleaseSpinLock(&AoAc->Lock, v8);
    v10 = 259;
LABEL_7:
    if ( a2 == RunSynchronous )
    {
      KeWaitForSingleObject(&AoAc->WdfAoAcDisengagedEvent, Executive, 0, 0, 0LL);
      return 0;
    }
    return v10;
  }
  KeClearEvent(&AoAc->WdfAoAcDisengagedEvent);
  if ( AoAc->ActiveState == NdisNicQuiet )
    ++AoAc->CsPowerTransitions;
  v12 = MEMORY[0xFFFFF78000000008];
  v13 = AoAc->IsInCsResiliency != 0;
  AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
  AoAc->CurrentCsResiliencyStartTime = v12 & -(__int64)v13;
  if ( a3 == NdisAoAcTempRefWake )
  {
    AoAc->TempRefReason = NdisAoAcTempRefWake;
    AoAc->LastWakeTime.QuadPart = MEMORY[0xFFFFF78000000014];
    AoAc->TakeWakeToRefTime = 1;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
  }
  AoAc->ActiveState = NdisNicResuming;
  KeReleaseSpinLock(&AoAc->Lock, v8);
  LOBYTE(v14) = a2 == RunSynchronous;
  v15 = a1->DriverHandle->CxBlock->Chars.EvtCxPowerAoAcDisengage(a1->MiniportAdapterContext, v14);
  v10 = v15;
  if ( v15 >= 0 )
  {
    if ( v15 == 259 )
      goto LABEL_7;
    v17 = v15;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        15,
        16,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        (char)a1,
        v15);
    }
    v17 = -1073741823;
  }
  ndisWdfAoAcDisengageComplete(a1, v10);
  return v17;
}
