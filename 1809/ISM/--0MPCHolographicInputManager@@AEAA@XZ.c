/*
 * XREFs of ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18003F964
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180043BC0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002A610 (--4-$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003BEA0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x18003BEE0 (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18003C6A4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x180042A70 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
MPCHolographicInputManager *__fastcall MPCHolographicInputManager::MPCHolographicInputManager(
        MPCHolographicInputManager *this)
{
  char *v2; // rbx
  const char *v3; // r9
  __int64 *v4; // rbx
  unsigned int *v5; // r15
  const char *v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  struct MPC3DStateHelper *Instance; // rdi
  __int64 v10; // rdx
  void **v11; // rax
  void ***v12; // rbx
  unsigned int v13; // ecx
  unsigned int *v14; // rax
  void ***v15; // rdx
  struct MPC3DStateHelper *v16; // rdi
  char v17; // bl
  std::exception_ptr *v19; // rax
  _BYTE v20[16]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v21; // [rsp+40h] [rbp-49h] BYREF
  MPCHolographicInputManager *v22; // [rsp+50h] [rbp-39h]
  _QWORD v23[2]; // [rsp+58h] [rbp-31h] BYREF
  void **v24; // [rsp+68h] [rbp-21h] BYREF
  __int128 v25; // [rsp+70h] [rbp-19h]
  MPCHolographicInputManager *v26; // [rsp+80h] [rbp-9h]
  void ***v27; // [rsp+A0h] [rbp+17h]
  __int64 v28; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  void ***v30; // [rsp+F8h] [rbp+6Fh] BYREF
  void ***v31; // [rsp+100h] [rbp+77h]
  struct MPC3DStateHelper *v32; // [rsp+108h] [rbp+7Fh]

  v28 = -2LL;
  v2 = (char *)this + 200;
  memset_0((char *)this + 200, 0, 0x640uLL);
  *((_DWORD *)v2 + 6) = 1600;
  *((_QWORD *)this + 226) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  *((_QWORD *)this + 228) = 0LL;
  *((_QWORD *)this + 229) = 0LL;
  *((_QWORD *)this + 230) = 0LL;
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 233) = 0LL;
  *((_DWORD *)this + 468) = 0;
  *((_BYTE *)this + 1876) = 0;
  *((_DWORD *)this + 470) = 0;
  *((_QWORD *)this + 236) = 0LL;
  *((_QWORD *)this + 237) = 0LL;
  *((_QWORD *)this + 238) = 0LL;
  memset_0((char *)this + 1912, 0, 0xB0uLL);
  *((_QWORD *)this + 261) = 0LL;
  *((_QWORD *)this + 262) = 0LL;
  *((_QWORD *)this + 263) = 0LL;
  v4 = (__int64 *)((char *)this + 2112);
  *((_QWORD *)this + 264) = 0LL;
  *((_QWORD *)this + 265) = 0LL;
  *((_QWORD *)this + 266) = 0LL;
  *((_DWORD *)this + 534) = 1;
  *((_QWORD *)this + 268) = 0LL;
  *((_DWORD *)this + 538) = 0;
  v5 = (unsigned int *)((char *)this + 2156);
  *((_DWORD *)this + 539) = 0;
  *((_BYTE *)this + 2160) = 0;
  *(_QWORD *)((char *)this + 2164) = 0LL;
  *((_DWORD *)this + 543) = 50;
  *((_DWORD *)this + 544) = 50;
  if ( MPCManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v3);
    __debugbreak();
  }
  LOBYTE(v30) = 0;
  __ExceptionPtrCreate(v20);
  v23[0] = v20;
  v23[1] = &v30;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&MPCManager::s_singletonCreated,
          (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_3bf0c1641773c9cead522fb3b6204044_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
          v23) )
  {
    if ( !__ExceptionPtrToBool(v20) )
    {
      std::_XGetLastError();
      __debugbreak();
    }
    v19 = std::exception_ptr::exception_ptr((std::exception_ptr *)&v21, (const struct std::exception_ptr *)v20);
    std::rethrow_exception(v19);
  }
  __ExceptionPtrDestroy(v20);
  if ( !MPCManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      v6);
    __debugbreak();
  }
  v7 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = CoreUICreate((char *)this + 2112);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x18003FCD6LL);
  }
  *((_BYTE *)this + 1800) = 0;
  v30 = &v24;
  *(_QWORD *)&v21 = MPCHolographicInputManager::OnHitTestingStateChanged;
  v22 = this;
  v24 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::`vftable';
  v25 = v21;
  v26 = this;
  v27 = &v24;
  v31 = &v24;
  Instance = MPC3DStateHelper::GetInstance();
  AcquireSRWLockExclusive((PSRWLOCK)Instance);
  v32 = Instance;
  *v5 = (*((_DWORD *)Instance + 4))++;
  v10 = *((_QWORD *)Instance + 6);
  v11 = *(void ***)(v10 + 8);
  v12 = (void ***)v10;
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_15;
  v13 = *v5;
  do
  {
    if ( *((_DWORD *)v11 + 8) >= v13 )
    {
      v12 = (void ***)v11;
      v11 = (void **)*v11;
    }
    else
    {
      v11 = (void **)v11[2];
    }
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v12 == (void ***)v10 || v13 < *((_DWORD *)v12 + 8) )
  {
LABEL_15:
    v30 = (void ***)((char *)this + 2156);
    v14 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            (__int64)Instance + 48,
                            v10,
                            (_DWORD **)&v30);
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      (__int64)Instance + 48,
      &v30,
      (__int64 *)v12,
      v14 + 8,
      v14);
    v12 = v30;
  }
  std::function<void (_MIT_KEYBOARD_INPUT_MESSAGE const *)>::operator=((__int64)(v12 + 5), (__int64)&v24);
  ReleaseSRWLockExclusive((PSRWLOCK)Instance);
  if ( v27 )
  {
    v15 = &v24;
    LOBYTE(v15) = v27 != &v24;
    ((void (__fastcall *)(void ***, void ***))(*v27)[4])(v27, v15);
  }
  v16 = MPC3DStateHelper::GetInstance();
  AcquireSRWLockShared((PSRWLOCK)v16);
  v17 = *((_BYTE *)v16 + 21);
  ReleaseSRWLockShared((PSRWLOCK)v16);
  if ( v17 )
    MPCHolographicInputManager::OnHitTestingStateChanged(this, 1);
  return this;
}
