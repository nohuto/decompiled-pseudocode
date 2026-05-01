/*
 * XREFs of ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_38da9a343bc3123aac8a9a1bc66a1660_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@U_Nil@wistd@@U67@U67@U67@U67@@wistd@@@details@2@XJPEAUITitleBarFactory@Experience@Shell@Internal@Windows@@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@@wistd@@UEAAPEAXI@Z @ 0x1801F6F50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_38da9a343bc3123aac8a9a1bc66a1660_,0>,wistd::details::function_allocator<wistd::_Func_class<void,long,Windows::Internal::Shell::Experience::ITitleBarFactory *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,long,Windows::Internal::Shell::Experience::ITitleBarFactory *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::_Func_base<void,_SEB_EVENT_HEADER const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
