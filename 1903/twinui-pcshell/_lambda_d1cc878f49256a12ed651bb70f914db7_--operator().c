/*
 * XREFs of _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1802B7BCC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x1802B75CC (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--_ScopeExitFn__lambda_d1cc.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData @ 0x1802B7780 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--ThreadData--_.c)
 *     _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator() @ 0x1802B7900 (_lambda_05f458ff3b283a3e9a9130333ab0a931_--operator().c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_ @ 0x1802B7DA4 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--_ea_1802B7DA4.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1802B8028 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@V10@AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802B6E14 (--$remove@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHa.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1802B7288 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 *     ?erase@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@2@0@Z @ 0x1802BB308 (-erase@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V-$a.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  _QWORD *v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 *v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-49h] BYREF
  __int64 v18; // [rsp+30h] [rbp-39h]
  __int64 v19; // [rsp+38h] [rbp-31h] BYREF
  __int64 v20; // [rsp+40h] [rbp-29h]
  __int64 v21; // [rsp+48h] [rbp-21h]
  __int64 v22; // [rsp+50h] [rbp-19h]
  _QWORD v23[3]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v24[3]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v25[56]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+D0h] [rbp+67h] BYREF
  struct _Mtx_internal_imp_t *v27; // [rsp+D8h] [rbp+6Fh]
  _QWORD *v28; // [rsp+E0h] [rbp+77h]

  v22 = -2LL;
  v2 = Platform::Details::ResolveWeakReference(
         &_uuidof__AVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__,
         a1 + 16);
  v26 = v2;
  v3 = __abi_winrt_ptr_ctor(v2);
  v26 = v3;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v3 )
  {
    v4 = (struct _Mtx_internal_imp_t *)(*(_QWORD *)a1 + 104LL);
    v27 = v4;
    v5 = _Mtx_lock(v4);
    if ( v5 )
      std::_Throw_C_error(v5);
    v28 = v23;
    v6 = (_QWORD *)(*(_QWORD *)a1 + 184LL);
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 208LL) + *(_QWORD *)(*(_QWORD *)a1 + 216LL);
    *((_QWORD *)&v17 + 1) = 0LL;
    v18 = v7;
    *(_QWORD *)&v17 = *v6;
    v8 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
           v23,
           (__int64)&v17);
    v10 = v9[3];
    v11 = v10 + v9[4];
    v20 = 0LL;
    v21 = v11;
    v12 = *v9;
    v19 = *v9;
    v17 = 0LL;
    v18 = v10;
    v13 = 0LL;
    if ( v9 )
      v13 = v12;
    *(_QWORD *)&v17 = v13;
    v14 = std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
            (__int64)v25,
            (__int64 **)&v17,
            (__int64)&v19,
            &v26);
    v15 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
            v24,
            v14);
    std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::erase(
      *(_QWORD *)a1 + 184LL,
      &v17,
      v15,
      v8,
      v17,
      *((_QWORD *)&v17 + 1),
      v18,
      v19,
      v20,
      v21,
      v22);
    v16 = _Mtx_unlock(v4);
    if ( v16 )
      std::_Throw_C_error(v16);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
