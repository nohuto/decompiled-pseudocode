/*
 * XREFs of ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BA894
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C010B084 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMPauseMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edx

  if ( (unsigned __int8)byte_1C00A026B >= 4u )
    WPP_SF_q(0xDu, &WPP_aa650bf7e9c83bc376b2e429d3f62e48_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  ndisMPauseMiniportInner(a1, v2);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A026B >= 4u )
    WPP_SF_q(0xEu, &WPP_aa650bf7e9c83bc376b2e429d3f62e48_Traceguids, (__int64)a1);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a1->Bindings.Miniport.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
