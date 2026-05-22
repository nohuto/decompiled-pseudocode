/*
 * XREFs of std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry_________lambda_9da3396ebc25e95470d6e1666dc7fe96___ @ 0x180058BBC
 * Callers:
 *     ?FindView@ViewHierarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@V?$function@$$A6A_NPEAUIMonitorView@Server@Navigation@@@Z@std@@@Z @ 0x180059180 (-FindView@ViewHierarchy@@UEBA-AV-$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@V-$fun.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry_________lambda_9da3396ebc25e95470d6e1666dc7fe96___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  _QWORD *result; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  while ( a2 != a3 )
  {
    v8 = *(_QWORD *)(a4 + 56);
    v10 = a2[3];
    if ( !v8 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 16LL))(v8, &v10) )
      break;
    a2 = (_QWORD *)*a2;
  }
  result = a1;
  *a1 = a2;
  return result;
}
