/*
 * XREFs of ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD50C
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C01042A0 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A3B8 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00FD7AC (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FD7C4 (-PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FD984 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FDBB0 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00FDDBC (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE080 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE1E4 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00FE494 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FE61C (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FE86C (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FEA98 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FEB78 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FED60 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FEEE4 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C010379C (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::Apply(struct _NDIS_MINIPORT_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct Ndis::BindStack *v3; // rdx
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx
  struct Ndis::BindStack *v5; // rdx
  struct Ndis::BindStack *v6; // rdx
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  Rtl::KString *v8; // rdx
  __int64 m_numElements; // r13
  _UNKNOWN **v10; // r10
  _NDIS_MINIPORT_BLOCK *v11; // r9
  int v12; // r12d
  unsigned __int64 i; // r14
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r15
  Ndis::BindState *p_BindState; // rdi
  unsigned int m_unbindReasons; // r8d
  int v17; // ecx
  int v18; // eax
  struct Ndis::BindStack *v19; // r8
  struct Ndis::BindStack *v20; // rdx
  struct Ndis::BindStack *v21; // rdx
  struct Ndis::BindStack *v22; // rdx
  bool v23; // r8
  struct Ndis::BindStack *v24; // rdx
  struct Ndis::BindStack *v25; // r8
  struct Ndis::BindStack *v26; // rdx
  bool v27; // al
  __int64 v28; // r12
  unsigned __int64 v29; // rdi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v30; // r15
  int v31; // ecx
  int v32; // eax
  NDIS_BIND_FILTER_LINK *value; // r14
  unsigned int v34; // r8d
  __int64 v35; // r12
  unsigned __int64 j; // rdi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v37; // r15
  int v38; // ecx
  int v39; // eax
  NDIS_BIND_PROTOCOL_LINK *v40; // r14
  unsigned int v41; // r8d
  bool v42; // cf
  NDIS_BIND_PROTOCOL_LINK *v43; // rax
  char v44[8]; // [rsp+38h] [rbp-D0h]
  char v45[160]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46[20]; // [rsp+E8h] [rbp-20h] BYREF

  if ( ndisMDoesMiniportNeedCoNdisNdProxy(this) )
    ndisBindEnumerateProtocolDrivers(lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_, this);
  Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&this->Bindings, v3);
  Ndis::BindRules::ReStartTemporaryPause((Ndis::BindRules *)this, v4);
  Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&this->Bindings, v5);
  Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&this->Bindings, v6);
  Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)this, v7);
  m_numElements = this->Bindings.Filters.m_numElements;
  v10 = &WPP_RECORDER_INITIALIZED;
  v11 = 0LL;
  v12 = 0;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= this->Bindings.Filters.m_numElements )
LABEL_55:
      __fastfail(5u);
    p = this->Bindings.Filters._p;
    p_BindState = &p[i].__ptr_.__value_->BindState;
    if ( Ndis::BindState::IsAlive(p_BindState) )
    {
      if ( (*((_DWORD *)p_BindState[1].m_AdditionalContext + 10) & 2) == 0 )
      {
        v12 = (int)v11;
        LOBYTE(v12) = p_BindState->m_unbindReasons != (_DWORD)v11;
        continue;
      }
      if ( v12 )
      {
        if ( v12 != 1 )
          continue;
        v27 = Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_MissingModifyingFilter);
        v11 = 0LL;
        if ( !v27 )
        {
          v10 = &WPP_RECORDER_INITIALIZED;
          continue;
        }
        memset(v45, 0, sizeof(v45));
        if ( (unsigned __int8)byte_1C00E673B >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v45);
          v10 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v8,
              0x1Cu,
              0x1Cu,
              (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
              *(unsigned __int16 **)&v45[8],
              *(_QWORD *)v45);
            goto LABEL_36;
          }
LABEL_37:
          v11 = 0LL;
          continue;
        }
LABEL_36:
        v10 = &WPP_RECORDER_INITIALIZED;
        goto LABEL_37;
      }
      m_unbindReasons = p_BindState->m_unbindReasons;
      v17 = (int)v11;
      v18 = (int)v11;
      v8 = (Rtl::KString *)(m_unbindReasons & 0xFFFFFF7F);
      p_BindState->m_unbindReasons = (unsigned int)v8;
      LOBYTE(v17) = (m_unbindReasons & 0xFFFFFF7F) != 0;
      LOBYTE(v18) = m_unbindReasons != 0;
      if ( v18 != v17 || p_BindState->Miniport == v11 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v10 && *((_WORD *)WPP_GLOBAL_Control + 36) != (_WORD)v11 )
        {
          *(_DWORD *)v44 = m_unbindReasons & 0xFFFFFF7F;
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
            m_unbindReasons,
            *(_QWORD *)v44);
        }
        p_BindState->Miniport->BindEngine.m_isDirty = 1;
        memset(v46, 0, sizeof(v46));
        if ( (unsigned __int8)byte_1C00E673B >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v46);
          v10 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v8,
              0x1Cu,
              0x1Bu,
              (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
              (unsigned __int16 *)v46[1],
              v46[0]);
            goto LABEL_36;
          }
          goto LABEL_37;
        }
        goto LABEL_36;
      }
    }
  }
  if ( this->Bindings.Miniport.m_unbindReasons == (_DWORD)v11 )
    goto LABEL_14;
  v28 = this->Bindings.Filters.m_numElements;
  v29 = (unsigned __int64)v11;
  while ( 2 )
  {
    if ( v29 != v28 )
    {
      if ( v29 >= this->Bindings.Filters.m_numElements )
        goto LABEL_55;
      v30 = this->Bindings.Filters._p;
      v31 = (int)v11;
      v32 = (int)v11;
      value = v30[v29].__ptr_.__value_;
      v34 = value->BindState.m_unbindReasons;
      v8 = (Rtl::KString *)(v34 & 0xFFFBFFE3);
      value->BindState.m_unbindReasons = (unsigned int)v8;
      LOBYTE(v31) = (v34 & 0xFFFBFFE3) != 0;
      LOBYTE(v32) = v34 != 0;
      if ( v32 == v31 && value->BindState.Miniport != v11 )
        goto LABEL_23;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v10 && *((_WORD *)WPP_GLOBAL_Control + 36) != (_WORD)v11 )
      {
        *(_DWORD *)v44 = v34 & 0xFFFBFFE3;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
          v34,
          *(_QWORD *)v44);
      }
      value->BindState.Miniport->BindEngine.m_isDirty = 1;
      memset(v45, 0, sizeof(v45));
      if ( (unsigned __int8)byte_1C00E673B < 4u )
      {
LABEL_47:
        v10 = &WPP_RECORDER_INITIALIZED;
      }
      else
      {
        ndisGetBindLinkNameForTracing(v30[v29].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v45);
        v10 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v8,
            0x1Cu,
            0x19u,
            (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(unsigned __int16 **)&v45[8],
            *(_QWORD *)v45);
          goto LABEL_47;
        }
      }
      v11 = 0LL;
LABEL_23:
      ++v29;
      continue;
    }
    break;
  }
  v35 = this->Bindings.Protocols.m_numElements;
  for ( j = (unsigned __int64)v11; j != v35; ++j )
  {
    if ( j >= this->Bindings.Protocols.m_numElements )
      goto LABEL_55;
    v37 = this->Bindings.Protocols._p;
    v38 = (int)v11;
    v39 = (int)v11;
    v40 = v37[j].__ptr_.__value_;
    v41 = v40->BindState.m_unbindReasons;
    v8 = (Rtl::KString *)(v41 & 0xFFFBFFE3);
    v40->BindState.m_unbindReasons = (unsigned int)v8;
    LOBYTE(v38) = (v41 & 0xFFFBFFE3) != 0;
    LOBYTE(v39) = v41 != 0;
    if ( v39 != v38 || v40->BindState.Miniport == v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v10 && *((_WORD *)WPP_GLOBAL_Control + 36) != (_WORD)v11 )
      {
        *(_DWORD *)v44 = v41 & 0xFFFBFFE3;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids,
          v41,
          *(_QWORD *)v44);
        v10 = &WPP_RECORDER_INITIALIZED;
      }
      v42 = (unsigned __int8)byte_1C00E673B < 4u;
      v40->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v42 )
      {
        v43 = v37[j].__ptr_.__value_;
        v8 = v43->BindDriver._p->_t.Name.__ptr_.__value_;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v10 )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v8,
            0x1Cu,
            0x1Au,
            (struct _GUID *)&WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            &v8->Length,
            v43->BindState.Miniport);
      }
    }
    v10 = &WPP_RECORDER_INITIALIZED;
    v11 = 0LL;
  }
LABEL_14:
  Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&this->Bindings, (struct Ndis::BindStack *)v8);
  Ndis::BindRules::CoalesceFilterAttachDuringBoot(
    (Ndis::BindRules *)this,
    (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings,
    v19);
  Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&this->Bindings, v20);
  Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&this->Bindings, v21);
  LOBYTE(v22) = this->InitMode != 0;
  Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&this->Bindings, v22, v23);
  Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&this->Bindings, v24);
  Ndis::BindRules::PauseNeededForBind((Ndis::BindRules *)this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v25);
  Ndis::BindRules::PauseMiniportStack((Ndis::BindRules *)&this->Bindings, v26);
}
