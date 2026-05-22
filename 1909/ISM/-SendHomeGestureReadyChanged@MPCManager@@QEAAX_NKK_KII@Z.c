/*
 * XREFs of ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x18007F128
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136440 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z @ 0x18007E028 (-MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z.c)
 */

void __fastcall MPCManager::SendHomeGestureReadyChanged(
        MPCManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 *v7; // rbx
  unsigned int v9; // r14d
  unsigned int v11; // r15d
  char v12; // bp
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  ISMTracing *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v7 = (__int64 *)*((_QWORD *)this + 9);
  v9 = a7;
  v11 = a6;
  v12 = a2;
  v13 = a5;
  v14 = *v7;
  v19 = *v7;
  while ( (__int64 *)v14 != v7 )
  {
    LOBYTE(a2) = v12;
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, unsigned __int64, unsigned int, unsigned int))(**(_QWORD **)(v14 + 40) + 80LL))(
            *(_QWORD *)(v14 + 40),
            a2,
            a4,
            a3,
            v13,
            v11,
            v9);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        151LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v15);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v19);
    v14 = v19;
  }
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v16, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCManager_SendHomeGestureReadyChanged_(v17, v12, a4, a3, v13, v11, v9);
  }
}
