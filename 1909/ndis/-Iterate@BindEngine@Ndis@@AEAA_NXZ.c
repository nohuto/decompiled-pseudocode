/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C0103B94
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0103A54 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??A?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAAAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@_K@Z @ 0x1C001A4EC (--A-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wis.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0026F94 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0027124 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0028760 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisMBeginNormalMode @ 0x1C003F130 (ndisMBeginNormalMode.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x1C00F9838 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C00FC408 (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ??1KLockThisExclusive@@QEAA@XZ @ 0x1C00FC468 (--1KLockThisExclusive@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FD0B0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C01042A0 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01042E0 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0104448 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0104620 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01056FC (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010680C (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010A050 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BB80 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010BD5C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D9AC (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011DBAC (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C011DCE8 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  char v1; // di
  _NDIS_MINIPORT_BLOCK *m_miniport; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx
  _NDIS_MINIPORT_BLOCK *v5; // r14
  unsigned __int64 v6; // rbx
  __int64 m_numElements; // r15
  NDIS_BIND_PROTOCOL_LINK *value; // rcx
  _NDIS_MINIPORT_BLOCK *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rbx
  Ndis::BindState *p_BindState; // rcx
  NDIS_BIND_LINK_BASE *m_currentOperation; // r13
  _NDIS_MINIPORT_BLOCK *v18; // r12
  struct _NDIS_MINIPORT_BLOCK *v19; // rdx
  _NDIS_MINIPORT_BLOCK *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  NDIS_BIND_LINK_BASE *v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  NDIS_BIND_LINK_BASE *v26; // rcx
  __int64 v27; // r15
  unsigned __int64 i; // r14
  NDIS_BIND_LINK_BASE *v29; // rcx
  _NDIS_MINIPORT_BLOCK *v30; // rcx
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
  KLockHolder v42; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h]
  struct NDIS_RESTART_INFORMATION v44; // [rsp+68h] [rbp-A0h] BYREF

  v1 = 0;
  *(_QWORD *)&v44.FilterInstanceBuffer.m_bufferSize = 0LL;
  v44.FilterInstanceBuffer._p = 0LL;
  memset(&v44, 0, 104);
  memset(&v44.RssCaps, 0, sizeof(v44.RssCaps));
  memset(&v44.ProtocolParameters, 0, 60);
  v42.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  v42.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v42.m_Lock, 0LL);
  v42.m_State = Exclusive;
  this->m_isDirty = 0;
  KLockHolder::ReleaseExclusive(&v42);
  m_miniport = this->m_miniport;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode((__int64)this->m_miniport);
    Ndis::BindEngine::BeginPolicyUpdates(&m_miniport->BindEngine);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine, v4);
  }
  KLockHolder::AcquireExclusive(&v42);
  this->m_currentOperation = 0LL;
  Ndis::BindEngine::ApplyRules(this);
  if ( this->m_isDirty )
    goto LABEL_83;
  v5 = this->m_miniport;
  v6 = 0LL;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v6 != m_numElements )
  {
    if ( v6 >= v5->Bindings.Protocols.m_numElements )
LABEL_81:
      __fastfail(5u);
    value = v5->Bindings.Protocols._p[v6].__ptr_.__value_;
    if ( value->BindState.PretendBindingActive || value->BindState.m_bindContext.m_numElements )
    {
      if ( value->BindState.m_pauseReasons )
      {
        if ( value->BindState.m_actualPauseState == DatapathRunning )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)value;
          KLockHolder::ReleaseExclusive(&v42);
          ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v42);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_83;
        }
      }
    }
    ++v6;
  }
  v9 = this->m_miniport;
  v10 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    while ( 1 )
    {
      v11 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              (__int64)&this->m_miniport->Bindings.Filters,
              --v10);
      v12 = *(_QWORD *)v11;
      if ( *(_BYTE *)(*(_QWORD *)v11 + 9LL) || *(_DWORD *)(v12 + 52) )
      {
        if ( *(_DWORD *)(v12 + 36) )
        {
          if ( *(_DWORD *)(v12 + 40) == 1 )
          {
            this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v12;
            KLockHolder::ReleaseExclusive(&v42);
            ndisPauseFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
            KLockHolder::AcquireExclusive(&v42);
            this->m_currentOperation = 0LL;
            Ndis::BindEngine::ApplyRules(this);
            if ( this->m_isDirty )
              goto LABEL_83;
          }
        }
      }
      if ( !v10 )
      {
        v9 = this->m_miniport;
        break;
      }
    }
  }
  if ( v9->Bindings.Miniport.m_pauseReasons && v9->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v42);
    ndisMPauseMiniport(this->m_miniport);
    KLockHolder::AcquireExclusive(&v42);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_83;
    v9 = this->m_miniport;
  }
  v13 = v9->Bindings.Protocols.m_numElements;
  v14 = 0LL;
  v43 = v13;
  while ( v14 != v13 )
  {
    if ( v14 >= v9->Bindings.Protocols.m_numElements )
      goto LABEL_81;
    p = v9->Bindings.Protocols._p;
    p_BindState = &p[v14].__ptr_.__value_->BindState;
    if ( p_BindState->m_unbindReasons && (p_BindState->PretendBindingActive || p_BindState->m_bindContext.m_numElements) )
    {
      if ( Ndis::BindState::SetSource(p_BindState, RemoveBindSource, UnsolicitedOpen)
        && (unsigned __int8)byte_1C00E677B >= 4u
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p[v14].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_,
          0x1Cu,
          0xAu,
          (struct _GUID *)&WPP_55d1641151203881ffb9d8d33059db94_Traceguids,
          &p[v14].__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length,
          p[v14].__ptr_.__value_->BindState.Miniport);
      }
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)p[v14];
      KLockHolder::ReleaseExclusive(&v42);
      m_currentOperation = this->m_currentOperation;
      v18 = this->m_miniport;
      if ( *((_BYTE *)m_currentOperation[1].BindState.Miniport->Reserved4.Buffer + 56) < 6u )
      {
        Ndis::BindEngine::BeginPolicyUpdates(&v18->BindEngine);
        m_currentOperation->BindState.m_actualPauseState = DatapathPaused;
        Ndis::BindEngine::EndPolicyUpdates(&v18->BindEngine, v19);
      }
      m_currentOperation->BindState.PretendBindingActive = 0;
      ndisUnbindEachProtocolOpenOnMiniport(v18, (struct NDIS_BIND_PROTOCOL_LINK *)m_currentOperation);
      KLockHolder::AcquireExclusive(&v42);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_83;
    }
    v13 = v43;
    ++v14;
  }
  v20 = this->m_miniport;
  v21 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    while ( 1 )
    {
      v22 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              (__int64)&this->m_miniport->Bindings.Filters,
              --v21);
      v23 = *(NDIS_BIND_LINK_BASE **)v22;
      if ( *(_DWORD *)(*(_QWORD *)v22 + 32LL) )
      {
        if ( v23->BindState.PretendBindingActive || v23->BindState.m_bindContext.m_numElements )
        {
          this->m_currentOperation = v23;
          KLockHolder::ReleaseExclusive(&v42);
          ndisDetachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v42);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_83;
        }
      }
      if ( !v21 )
      {
        v20 = this->m_miniport;
        break;
      }
    }
  }
  v24 = 0LL;
  if ( v20->Bindings.Filters.m_numElements )
  {
    do
    {
      v25 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              (__int64)&v20->Bindings.Filters,
              v24);
      v26 = *(NDIS_BIND_LINK_BASE **)v25;
      if ( !*(_DWORD *)(*(_QWORD *)v25 + 32LL)
        && !v26->BindState.PretendBindingActive
        && !v26->BindState.m_bindContext.m_numElements )
      {
        this->m_currentOperation = v26;
        KLockHolder::ReleaseExclusive(&v42);
        ndisAttachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
        KLockHolder::AcquireExclusive(&v42);
        this->m_currentOperation = 0LL;
        Ndis::BindEngine::ApplyRules(this);
        if ( this->m_isDirty )
          goto LABEL_83;
      }
      v20 = this->m_miniport;
    }
    while ( ++v24 < this->m_miniport->Bindings.Filters.m_numElements );
  }
  v27 = v20->Bindings.Protocols.m_numElements;
  for ( i = 0LL; i != v27; ++i )
  {
    if ( i >= v20->Bindings.Protocols.m_numElements )
      goto LABEL_81;
    v29 = &v20->Bindings.Protocols._p[i].__ptr_.__value_->NDIS_BIND_LINK_BASE;
    if ( !v29->BindState.m_unbindReasons
      && !v29->BindState.PretendBindingActive
      && !v29->BindState.m_bindContext.m_numElements )
    {
      this->m_currentOperation = v29;
      KLockHolder::ReleaseExclusive(&v42);
      ndisBindProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
      KLockHolder::AcquireExclusive(&v42);
      this->m_currentOperation = 0LL;
      Ndis::BindEngine::ApplyRules(this);
      if ( this->m_isDirty )
        goto LABEL_83;
    }
  }
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  v30 = this->m_miniport;
  if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
    && v30->Bindings.Miniport.m_actualPauseState == DatapathPaused )
  {
    KLockHolder::ReleaseExclusive(&v42);
    ndisMRestartMiniport(this->m_miniport, &v44);
    KLockHolder::AcquireExclusive(&v42);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( !this->m_isDirty )
    {
      v30 = this->m_miniport;
      goto LABEL_65;
    }
LABEL_83:
    v1 = 1;
    goto LABEL_84;
  }
LABEL_65:
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
          goto LABEL_83;
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
      goto LABEL_81;
    v38 = v35->Bindings.Protocols._p;
    v39 = v38[v36].__ptr_.__value_;
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
        goto LABEL_83;
    }
    v40 = v38[v36++].__ptr_.__value_;
    v40->BindState.m_AdditionalContext = 0LL;
  }
  ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v44);
  ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
  Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release((__int64)&this->m_miniport->MiniportOwner);
  Ndis::BindStack::GarbageCollectDeadBindings(&this->m_miniport->Bindings);
  KLockHolder::ReleaseExclusive(&v42);
LABEL_84:
  KLockThisExclusive::~KLockThisExclusive((KLockThisExclusive *)&v42);
  NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v44);
  return v1;
}
