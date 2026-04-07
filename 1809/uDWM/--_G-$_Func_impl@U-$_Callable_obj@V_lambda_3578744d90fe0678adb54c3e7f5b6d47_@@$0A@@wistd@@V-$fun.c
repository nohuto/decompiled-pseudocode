/*
 * XREFs of ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_3578744d90fe0678adb54c3e7f5b6d47_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@XAEBHU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@@details@2@XAEBHU_Nil@2@U52@U52@U52@U52@U52@@wistd@@UEAAPEAXI@Z @ 0x18004DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTableData@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x18003B4A0 (-FreeTableData@-$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_G.c)
 */

struct _RTL_GENERIC_TABLE *__fastcall wistd::_Func_impl<wistd::_Callable_obj<_lambda_3578744d90fe0678adb54c3e7f5b6d47_,0>,wistd::details::function_allocator<wistd::_Func_class<void,int const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,void,int const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`scalar deleting destructor'(
        struct _RTL_GENERIC_TABLE *Buffer,
        char a2)
{
  Buffer->TableRoot = (PRTL_SPLAY_LINKS)&wistd::_Func_base<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
  if ( (a2 & 1) != 0 )
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData(Buffer, Buffer);
  return Buffer;
}
