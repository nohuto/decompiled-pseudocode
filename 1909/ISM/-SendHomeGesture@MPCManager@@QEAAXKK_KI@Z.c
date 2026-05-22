/*
 * XREFs of ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18007F06C
 * Callers:
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18012C200 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180131B3C (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136440 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180138E9C (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?Process3DInput@MPCHomeGestureProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18013F500 (-Process3DInput@MPCHomeGestureProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KI@Z @ 0x18007E12C (-MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KI@Z.c)
 */

void __fastcall MPCManager::SendHomeGesture(
        MPCManager *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 *v5; // rbx
  unsigned int v7; // r14d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  ISMTracing *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64 *)*((_QWORD *)this + 9);
  v7 = a5;
  v10 = *v5;
  v16 = *v5;
  while ( (__int64 *)v10 != v5 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int))(**(_QWORD **)(v10 + 40) + 72LL))(
            *(_QWORD *)(v10 + 40),
            a3,
            a2,
            a4,
            v7);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        133LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v11);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v16);
    v10 = v16;
  }
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v12, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    LODWORD(v14) = v7;
    ISMTracing::MPCManager_SendHomeGesture_(v13, a3, a2, a4, v14);
  }
}
