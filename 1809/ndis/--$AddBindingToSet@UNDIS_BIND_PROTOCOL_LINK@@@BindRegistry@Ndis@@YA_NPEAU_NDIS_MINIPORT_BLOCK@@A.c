/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C01B0
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BFFF0 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0061574 (WPP_SF_DZq.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C02F4 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00C03B0 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0106F14 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        NDIS_BIND_LINK_BASE **a4)
{
  Ndis::BindState *v8; // rbx
  unsigned int m_bindSources; // eax
  int v10; // r9d
  int m_unbindReasons; // r8d
  int v12; // r8d
  bool v13; // cf
  NDIS_BIND_LINK_BASE *v14; // rax
  char v15; // al
  NDIS_BIND_LINK_BASE *v16; // rbx
  bool v17; // di
  unsigned __int16 v19; // cx
  volatile signed __int32 *v20; // rcx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  (*a4)->BindState.Miniport = a1;
  v8 = (Ndis::BindState *)*a4;
  m_bindSources = (*a4)->BindState.m_bindSources;
  v10 = m_bindSources | 1;
  v8->m_bindSources = m_bindSources | 1;
  if ( m_bindSources )
    goto LABEL_11;
  if ( (unsigned __int8)byte_1C00A026B >= 5u )
  {
    WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0, v10);
    v10 = v8->m_bindSources;
  }
  if ( v10 )
  {
    m_unbindReasons = v8->m_unbindReasons;
    v8->m_unbindReasons = m_unbindReasons & 0xFFFFFFFE;
    if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFFFE) != 0) || !v8->Miniport )
    {
      if ( (unsigned __int8)byte_1C00A026B >= 5u )
        WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFFFFFE);
      v13 = (unsigned __int8)byte_1C00A026B < 4u;
      v8->Miniport->BindEngine.m_isDirty = 1;
      if ( !v13 )
        WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8->m_bindSources, 0LL, 0LL);
    }
    v12 = v8->m_unbindReasons;
    v8->m_unbindReasons = v12 & 0xFFFBFFE3;
    if ( (v12 != 0) == ((v12 & 0xFFFBFFE3) != 0) && v8->Miniport )
      goto LABEL_9;
    if ( (unsigned __int8)byte_1C00A026B >= 5u )
      WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v12, v12 & 0xFFFBFFE3);
    v13 = (unsigned __int8)byte_1C00A026B < 4u;
    v8->Miniport->BindEngine.m_isDirty = 1;
    if ( v13 )
      goto LABEL_9;
    v19 = 12;
    goto LABEL_26;
  }
  if ( Ndis::BindState::SetBinding(v8, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    v19 = 13;
LABEL_26:
    WPP_SF_Zq(v19, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
  }
LABEL_9:
  v13 = (unsigned __int8)byte_1C00A026B < 4u;
  v8->Miniport->BindEngine.m_isDirty = 1;
  if ( !v13 )
    WPP_SF_Zq(
      0xAu,
      &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
      (const wchar_t *)(*a4)[1].BindState.Miniport->MiniportAdapterContext,
      (*a4)->BindState.Miniport);
LABEL_11:
  NDIS_BIND_LINK_BASE::LinkToDriver(*a4, (struct NDIS_BIND_DRIVER_BASE *)(*a4)[1].BindState.Miniport);
  v14 = *a4;
  *a4 = 0LL;
  P = v14;
  v15 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
          a2,
          a3,
          &P);
  v16 = (NDIS_BIND_LINK_BASE *)P;
  v17 = v15 == 0;
  if ( P )
  {
    v20 = (volatile signed __int32 *)*((_QWORD *)P + 10);
    if ( v20 )
    {
      if ( !_InterlockedDecrement(v20 + 12) )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v20);
      v16 = (NDIS_BIND_LINK_BASE *)P;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v16);
    ExFreePoolWithTag(v16, 0x4C745042u);
  }
  if ( v17 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
