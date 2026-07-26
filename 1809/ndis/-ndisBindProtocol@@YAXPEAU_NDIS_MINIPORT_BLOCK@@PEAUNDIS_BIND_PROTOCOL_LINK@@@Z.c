/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF4C4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0061574 (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C007A538 (WPP_SF_ZqD.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BD9F0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00C0918 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00D1B28 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, Ndis::BindState *this)
{
  void *m_AdditionalContext; // r8
  _NDIS_PROTOCOL_BLOCK *v5; // r15
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r14d
  unsigned int m_pauseReasons; // r8d
  bool v10; // cf

  m_AdditionalContext = this[1].m_AdditionalContext;
  v5 = (_NDIS_PROTOCOL_BLOCK *)*((_QWORD *)m_AdditionalContext + 5);
  if ( v5->MajorNdisVersion < 6u )
  {
    if ( (unsigned __int8)byte_1C00A026B >= 4u )
      WPP_SF_Zq(
        0x20u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        *((const wchar_t **)m_AdditionalContext + 3),
        this->Miniport);
    this->PretendBindingActive = 1;
    v8 = 0;
  }
  else
  {
    *((_BYTE *)m_AdditionalContext + 1) = 1;
    if ( (unsigned __int8)byte_1C00A026B >= 4u )
      WPP_SF_Zq(
        0x1Eu,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        *((const wchar_t **)this[1].m_AdditionalContext + 3),
        this->Miniport);
    v6 = ndisBindNdis6Protocol(a1, v5);
    v8 = v6;
    if ( (unsigned __int8)byte_1C00A026B >= 4u )
      WPP_SF_ZqD(0x1Fu, v7, *((const wchar_t **)this[1].m_AdditionalContext + 3), this->Miniport, v6);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v8 )
  {
    Rtl::KArray<void *,1>::resize(&this->m_bindContext);
    this->m_LastErrorCode = v8;
    if ( Ndis::BindState::SetBinding(this, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      WPP_SF_DZq(
        0x21u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        v8,
        *((const wchar_t **)this[1].m_AdditionalContext + 3),
        this->Miniport);
    }
    if ( Ndis::BindState::SetSource(this, RemoveBindSource, UnsolicitedOpen) && (unsigned __int8)byte_1C00A026B >= 4u )
      WPP_SF_Zq(
        0x22u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        *((const wchar_t **)this[1].m_AdditionalContext + 3),
        this->Miniport);
  }
  else if ( v5->MajorNdisVersion < 6u )
  {
    if ( Ndis::BindState::SetPause(this, DatapathRunning, PauseReason_InitialPause)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      WPP_SF_Zq(
        0x24u,
        &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
        *((const wchar_t **)this[1].m_AdditionalContext + 3),
        this->Miniport);
    }
  }
  else
  {
    m_pauseReasons = this->m_pauseReasons;
    this->m_pauseReasons = m_pauseReasons & 0xFFFFFFFE;
    if ( (m_pauseReasons != 0) != ((m_pauseReasons & 0xFFFFFFFE) != 0) || !this->Miniport )
    {
      if ( (unsigned __int8)byte_1C00A026B >= 5u )
        WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_pauseReasons, m_pauseReasons & 0xFFFFFFFE);
      v10 = (unsigned __int8)byte_1C00A026B < 4u;
      this->Miniport->BindEngine.m_isDirty = 1;
      if ( !v10 )
        WPP_SF_Zq(
          0x23u,
          &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
          *((const wchar_t **)this[1].m_AdditionalContext + 3),
          this->Miniport);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
