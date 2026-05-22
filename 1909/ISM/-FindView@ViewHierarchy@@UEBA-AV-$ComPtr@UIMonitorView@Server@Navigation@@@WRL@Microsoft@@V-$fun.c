/*
 * XREFs of ?FindView@ViewHierarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@V?$function@$$A6A_NPEAUIMonitorView@Server@Navigation@@@Z@std@@@Z @ 0x180059180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180053790 (--4-$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry_________lambda_9da3396ebc25e95470d6e1666dc7fe96___ @ 0x180058BBC (std--find_if_std--_List_const_iterator_std--_List_val_std--_List_simple_types_std--pair_unsigned.c)
 *     ?IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ @ 0x1800595FC (-IsConnectedToNavServer@ViewHierarchy@@AEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall ViewHierarchy::FindView(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // rdx
  __int64 *v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v15[3]; // [rsp+28h] [rbp-40h] BYREF

  v15[1] = -2LL;
  v15[0] = a2;
  v15[2] = a3;
  if ( ViewHierarchy::IsConnectedToNavServer((ViewHierarchy *)(a1 - 16)) )
  {
    v10 = 0LL;
    v14 = 0LL;
    std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry_________lambda_9da3396ebc25e95470d6e1666dc7fe96___(
      v15,
      **(_QWORD ***)(a1 + 88),
      *(_QWORD **)(a1 + 88),
      a3);
    if ( v15[0] != *(_QWORD *)(a1 + 88) )
    {
      Microsoft::WRL::ComPtr<Navigation::Server::IMonitorView>::operator=(&v14, (__int64 *)(v15[0] + 24LL));
      v10 = v14;
    }
    *a2 = 0LL;
    if ( a2 != &v14 )
    {
      *a2 = v10;
      v14 = 0LL;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v14);
    v12 = *(_QWORD *)(a3 + 56);
    if ( v12 )
    {
      LOBYTE(v11) = v12 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
  }
  else
  {
    *v6 = 0LL;
    v8 = (__int64 *)v7[7];
    if ( v8 )
    {
      v9 = *v8;
      LOBYTE(v9) = v8 != v7;
      (*(void (__fastcall **)(__int64 *, __int64))(*v8 + 32))(v8, v9);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
  }
  return a2;
}
