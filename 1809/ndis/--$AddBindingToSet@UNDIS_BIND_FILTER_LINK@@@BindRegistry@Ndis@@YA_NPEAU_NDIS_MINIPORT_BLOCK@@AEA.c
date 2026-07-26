/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B3FB8
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00B3508 (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00BF91C (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00C03B0 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00C0918 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00EC5AC (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C01045A8 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0106F14 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01074D8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  struct NDIS_BIND_FILTER_LINK *v8; // rbp
  NDIS_BIND_LINK_BASE *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // di
  volatile signed __int32 *Miniport; // rcx
  _QWORD v15[20]; // [rsp+20h] [rbp-D8h] BYREF

  (*a4)->BindState.Miniport = a1;
  if ( Ndis::BindState::SetSource(&(*a4)->BindState, AddBindSource, Registry) && (unsigned __int8)byte_1C00A026B >= 4u )
  {
    ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v15);
    if ( (unsigned __int8)byte_1C00A026B >= 4u )
      WPP_SF_Zq(0xAu, &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids, (const wchar_t *)v15[1], v15[0]);
  }
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE);
  v8 = *a4;
  *a4 = 0LL;
  v9 = (NDIS_BIND_LINK_BASE *)v8;
  v10 = *(unsigned int *)(a2 + 4);
  if ( a3 <= v10
    && (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::grow(
                          a2,
                          (unsigned int)(v10 + 1)) )
  {
    v11 = *(unsigned int *)(a2 + 4);
    if ( a3 < v11 )
      Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        a2,
        (unsigned int)a3,
        (unsigned int)(a3 + 1),
        (unsigned int)(v11 - a3));
    v9 = 0LL;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * a3) = v8;
    ++*(_DWORD *)(a2 + 4);
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( v9 )
  {
    Miniport = (volatile signed __int32 *)v9[1].BindState.Miniport;
    if ( Miniport && !_InterlockedDecrement(Miniport + 16) )
      KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v9);
    ExFreePoolWithTag(v9, 0x4C6C4642u);
  }
  if ( !v12 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
