/*
 * XREFs of ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180021154
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18001FDF0 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x18001FCA0 (-_Reset_move@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x1800267F8 (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002698C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028AE4 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPC3DStateHelper::RegisterFor3DHitTestingAvailabilityChanged(
        PSRWLOCK SRWLock,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v6; // rdx
  unsigned int Ptr; // ecx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, _BYTE *); // rcx
  _BYTE *v13; // rax
  _QWORD v15[4]; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v16[56]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE *v17; // [rsp+90h] [rbp-21h]
  _BYTE v18[56]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+1Fh]

  v15[1] = -2LL;
  v15[2] = a2;
  AcquireSRWLockExclusive(SRWLock);
  v15[3] = SRWLock;
  Ptr = (unsigned int)SRWLock[2].Ptr;
  LODWORD(SRWLock[2].Ptr) = Ptr + 1;
  *a3 = Ptr;
  v8 = SRWLock[6].Ptr;
  v9 = (_QWORD *)v8[1];
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_6;
  do
  {
    if ( *((_DWORD *)v9 + 8) >= Ptr )
    {
      v8 = v9;
      v9 = (_QWORD *)*v9;
    }
    else
    {
      v9 = (_QWORD *)v9[2];
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v8 == SRWLock[6].Ptr || Ptr < *((_DWORD *)v8 + 8) )
  {
LABEL_6:
    v15[0] = a3;
    v10 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            &SRWLock[6],
            v6,
            v15);
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      (_DWORD)SRWLock + 48,
      (unsigned int)v15,
      (_DWORD)v8,
      v10 + 32,
      v10);
    v8 = (_QWORD *)v15[0];
  }
  v11 = (__int64)(v8 + 5);
  v17 = 0LL;
  v12 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v12 )
  {
    v13 = (_BYTE *)(**v12)(v12, v16);
    v17 = v13;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 == v16 || *(_QWORD *)(v11 + 56) == v11 )
  {
    v19 = 0LL;
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move((__int64)v18, (__int64)v16);
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move((__int64)v16, v11);
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v11, (__int64)v18);
    std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(v18);
  }
  else
  {
    v17 = *(_BYTE **)(v11 + 56);
    *(_QWORD *)(v11 + 56) = v13;
  }
  std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(v16);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(a2);
}
