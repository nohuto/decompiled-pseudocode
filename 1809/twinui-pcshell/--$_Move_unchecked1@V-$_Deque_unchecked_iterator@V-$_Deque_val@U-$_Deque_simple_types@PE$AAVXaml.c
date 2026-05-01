/*
 * XREFs of ??$_Move_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x18025E0D4
 * Callers:
 *     ??$_Move_no_deprecate@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@00@Z @ 0x18025DFF8 (--$_Move_no_deprecate@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorer.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18025B55C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

_OWORD *__fastcall std::_Move_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 i; // r11
  _OWORD *result; // rax

  for ( i = a2[1]; i != *(_QWORD *)(a3 + 8); i = a2[1] )
  {
    __abi_winrt_ptr_assign(
      (__int64 *)(*(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((a4[1] >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL)))
                + 8 * (a4[1] & 1LL)),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((i >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL))) + 8 * (i & 1)));
    ++a4[1];
    ++a2[1];
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
