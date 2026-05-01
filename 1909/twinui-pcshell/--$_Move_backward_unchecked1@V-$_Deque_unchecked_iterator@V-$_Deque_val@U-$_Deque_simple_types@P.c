/*
 * XREFs of ??$_Move_backward_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x1802D5F78
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x1802D627C (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostL.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802D24BC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  unsigned __int64 i; // rdi
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // r8
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  for ( i = a3[1];
        v4 != i;
        __abi_winrt_ptr_assign(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((v11 >> 1) & (*(_QWORD *)(v10 + 16) - 1LL)))
                    + 8 * (v11 & 1)),
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v12) + 8 * (i & 1))) )
  {
    v9 = *a3;
    --i;
    v10 = *a4;
    v11 = a4[1] - 1;
    a3[1] = i;
    v12 = (i >> 1) & (*(_QWORD *)(v9 + 16) - 1LL);
    a4[1] = v11;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
