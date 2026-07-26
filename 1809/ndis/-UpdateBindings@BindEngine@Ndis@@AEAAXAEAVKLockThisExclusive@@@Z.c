/*
 * XREFs of ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00C080C
 * Callers:
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C00C324C (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00D0F70 (-UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C600 (ndisCancelMediaDisconnectTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0025324 (ndisSetMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0075888 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C0075C38 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0076CF4 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0077498 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B8340 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00BF620 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C35D4 (-TryAcquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNE.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindings(Ndis::BindEngine *this, struct KLockThisExclusive *a2)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rdi
  char v5; // bp
  _NDIS_MINIPORT_BLOCK *v6; // rdi
  bool v7; // zf

  if ( (unsigned __int8)byte_1C00A026B >= 5u )
    WPP_SF_q(0xBu, &WPP_55d1641151203881ffb9d8d33059db94_Traceguids, (__int64)this->m_miniport);
  do
  {
    KLockHolder::ReleaseExclusive(a2);
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    m_miniport = this->m_miniport;
    v5 = 0;
    ndisCancelMediaDisconnectTimer((__int64)this->m_miniport);
    if ( m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendStop(m_miniport, 8);
    if ( !(unsigned __int8)Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire(
                             &m_miniport->MiniportOwner,
                             2LL) )
    {
      v7 = m_miniport->AoAc == 0LL;
      v5 = 1;
      m_miniport->PmInterruptedByPnp = 1;
      if ( !v7 )
        ndisAoAcStop(m_miniport, 8, RunAsynchronous);
      if ( !m_miniport->DoNotBlockOnMiniportLock )
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire((__int64)&m_miniport->MiniportOwner, 2u);
    }
    while ( Ndis::BindEngine::Iterate(this) )
      ;
    v6 = this->m_miniport;
    if ( this->m_miniport->MediaConnectState == MediaConnectStateDisconnected )
      ndisSetMediaDisconnectTimer((__int64)this->m_miniport);
    if ( v6->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)v6, 8);
    if ( v5 )
    {
      v7 = v6->AoAc == 0LL;
      v6->PmInterruptedByPnp = 0;
      if ( !v7 )
        ndisAoAcClearStop(v6, NdisSSPnPOp);
    }
    Ndis::BindEngine::EndBindOperation();
    KLockHolder::AcquireExclusive(a2);
  }
  while ( this->m_isDirty );
  this->m_bindThread = 0LL;
  KeSetEvent(&this->m_bindCompleteEvent.m_event, 0, 0);
  if ( (unsigned __int8)byte_1C00A026B >= 5u )
    WPP_SF_q(0xCu, &WPP_55d1641151203881ffb9d8d33059db94_Traceguids, (__int64)this->m_miniport);
}
