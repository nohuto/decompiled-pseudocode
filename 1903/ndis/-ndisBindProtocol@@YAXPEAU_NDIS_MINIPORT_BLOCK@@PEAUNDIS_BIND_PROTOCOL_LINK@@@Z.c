/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0104448
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_ZqD @ 0x1C002855C (WPP_RECORDER_SF_ZqD.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF_LZq @ 0x1C0098CD4 (WPP_RECORDER_SF_LZq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C010B5D4 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  int v3; // r15d
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // rdx
  struct _NDIS_PROTOCOL_BLOCK *RunningDriver; // r12
  __int64 v7; // r8
  unsigned int m_pauseReasons; // r8d
  Rtl::KString *value; // rdx
  bool v10; // cf
  int v11; // r8d
  _NDIS_MINIPORT_BLOCK *v12; // rcx
  unsigned __int16 v13; // r9
  int v14; // [rsp+20h] [rbp-38h]
  _NDIS_MINIPORT_BLOCK *Miniport; // [rsp+30h] [rbp-28h]

  v3 = 0;
  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p,
        0x1Cu,
        0x20u,
        (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
        &p->_t.Name.__ptr_.__value_->Length,
        a2->BindState.Miniport);
    a2->BindState.PretendBindingActive = 1;
  }
  else
  {
    p->_t.NeedsBindCompleteEvent = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Zq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)p,
        0x1Cu,
        0x1Eu,
        (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
        &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
        a2->BindState.Miniport);
    v3 = ndisBindNdis6Protocol(a1, RunningDriver);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Miniport = a2->BindState.Miniport;
      WPP_RECORDER_SF_ZqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)a2->BindDriver._p,
        v7,
        0x1Fu,
        v14,
        &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length);
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v3 )
  {
    Rtl::KArray<void *,1>::resize(&a2->BindState.m_bindContext);
    a2->BindState.m_LastErrorCode = v3;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C00E673B >= 4u
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_LZq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2->BindDriver._p->_t.Name.__ptr_.__value_,
        v11,
        0x21u,
        (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
        v3,
        &a2->BindDriver._p->_t.Name.__ptr_.__value_->Length,
        a2->BindState.Miniport);
    }
    if ( Ndis::BindState::SetSource(&a2->BindState, RemoveBindSource, UnsolicitedOpen)
      && (unsigned __int8)byte_1C00E673B >= 4u )
    {
      v12 = a2->BindState.Miniport;
      value = a2->BindDriver._p->_t.Name.__ptr_.__value_;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 34;
LABEL_34:
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)value,
          0x1Cu,
          v13,
          (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
          &value->Length,
          v12);
      }
    }
  }
  else if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( Ndis::BindState::SetPause(&a2->BindState, DatapathRunning, PauseReason_InitialPause)
      && (unsigned __int8)byte_1C00E673B >= 4u )
    {
      v12 = a2->BindState.Miniport;
      value = a2->BindDriver._p->_t.Name.__ptr_.__value_;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 36;
        goto LABEL_34;
      }
    }
  }
  else
  {
    m_pauseReasons = a2->BindState.m_pauseReasons;
    value = (Rtl::KString *)(m_pauseReasons & 0xFFFFFFFE);
    a2->BindState.m_pauseReasons = (unsigned int)value;
    if ( (m_pauseReasons != 0) != ((_DWORD)value != 0) || !a2->BindState.Miniport )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LODWORD(Miniport) = m_pauseReasons & 0xFFFFFFFE;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
          m_pauseReasons,
          Miniport);
      }
      v10 = (unsigned __int8)byte_1C00E673B < 4u;
      a2->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v10 )
      {
        v12 = a2->BindState.Miniport;
        value = a2->BindDriver._p->_t.Name.__ptr_.__value_;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 35;
          goto LABEL_34;
        }
      }
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, (struct _NDIS_MINIPORT_BLOCK *)value);
}
