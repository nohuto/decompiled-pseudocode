/*
 * XREFs of ?_Destroy@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXPEAV?$function@$$A6AX_N@Z@2@0@Z @ 0x18007C7B0
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::catch$40 @ 0x18007BD52 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_18007BD52.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028AE4 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::vector<std::function<void (bool)>>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy(v4, a2);
      v4 += 64LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
