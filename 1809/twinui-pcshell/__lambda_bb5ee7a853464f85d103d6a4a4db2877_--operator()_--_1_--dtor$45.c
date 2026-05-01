/*
 * XREFs of __lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator()_::_1_::dtor$45 @ 0x18026CAEB
 * Callers:
 *     <none>
 * Callees:
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180081258 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 */

__int64 __fastcall _lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator()_::_1_::dtor_45(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 0x20;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~0x20u;
    return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
