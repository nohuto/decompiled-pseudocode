/*
 * XREFs of ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00BB590
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00BA9C4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC818 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C00BD4CC (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 */

void __fastcall ndisAoAcTempRefWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // al
  int v5; // r8d
  KIRQL v6; // si
  enum _NDIS_PM_WAKE_REASON_TYPE LastWakeReason; // edx
  int v8; // edx

  AoAc = a2->AoAc;
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v5 = 1;
  v6 = v4;
  if ( (AoAc->WakeFlags.Value & 2) == 0 )
  {
    LastWakeReason = a2->LastWakeReason;
    if ( LastWakeReason == NdisWakeReasonPacket && AoAc->LastWakePatternId == 131073 )
      LastWakeReason = 65533;
    ++AoAc->CsSpuriousWakes;
    ndisUpdateCsSpuriousWakeStats(AoAc, LastWakeReason);
    AoAc->WakeFlags.Value &= ~1u;
  }
  if ( AoAc->ComponentRefCounts[0] > 0 )
  {
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        14,
        47,
        (struct _GUID *)&WPP_a4d5aa3896e33b50761396b1dd7f9853_Traceguids,
        (char)a2,
        AoAc->ActiveRef);
    }
  }
  AoAc->TempDerefInProgress = 0;
  KeReleaseSpinLock(&AoAc->Lock, v6);
  ndisNicQuietCheckRef(a2);
  ndisDereferenceMiniport((__int64)a2, 2u);
}
