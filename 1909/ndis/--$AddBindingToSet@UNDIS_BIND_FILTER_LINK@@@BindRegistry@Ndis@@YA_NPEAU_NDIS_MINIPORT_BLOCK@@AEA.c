/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00FC220
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x1C00F940C (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C0102290 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C01027C8 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116B30 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C012491C (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0127284 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01278A0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  int v13; // edx
  volatile signed __int32 *Miniport; // rcx
  struct NDIS_BIND_FILTER_LINK *v16; // [rsp+40h] [rbp-E8h]
  char v17[160]; // [rsp+50h] [rbp-D8h] BYREF

  (*a4)->BindState.Miniport = a1;
  if ( Ndis::BindState::SetSource(&(*a4)->BindState, AddBindSource, Registry) )
  {
    memset(v17, 0, sizeof(v17));
    if ( (unsigned __int8)byte_1C00E677B >= 4u )
    {
      ndisGetBindLinkNameForTracing(*a4, (struct NDIS_PNPTRACE_LOCALS *)v17);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          0x1Cu,
          0xAu,
          (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
          *(unsigned __int16 **)&v17[8],
          *(_QWORD *)v17);
    }
  }
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE);
  v8 = *a4;
  *a4 = 0LL;
  v9 = (NDIS_BIND_LINK_BASE *)v8;
  v10 = *(unsigned int *)(a2 + 4);
  v16 = v8;
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
    v16 = 0LL;
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
    if ( Miniport )
    {
      if ( !_InterlockedDecrement(Miniport + 16) )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
      v9 = (NDIS_BIND_LINK_BASE *)v16;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v9);
    ExFreePoolWithTag(v9, 0x4C6C4642u);
  }
  if ( !v12 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
