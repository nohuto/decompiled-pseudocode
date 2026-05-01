/*
 * XREFs of ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@V10@AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x18025E31C
 * Callers:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x18025EE84 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18025B55C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18025E790 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 */

__int64 __fastcall std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v9; // r14
  unsigned __int64 i; // r9
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-20h]

  v5 = 0LL;
  v6 = *a2;
  if ( v6 )
    v5 = *v6;
  v9 = *(_QWORD *)(a3 + 16);
  v16 = v5;
  for ( i = (unsigned __int64)a2[2];
        i != v9
     && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((i >> 1) & (*(_QWORD *)(v5 + 16) - 1LL))) + 8 * (i & 1)) != *a4;
        ++i )
  {
    ;
  }
  v11 = i;
  if ( i != v9 )
  {
    v12 = i;
    while ( ++v12 != v9 )
    {
      v13 = *(_QWORD *)(v16 + 8);
      v14 = *(_QWORD *)(v16 + 16) - 1LL;
      if ( *(_QWORD *)(*(_QWORD *)(v13 + 8 * (v14 & (v12 >> 1))) + 8 * (v12 & 1)) != *a4 )
      {
        __abi_winrt_ptr_assign(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8 * ((v11 >> 1) & (*(_QWORD *)(v16 + 16) - 1LL)))
                    + 8 * (v11 & 1)),
          *(_QWORD *)(*(_QWORD *)(v13 + 8 * (v14 & (v12 >> 1))) + 8 * (v12 & 1)));
        ++v11;
      }
    }
  }
  a2[2] = (__int64 *)v11;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
    a1,
    a2);
  return a1;
}
