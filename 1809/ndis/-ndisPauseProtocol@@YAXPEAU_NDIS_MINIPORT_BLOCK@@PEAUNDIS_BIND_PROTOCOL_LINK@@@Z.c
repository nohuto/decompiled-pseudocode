/*
 * XREFs of ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BAD28
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_Zqq @ 0x1C004F8BC (WPP_SF_Zqq.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00BADF4 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDE60 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 */

void __fastcall ndisPauseProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  __int64 m_numElements; // r14
  unsigned __int64 i; // rdi
  void **p; // rax
  struct _NDIS_OPEN_BLOCK *v7; // rbp

  if ( a2->BindDriver._p->_t.RunningDriver->MajorNdisVersion < 6u )
  {
    ndisUnbindEachProtocolOpenOnMiniport(a1, a2);
  }
  else
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    for ( i = 0LL; i != m_numElements; ++i )
    {
      if ( i >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(5u);
      p = a2->BindState.m_bindContext._p;
      v7 = (struct _NDIS_OPEN_BLOCK *)p[i];
      if ( (unsigned __int8)byte_1C00A026B >= 4u )
        WPP_SF_Zqq(
          0x12u,
          &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          p[i]);
      ndisPauseProtocolInner(v7, (unsigned int)a2);
      if ( (unsigned __int8)byte_1C00A026B >= 4u )
        WPP_SF_Zqq(
          0x13u,
          &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          v7);
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
