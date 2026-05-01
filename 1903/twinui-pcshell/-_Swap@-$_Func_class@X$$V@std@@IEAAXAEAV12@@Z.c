/*
 * XREFs of ?_Swap@?$_Func_class@X$$V@std@@IEAAXAEAV12@@Z @ 0x1802EEF18
 * Callers:
 *     std::function_void___cdecl(void)_::operator___lambda_0c35f08fa008bd0bd75f4471027a7740__void_ @ 0x1802EB3BC (std--function_void___cdecl(void)_--operator___lambda_0c35f08fa008bd0bd75f4471027a7740__void_.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801AAFE4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x1802545F0 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::_Func_class<void,>::_Swap(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  _BYTE v7[56]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+68h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 == a1 || (result = *(_QWORD *)(a2 + 56), result == a2) )
  {
    v8 = 0LL;
    std::_Func_class<void,>::_Reset_move((__int64)v7, a1);
    std::_Func_class<void,>::_Reset_move(a1, a2);
    std::_Func_class<void,>::_Reset_move(a2, (__int64)v7);
    return std::_Func_class<void,>::_Tidy((__int64)v7, v6);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = result;
    *(_QWORD *)(a2 + 56) = v4;
  }
  return result;
}
