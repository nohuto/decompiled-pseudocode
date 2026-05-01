/*
 * XREFs of ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x1802A44C0
 * Callers:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180299870 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x180076600 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Swap@?$_Func_class@X_N@std@@IEAAXAEAV12@@Z @ 0x1802A46FC (-_Swap@-$_Func_class@X_N@std@@IEAAXAEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowReadyState::SetCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _BYTE v8[56]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+68h] [rbp-20h]

  v3 = a1 + 40;
  v9 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
    v9 = (**v4)(v4, v8);
  std::_Func_class<void,bool>::_Swap(v8, v3);
  std::_Func_class<void,bool>::_Tidy((__int64)v8, v5);
  return std::_Func_class<void,bool>::_Tidy(a2, v6);
}
