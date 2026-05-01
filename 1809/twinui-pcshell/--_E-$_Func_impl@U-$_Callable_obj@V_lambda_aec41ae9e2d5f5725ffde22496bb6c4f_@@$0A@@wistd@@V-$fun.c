/*
 * XREFs of ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_aec41ae9e2d5f5725ffde22496bb6c4f_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XW4RegistryChangeKind@wil@@U_Nil@wistd@@U34@U34@U34@U34@U34@@wistd@@@details@2@XW4RegistryChangeKind@wil@@U_Nil@2@U72@U72@U72@U72@U72@@wistd@@UEAAPEAXI@Z @ 0x1800939E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_aec41ae9e2d5f5725ffde22496bb6c4f_,0>,wistd::details::function_allocator<wistd::_Func_class<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
