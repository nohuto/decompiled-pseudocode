/*
 * XREFs of ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDE60
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BAD28 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_Zqq @ 0x1C004F8BC (WPP_SF_Zqq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C0106D7C (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C011A5A8 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindEachProtocolOpenOnMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  unsigned int i; // eax
  struct _NDIS_OPEN_BLOCK *v5; // rdi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx

  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  for ( i = a2->BindState.m_bindContext.m_numElements; i; i = a2->BindState.m_bindContext.m_numElements )
  {
    v5 = (struct _NDIS_OPEN_BLOCK *)*a2->BindState.m_bindContext._p;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    Ndis::BindState::RemoveBindContext(&a2->BindState, v5);
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v6);
    if ( (unsigned __int8)byte_1C00A026B >= 4u )
      WPP_SF_Zqq(
        0x10u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport,
        v5);
    ndisUnbindProtocolOpen(a1, v5);
    if ( (unsigned __int8)byte_1C00A026B >= 4u )
      WPP_SF_Zqq(
        0x11u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport,
        v5);
  }
}
