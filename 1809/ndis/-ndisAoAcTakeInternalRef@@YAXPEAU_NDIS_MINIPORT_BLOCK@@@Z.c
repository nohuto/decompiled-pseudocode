/*
 * XREFs of ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0077668
 * Callers:
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCC00 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0076AF4 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 */

void __fastcall ndisAoAcTakeInternalRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v2; // al
  KIRQL v3; // bl

  AoAc = a1->AoAc;
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(0x1Du, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, (__int64)a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->TempRefReason = NdisAoAcTempRefInternal;
  v3 = v2;
  ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentInternal);
  KeReleaseSpinLock(&AoAc->Lock, v3);
}
