/*
 * XREFs of ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@@details@2@_NPEAX_KPEAX_KIU_Nil@2@U52@@wistd@@UEAAPEAXI@Z @ 0x180006E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_2f784ef15c303f2c8d3bec493a729414_,0>,wistd::details::function_allocator<wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>>,bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
