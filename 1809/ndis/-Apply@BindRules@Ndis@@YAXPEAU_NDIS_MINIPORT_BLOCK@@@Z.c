/*
 * XREFs of ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C1260
 * Callers:
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00C11C4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A570 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00BFC28 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00C15A8 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C1790 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00C1958 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C1B4C (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C1CA0 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00C1EE8 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C2028 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C222C (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C2350 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C2548 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C2604 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C27B4 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00C2928 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::Apply(struct _NDIS_MINIPORT_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct Ndis::BindStack *v3; // rdx
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx
  struct Ndis::BindStack *v5; // rdx
  struct Ndis::BindStack *v6; // rdx
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  __int64 m_numElements; // r13
  BOOL v10; // r12d
  unsigned __int64 i; // rsi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r14
  NDIS_BIND_FILTER_LINK *Myptr; // rbx
  int v14; // r8d
  char v15; // al
  struct Ndis::BindStack *v16; // rdx
  struct Ndis::BindStack *v17; // r8
  struct Ndis::BindStack *v18; // rdx
  struct Ndis::BindStack *v19; // rdx
  struct Ndis::BindStack *v20; // rdx
  bool v21; // r8
  struct Ndis::BindStack *v22; // rdx
  struct Ndis::BindStack *v23; // r8
  __int64 v24; // r12
  unsigned __int64 v25; // rbx
  BOOL v26; // r14d
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v27; // r15
  NDIS_BIND_FILTER_LINK *v28; // rsi
  int m_pauseReasons; // r8d
  int v30; // r9d
  char v31; // al
  __int64 v32; // r12
  unsigned __int64 j; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v34; // r15
  NDIS_BIND_PROTOCOL_LINK *v35; // rsi
  int v36; // r8d
  int v37; // r9d
  int m_unbindReasons; // r8d
  char v39; // al
  bool v40; // cf
  unsigned __int16 v41; // cx
  __int64 v42; // [rsp+28h] [rbp-79h] BYREF
  const wchar_t *v43; // [rsp+30h] [rbp-71h]

  if ( ndisMDoesMiniportNeedCoNdisNdProxy(this) )
    ndisBindEnumerateProtocolDrivers(
      (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_,
      (__int64)this);
  Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&this->Bindings, v3);
  Ndis::BindRules::ReStartTemporaryPause((Ndis::BindRules *)this, v4);
  Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&this->Bindings, v5);
  Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&this->Bindings, v6);
  Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)this, v7);
  m_numElements = this->Bindings.Filters.m_numElements;
  v10 = 0;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= this->Bindings.Filters.m_numElements )
LABEL_68:
      __fastfail(5u);
    p = this->Bindings.Filters._p;
    Myptr = p[i]._Myptr;
    if ( Myptr->BindState.m_bindContext.m_numElements || Myptr->BindState.m_bindSources )
    {
      if ( (Myptr->BindDriver._p->_t.FilterBindFlags & 2) == 0 )
      {
        v10 = Myptr->BindState.m_unbindReasons != 0;
        continue;
      }
      if ( v10 )
      {
        m_unbindReasons = Myptr->BindState.m_unbindReasons;
        Myptr->BindState.m_unbindReasons = m_unbindReasons | 0x80;
        if ( m_unbindReasons && Myptr->BindState.Miniport )
        {
          v39 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00A026B >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_unbindReasons, m_unbindReasons | 0x80);
          Myptr->BindState.Miniport->BindEngine.m_isDirty = 1;
          v39 = 1;
        }
        if ( v39 )
        {
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)&v42);
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
            {
              v41 = 28;
              goto LABEL_65;
            }
          }
        }
      }
      else
      {
        v14 = Myptr->BindState.m_unbindReasons;
        Myptr->BindState.m_unbindReasons = v14 & 0xFFFFFF7F;
        if ( (v14 != 0) == ((v14 & 0xFFFFFF7F) != 0) && Myptr->BindState.Miniport )
        {
          v15 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C00A026B >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14, v14 & 0xFFFFFF7F);
          Myptr->BindState.Miniport->BindEngine.m_isDirty = 1;
          v15 = 1;
        }
        if ( v15 )
        {
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
          {
            ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)&v42);
            if ( (unsigned __int8)byte_1C00A026B >= 4u )
            {
              v41 = 27;
LABEL_65:
              WPP_SF_Zq(v41, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, v43, v42);
              continue;
            }
          }
        }
      }
    }
  }
  Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&this->Bindings, v8);
  Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&this->Bindings, v16);
  Ndis::BindRules::CoalesceFilterAttachDuringBoot(
    (Ndis::BindRules *)this,
    (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings,
    v17);
  Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&this->Bindings, v18);
  Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&this->Bindings, v19);
  LOBYTE(v20) = this->InitMode != 0;
  Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&this->Bindings, v20, v21);
  Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&this->Bindings, v22);
  Ndis::BindRules::PauseNeededForBind((Ndis::BindRules *)this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v23);
  v24 = this->Bindings.Filters.m_numElements;
  v25 = 0LL;
  v26 = this->Bindings.Miniport.m_pauseReasons == 0;
  while ( v25 != v24 )
  {
    if ( v25 >= this->Bindings.Filters.m_numElements )
      goto LABEL_68;
    v27 = this->Bindings.Filters._p;
    v28 = v27[v25]._Myptr;
    if ( v28->BindState.m_bindContext.m_numElements )
    {
      m_pauseReasons = v28->BindState.m_pauseReasons;
      if ( v26 )
        v30 = m_pauseReasons & 0xFFFFFFEF;
      else
        v30 = m_pauseReasons | 0x10;
      v28->BindState.m_pauseReasons = v30;
      if ( (m_pauseReasons != 0) == (v30 != 0) && v28->BindState.Miniport )
      {
        v31 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00A026B >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_pauseReasons, v30);
        v28->BindState.Miniport->BindEngine.m_isDirty = 1;
        v31 = 1;
      }
      if ( v31 )
      {
        if ( (unsigned __int8)byte_1C00A026B >= 4u )
        {
          ndisGetBindLinkNameForTracing(v27[v25]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)&v42);
          if ( (unsigned __int8)byte_1C00A026B >= 4u )
            WPP_SF_Zq(0x42u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, v43, v42);
        }
      }
      v26 = v27[v25]._Myptr->BindState.m_pauseReasons == 0;
    }
    ++v25;
  }
  v32 = this->Bindings.Protocols.m_numElements;
  for ( j = 0LL; j != v32; ++j )
  {
    if ( j >= this->Bindings.Protocols.m_numElements )
      goto LABEL_68;
    v34 = this->Bindings.Protocols._p;
    v35 = v34[j]._Myptr;
    v36 = v35->BindState.m_pauseReasons;
    if ( v26 )
      v37 = v36 & 0xFFFFFFEF;
    else
      v37 = v36 | 0x10;
    v35->BindState.m_pauseReasons = v37;
    if ( (v36 != 0) != (v37 != 0) || !v35->BindState.Miniport )
    {
      if ( (unsigned __int8)byte_1C00A026B >= 5u )
        WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v36, v37);
      v40 = (unsigned __int8)byte_1C00A026B < 4u;
      v35->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v40 )
        WPP_SF_Zq(
          0x43u,
          &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          &v34[j]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          v34[j]._Myptr->BindState.Miniport);
    }
  }
}
