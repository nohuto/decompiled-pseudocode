/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00C080C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016E30 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0017504 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ??A?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAAAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@_K@Z @ 0x1C001A554 (--A-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wis.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001A728 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisMBeginNormalMode @ 0x1C0025AD4 (ndisMBeginNormalMode.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x1C00B3944 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C00B413C (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ??1KLockThisExclusive@@QEAA@XZ @ 0x1C00B41A8 (--1KLockThisExclusive@@QEAA@XZ.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BA2C0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BA894 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BAD28 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BE800 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF4C4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00C0918 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00C11C4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00C2ACC (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3090 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C34A0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C3658 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00CE7D0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00CF8F8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDE60 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FDF44 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  char v1; // di
  _NDIS_MINIPORT_BLOCK *m_miniport; // r14
  _NDIS_MINIPORT_BLOCK *v4; // r14
  unsigned __int64 v5; // rbx
  __int64 m_numElements; // r15
  NDIS_BIND_PROTOCOL_LINK *Myptr; // rcx
  _NDIS_MINIPORT_BLOCK *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  _NDIS_MINIPORT_BLOCK *v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rbx
  Ndis::BindState *p_BindState; // rcx
  NDIS_BIND_LINK_BASE *m_currentOperation; // r13
  _NDIS_MINIPORT_BLOCK *v18; // r12
  _NDIS_MINIPORT_BLOCK *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rax
  NDIS_BIND_LINK_BASE *v22; // rcx
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  NDIS_BIND_LINK_BASE *v25; // rcx
  __int64 v26; // r15
  unsigned __int64 i; // r14
  Ndis::BindState *v28; // rcx
  NDIS_BIND_LINK_BASE *v29; // rcx
  struct _NDIS_MINIPORT_BLOCK *v30; // rcx
  struct _NDIS_MINIPORT_BLOCK *v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  _NDIS_MINIPORT_BLOCK *v35; // r14
  unsigned __int64 v36; // rbx
  __int64 v37; // r12
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v38; // r15
  NDIS_BIND_PROTOCOL_LINK *v39; // rax
  NDIS_BIND_PROTOCOL_LINK *v40; // rax
  KLockHolder v42; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C8h]
  struct NDIS_RESTART_INFORMATION v44; // [rsp+48h] [rbp-C0h] BYREF

  v1 = 0;
  *(_QWORD *)&v44.FilterInstanceBuffer.m_bufferSize = 0LL;
  v44.FilterInstanceBuffer._p = 0LL;
  memset(&v44, 0, 104);
  memset(&v44.RssCaps, 0, sizeof(v44.RssCaps));
  memset(&v44.ProtocolParameters, 0, 60);
  v42.m_State = Unlocked;
  v42.m_Region.m_Entered = 0;
  v42.m_Lock = &this->m_lock;
  KLockHolder::AcquireExclusive(&v42);
  this->m_isDirty = 0;
  KLockHolder::ReleaseExclusive(&v42);
  m_miniport = this->m_miniport;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode((__int64)this->m_miniport);
    Ndis::BindEngine::BeginPolicyUpdates(&m_miniport->BindEngine);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine);
  }
  KLockHolder::AcquireExclusive(&v42);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
    goto LABEL_81;
  v4 = this->m_miniport;
  v5 = 0LL;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v5 != m_numElements )
  {
    if ( v5 >= v4->Bindings.Protocols.m_numElements )
LABEL_79:
      __fastfail(5u);
    Myptr = v4->Bindings.Protocols._p[v5]._Myptr;
    if ( Myptr->BindState.PretendBindingActive || Myptr->BindState.m_bindContext.m_numElements )
    {
      if ( Myptr->BindState.m_pauseReasons )
      {
        if ( Myptr->BindState.m_actualPauseState == DatapathRunning )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)Myptr;
          KLockHolder::ReleaseExclusive(&v42);
          ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v42);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_81;
        }
      }
    }
    ++v5;
  }
  v8 = this->m_miniport;
  v9 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    while ( 1 )
    {
      v10 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              (__int64)&this->m_miniport->Bindings.Filters,
              --v9);
      v11 = *(_QWORD *)v10;
      if ( *(_BYTE *)(*(_QWORD *)v10 + 9LL) || *(_DWORD *)(v11 + 52) )
      {
        if ( *(_DWORD *)(v11 + 36) )
        {
          if ( *(_DWORD *)(v11 + 40) == 1 )
          {
            this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v11;
            KLockHolder::ReleaseExclusive(&v42);
            ndisPauseFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
            KLockHolder::AcquireExclusive(&v42);
            this->m_currentOperation = 0LL;
            Ndis::BindEngine::ApplyRules(this);
            if ( this->m_isDirty )
              goto LABEL_81;
          }
        }
      }
      if ( !v9 )
      {
        v8 = this->m_miniport;
        break;
      }
    }
  }
  v12 = v8;
  if ( v8->Bindings.Miniport.m_pauseReasons && v8->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v42);
    ndisMPauseMiniport(this->m_miniport);
    KLockHolder::AcquireExclusive(&v42);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_81;
    v12 = this->m_miniport;
  }
  v13 = v12->Bindings.Protocols.m_numElements;
  v14 = 0LL;
  v43 = v13;
  while ( v14 != v13 )
  {
    if ( v14 >= v12->Bindings.Protocols.m_numElements )
      goto LABEL_79;
    p = v12->Bindings.Protocols._p;
    p_BindState = &p[v14]._Myptr->BindState;
    if ( p_BindState->m_unbindReasons && (p_BindState->PretendBindingActive || p_BindState->m_bindContext.m_numElements) )
    {
      if ( Ndis::BindState::SetSource(p_BindState, RemoveBindSource, UnsolicitedOpen)
        && (unsigned __int8)byte_1C00A026B >= 4u )
      {
        WPP_SF_Zq(
          0xAu,
          &WPP_55d1641151203881ffb9d8d33059db94_Traceguids,
          &p[v14]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          p[v14]._Myptr->BindState.Miniport);
      }
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)p[v14];
      KLockHolder::ReleaseExclusive(&v42);
      m_currentOperation = this->m_currentOperation;
      v18 = this->m_miniport;
      if ( *((_BYTE *)m_currentOperation[1].BindState.Miniport->Reserved4.Buffer + 56) < 6u )
      {
        Ndis::BindEngine::BeginPolicyUpdates(&v18->BindEngine);
        m_currentOperation->BindState.m_actualPauseState = DatapathPaused;
        Ndis::BindEngine::EndPolicyUpdates(&v18->BindEngine);
      }
      m_currentOperation->BindState.PretendBindingActive = 0;
      ndisUnbindEachProtocolOpenOnMiniport(v18, (struct NDIS_BIND_PROTOCOL_LINK *)m_currentOperation);
      KLockHolder::AcquireExclusive(&v42);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_81;
    }
    v13 = v43;
    ++v14;
  }
  v19 = this->m_miniport;
  v20 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    while ( 1 )
    {
      v21 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              (__int64)&this->m_miniport->Bindings.Filters,
              --v20);
      v22 = *(NDIS_BIND_LINK_BASE **)v21;
      if ( *(_DWORD *)(*(_QWORD *)v21 + 32LL) )
      {
        if ( v22->BindState.PretendBindingActive || v22->BindState.m_bindContext.m_numElements )
        {
          this->m_currentOperation = v22;
          KLockHolder::ReleaseExclusive(&v42);
          ndisDetachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v42);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_81;
        }
      }
      if ( !v20 )
      {
        v19 = this->m_miniport;
        break;
      }
    }
  }
  v23 = 0LL;
  if ( v19->Bindings.Filters.m_numElements )
  {
    do
    {
      v24 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              (__int64)&v19->Bindings.Filters,
              v23);
      v25 = *(NDIS_BIND_LINK_BASE **)v24;
      if ( !*(_DWORD *)(*(_QWORD *)v24 + 32LL)
        && !v25->BindState.PretendBindingActive
        && !v25->BindState.m_bindContext.m_numElements )
      {
        this->m_currentOperation = v25;
        KLockHolder::ReleaseExclusive(&v42);
        ndisAttachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
        KLockHolder::AcquireExclusive(&v42);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_81;
      }
      v19 = this->m_miniport;
    }
    while ( ++v23 < this->m_miniport->Bindings.Filters.m_numElements );
  }
  v26 = v19->Bindings.Protocols.m_numElements;
  for ( i = 0LL; i != v26; ++i )
  {
    if ( i >= v19->Bindings.Protocols.m_numElements )
      goto LABEL_79;
    v28 = &v19->Bindings.Protocols._p[i]._Myptr->BindState;
    if ( !v28->m_unbindReasons && Ndis::BindState::GetActualBindingState(v28) == BindingDisabled )
    {
      this->m_currentOperation = v29;
      KLockHolder::ReleaseExclusive(&v42);
      ndisBindProtocol(this->m_miniport, &this->m_currentOperation->BindState);
      KLockHolder::AcquireExclusive(&v42);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_81;
    }
  }
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  v30 = this->m_miniport;
  if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
    && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathPaused )
  {
    KLockHolder::ReleaseExclusive(&v42);
    ndisMRestartMiniport(this->m_miniport, &v44);
    KLockHolder::AcquireExclusive(&v42);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( !this->m_isDirty )
    {
      v30 = this->m_miniport;
      goto LABEL_63;
    }
LABEL_81:
    v1 = 1;
    goto LABEL_82;
  }
LABEL_63:
  ndisPostProcessRestartParametersAfterMiniport(v30, &v44);
  v31 = this->m_miniport;
  v32 = 0LL;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    do
    {
      v33 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              (__int64)&v31->Bindings.Filters,
              v32);
      v34 = *(_QWORD *)v33;
      if ( (*(_BYTE *)(*(_QWORD *)v33 + 9LL) || *(_DWORD *)(v34 + 52))
        && !*(_DWORD *)(v34 + 36)
        && !*(_DWORD *)(v34 + 40) )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v34;
        KLockHolder::ReleaseExclusive(&v42);
        ndisRestartFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation, &v44);
        KLockHolder::AcquireExclusive(&v42);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_81;
      }
      v31 = this->m_miniport;
    }
    while ( ++v32 < this->m_miniport->Bindings.Filters.m_numElements );
  }
  ndisPostProcessRestartParametersAfterFilters(v31, &v44);
  v35 = this->m_miniport;
  v36 = 0LL;
  v37 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v36 != v37 )
  {
    if ( v36 >= v35->Bindings.Protocols.m_numElements )
      goto LABEL_79;
    v38 = v35->Bindings.Protocols._p;
    v39 = v38[v36]._Myptr;
    if ( (v39->BindState.PretendBindingActive || v39->BindState.m_bindContext.m_numElements)
      && !v39->BindState.m_pauseReasons
      && v39->BindState.m_actualPauseState == DatapathPaused )
    {
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v39;
      KLockHolder::ReleaseExclusive(&v42);
      ndisRestartProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation, &v44);
      KLockHolder::AcquireExclusive(&v42);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_81;
    }
    v40 = v38[v36++]._Myptr;
    v40->BindState.m_AdditionalContext = 0LL;
  }
  ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v44);
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&this->m_miniport->MiniportOwner);
  Ndis::BindStack::GarbageCollectDeadBindings(&this->m_miniport->Bindings);
  KLockHolder::ReleaseExclusive(&v42);
LABEL_82:
  KLockThisExclusive::~KLockThisExclusive((KLockThisExclusive *)&v42);
  NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v44);
  return v1;
}
