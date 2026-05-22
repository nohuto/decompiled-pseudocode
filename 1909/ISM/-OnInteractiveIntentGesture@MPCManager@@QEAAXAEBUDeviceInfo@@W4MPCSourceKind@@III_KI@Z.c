/*
 * XREFs of ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z @ 0x18007E820
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036AC0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180138E9C (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 */

__int64 __fastcall MPCManager::OnInteractiveIntentGesture(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8)
{
  __int64 *v8; // rbx
  int v10; // r14d
  __int64 v12; // r15
  int v14; // r12d
  __int64 result; // rax
  int v16; // r13d
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  v8 = *(__int64 **)(a1 + 72);
  v10 = a8;
  v12 = a7;
  v14 = a6;
  result = *v8;
  v16 = a5;
  v19 = *v8;
  while ( (__int64 *)result != v8 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, int, __int64, int))(**(_QWORD **)(result + 40)
                                                                                             + 24LL))(
            *(_QWORD *)(result + 40),
            a2,
            a3,
            a4,
            v16,
            v14,
            v12,
            v10);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        264LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v17);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v19);
    result = v19;
  }
  return result;
}
