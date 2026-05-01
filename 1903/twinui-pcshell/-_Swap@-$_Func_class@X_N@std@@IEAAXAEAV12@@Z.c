/*
 * XREFs of ?_Swap@?$_Func_class@X_N@std@@IEAAXAEAV12@@Z @ 0x1802A46FC
 * Callers:
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x1802A44C0 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x180034F68 (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x180076600 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

__int64 __fastcall std::_Func_class<void,bool>::_Swap(__int64 a1, __int64 a2)
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
    std::_Func_class<void,bool>::_Reset_move((__int64)v7, a1);
    std::_Func_class<void,bool>::_Reset_move(a1, a2);
    std::_Func_class<void,bool>::_Reset_move(a2, (__int64)v7);
    return std::_Func_class<void,bool>::_Tidy((__int64)v7, v6);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = result;
    *(_QWORD *)(a2 + 56) = v4;
  }
  return result;
}
