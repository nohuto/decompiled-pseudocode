/*
 * XREFs of ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00776E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0076BF8 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00787C4 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C00793DC (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 */

void __fastcall ndisAoAcTempRefWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // al
  int v5; // r8d
  KIRQL v6; // si
  enum _NDIS_PM_WAKE_REASON_TYPE LastWakeReason; // edx

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
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(0x2Du, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, (__int64)a2, AoAc->ActiveRef);
  }
  AoAc->TempDerefInProgress = 0;
  KeReleaseSpinLock(&AoAc->Lock, v6);
  ndisNicQuietCheckRef(a2);
  ndisDereferenceMiniport((__int64)a2, 2u);
}
