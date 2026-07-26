/*
 * XREFs of ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011DBAC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D9AC (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zqq @ 0x1C0027418 (WPP_RECORDER_SF_Zqq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C01270D8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindEachProtocolOpenOnMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  struct _NDIS_OPEN_BLOCK *v4; // rdi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  int v6; // edx
  int v7; // edx

  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  while ( a2->BindState.m_bindContext.m_numElements )
  {
    v4 = (struct _NDIS_OPEN_BLOCK *)*a2->BindState.m_bindContext._p;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    Ndis::BindState::RemoveBindContext(&a2->BindState, v4);
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        0x1Cu,
        0x10u,
        (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
        &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
        (char)a2->BindState.Miniport,
        v4);
    ndisUnbindProtocolOpen(a1, v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        0x1Cu,
        0x11u,
        (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
        &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
        (char)a2->BindState.Miniport,
        v4);
  }
}
