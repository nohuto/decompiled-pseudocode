/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C34A0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF_Zqq @ 0x1C004F8BC (WPP_SF_Zqq.c)
 *     WPP_SF_DZq @ 0x1C0061574 (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C007A538 (WPP_SF_ZqD.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00BE6A8 (ndisInitializeMiniportRestartAttributes.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00C0918 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00C33BC (ndisPnPNotifyBindingUnlocked.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00D1B28 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDA58 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  unsigned __int64 v3; // rsi
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r14
  __int64 m_numElements; // r13
  void **p; // rax
  __int64 v10; // r14
  KPushLock *p_m_lock; // r14
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r15d
  int v16; // [rsp+20h] [rbp-F8h]
  __int64 v17; // [rsp+30h] [rbp-E8h] BYREF
  int v18; // [rsp+38h] [rbp-E0h]
  _NDIS_PROTOCOL_RESTART_PARAMETERS *p_ProtocolParameters; // [rsp+40h] [rbp-D8h]
  int v20; // [rsp+48h] [rbp-D0h]

  v3 = 0LL;
  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a3);
  if ( RunningDriver->MajorNdisVersion >= 6u )
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    while ( v3 != m_numElements )
    {
      if ( v3 >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(5u);
      p = a2->BindState.m_bindContext._p;
      v10 = (__int64)p[v3];
      if ( (unsigned __int8)byte_1C00A026B >= 4u )
        WPP_SF_Zqq(
          0x14u,
          &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          p[v3]);
      ndisInitializeNetPnPEvent(&v17, 0LL);
      v18 = 9;
      p_ProtocolParameters = &a3->ProtocolParameters;
      v20 = 56;
      ndisPnPNotifyBindingUnlocked(v10, (__int64)&v17);
      if ( (unsigned __int8)byte_1C00A026B >= 4u )
        WPP_SF_Zqq(
          0x15u,
          &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
          &a2->BindDriver._p->_t.Name._Myptr->Length,
          a2->BindState.Miniport,
          v10);
      ++v3;
    }
    p_m_lock = &a1->BindEngine.m_lock;
LABEL_13:
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
    a2->BindState.m_actualPauseState = DatapathRunning;
    goto LABEL_14;
  }
  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  if ( (unsigned __int8)byte_1C00A026B >= 4u )
    WPP_SF_Zq(
      0x16u,
      &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
      &a2->BindDriver._p->_t.Name._Myptr->Length,
      a2->BindState.Miniport);
  v13 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
  v15 = v13;
  if ( (unsigned __int8)byte_1C00A026B >= 4u )
  {
    v16 = v13;
    WPP_SF_ZqD(0x17u, v14, &a2->BindDriver._p->_t.Name._Myptr->Length, a2->BindState.Miniport, v16);
  }
  p_m_lock = &a1->BindEngine.m_lock;
  if ( !v15 )
    goto LABEL_13;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  Rtl::KArray<void *,1>::resize(&a2->BindState.m_bindContext);
  a2->BindState.m_LastErrorCode = v15;
  if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    WPP_SF_DZq(
      0x18u,
      &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
      v15,
      &a2->BindDriver._p->_t.Name._Myptr->Length,
      a2->BindState.Miniport);
  }
  if ( Ndis::BindState::SetSource(&a2->BindState, RemoveBindSource, UnsolicitedOpen)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    WPP_SF_Zq(
      0x19u,
      &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
      &a2->BindDriver._p->_t.Name._Myptr->Length,
      a2->BindState.Miniport);
  }
LABEL_14:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v12);
}
