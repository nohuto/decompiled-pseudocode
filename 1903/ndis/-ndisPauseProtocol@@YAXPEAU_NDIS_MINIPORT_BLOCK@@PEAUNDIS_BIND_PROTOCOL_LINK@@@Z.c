/*
 * XREFs of ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D9AC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_Zqq @ 0x1C0027428 (WPP_RECORDER_SF_Zqq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C011DB0C (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011DBAC (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 */

void __fastcall ndisPauseProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  __int64 m_numElements; // r14
  unsigned __int64 i; // rdi
  struct _NDIS_OPEN_BLOCK *v6; // rbp
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx

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
      v6 = (struct _NDIS_OPEN_BLOCK *)a2->BindState.m_bindContext._p[i];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          0x1Cu,
          0x12u,
          (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
          &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          (char)a2->BindState.Miniport,
          v6);
      ndisPauseProtocolInner(v6, (unsigned int)a2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zqq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)a2,
          0x1Cu,
          0x13u,
          (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
          &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          (char)a2->BindState.Miniport,
          v6);
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v7);
}
