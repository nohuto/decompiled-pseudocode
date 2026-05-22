/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z @ 0x18007ECB4
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013B6D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXAEBUDeviceInfo@@@Z @ 0x18007E1E0 (-MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXAEBUDeviceInfo@@@Z.c)
 */

void __fastcall MPCManager::OnMouseSnappedToGaze(MPCManager *this, const struct DeviceInfo *a2)
{
  __int64 v4; // rcx
  ISMTracing *v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCManager_OnMouseSnappedToGaze_(v5, a2);
  }
  v6 = (__int64 *)*((_QWORD *)this + 9);
  v7 = *v6;
  v10 = *v6;
  while ( (__int64 *)v7 != v6 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct DeviceInfo *))(**(_QWORD **)(v7 + 40) + 48LL))(
           *(_QWORD *)(v7 + 40),
           a2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        306LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v8);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v10);
    v7 = v10;
  }
}
