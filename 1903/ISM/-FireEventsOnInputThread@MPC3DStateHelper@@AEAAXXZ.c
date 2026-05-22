/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x18007C138
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x18007BB20 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180010B18 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028AE4 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x18007BEF8 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18007C100 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x18007C3E4 (-MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // si
  char v3; // r12
  char Ptr_high; // r15
  char v5; // r14
  _QWORD *Ptr; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 i; // rbx
  __int64 v13; // r14
  __int64 j; // rbx
  void *v15; // rdx
  wil::details *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  ISMTracing *v19; // rcx
  char *v20; // rbx
  char *v21; // rdi
  char *v22; // rbx
  char *v23; // rdi
  _BYTE v24[24]; // [rsp+28h] [rbp-38h] BYREF
  char *v25; // [rsp+40h] [rbp-20h] BYREF
  __int128 v26; // [rsp+48h] [rbp-18h]
  _QWORD *v27; // [rsp+90h] [rbp+30h] BYREF
  PSRWLOCK v28; // [rsp+98h] [rbp+38h]

  v25 = 0LL;
  v26 = 0LL;
  memset(v24, 0, sizeof(v24));
  AcquireSRWLockExclusive(SRWLock);
  v28 = SRWLock;
  v2 = BYTE6(SRWLock[2].Ptr);
  v3 = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v5 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = Ptr_high;
  Ptr = SRWLock[6].Ptr;
  v7 = (_QWORD *)*Ptr;
  v27 = (_QWORD *)*Ptr;
  while ( v7 != Ptr )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
      (__int64 *)&v25,
      (__int64)(v7 + 5));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v27);
    v7 = v27;
  }
  v8 = SRWLock[4].Ptr;
  v9 = (_QWORD *)*v8;
  v27 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(
      (__int64 *)v24,
      (__int64)(v9 + 5));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v27);
    v9 = v27;
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr_high != v5 )
  {
    v11 = v26;
    for ( i = (__int64)v25; i != v11; i += 64LL )
      std::_Func_class<void,bool>::operator()(i, Ptr_high);
  }
  if ( v2 != v3 )
  {
    v13 = *(_QWORD *)&v24[8];
    for ( j = *(_QWORD *)v24; j != v13; j += 64LL )
      std::_Func_class<void,bool>::operator()(j, v2);
    AcquireSRWLockExclusive(SRWLock);
    if ( v2 )
      v16 = (wil::details *)SRWLock[8].Ptr;
    else
      v16 = (wil::details *)SRWLock[9].Ptr;
    wil::details::SetEvent(v16, v15);
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ( ISMTracing::IsEnabled(v10) )
  {
    wil::details::static_lazy<ISMTracing>::get(v18, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPC3DStateHelper_FireEventsOnInputThread_(v19, v2, Ptr_high);
  }
  v20 = *(char **)v24;
  if ( *(_QWORD *)v24 )
  {
    v21 = *(char **)&v24[8];
    if ( *(_QWORD *)v24 != *(_QWORD *)&v24[8] )
    {
      do
      {
        std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy((__int64)v20, v17);
        v20 += 64;
      }
      while ( v20 != v21 );
      v20 = *(char **)v24;
    }
    std::_Deallocate<16,0>(
      v20,
      (const struct std::nothrow_t *)((*(_QWORD *)&v24[16] - (_QWORD)v20) & 0xFFFFFFFFFFFFFFC0uLL));
    memset(v24, 0, sizeof(v24));
  }
  v22 = v25;
  if ( v25 )
  {
    v23 = (char *)v26;
    if ( v25 != (char *)v26 )
    {
      do
      {
        std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy((__int64)v22, v17);
        v22 += 64;
      }
      while ( v22 != v23 );
      v22 = v25;
    }
    std::_Deallocate<16,0>(
      v22,
      (const struct std::nothrow_t *)((*((_QWORD *)&v26 + 1) - (_QWORD)v22) & 0xFFFFFFFFFFFFFFC0uLL));
  }
}
