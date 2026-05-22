/*
 * XREFs of ?_Swap@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXAEAV12@@Z @ 0x180034598
 * Callers:
 *     ?Initialize@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@@Z @ 0x180032388 (-Initialize@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSessio.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x180034540 (-_Reset_move@-$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ @ 0x1800346A0 (-_Tidy@-$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Swap(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  _BYTE v6[56]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+68h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 == a1 || (result = *(_QWORD *)(a2 + 56), result == a2) )
  {
    v7 = 0LL;
    std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Reset_move((__int64)v6, a1);
    std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Reset_move(a1, a2);
    std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Reset_move(a2, (__int64)v6);
    return std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Tidy(v6);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = result;
    *(_QWORD *)(a2 + 56) = v4;
  }
  return result;
}
