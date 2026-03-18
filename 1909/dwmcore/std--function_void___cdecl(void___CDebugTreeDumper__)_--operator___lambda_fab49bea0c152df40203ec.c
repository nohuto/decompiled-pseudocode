/*
 * XREFs of std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_fab49bea0c152df40203ec606f021e9f__void_ @ 0x180172380
 * Callers:
 *     ??$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@Z @ 0x180172A44 (--$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180174524 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x18017457C (-_Tidy@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::function_void___cdecl_void___CDebugTreeDumper____::operator___lambda_fab49bea0c152df40203ec606f021e9f__void_(
        __int64 a1)
{
  _QWORD v3[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v4[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v5; // [rsp+98h] [rbp-20h]

  v5 = 0LL;
  v3[0] = off_180271290;
  v3[7] = v3;
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v4, v3);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v3, a1);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(a1, v4);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy(v4);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy(v3);
  return a1;
}
