/*
 * XREFs of std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_d7a2e9ce7dbc93133989b34b2e12210d__void_ @ 0x180217700
 * Callers:
 *     ??$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z @ 0x1802178A4 (--$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180174524 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x18017457C (-_Tidy@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::function_void___cdecl_void___CDebugTreeDumper____::operator___lambda_d7a2e9ce7dbc93133989b34b2e12210d__void_(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD v5[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v6[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v7; // [rsp+98h] [rbp-20h]

  v7 = 0LL;
  v5[0] = off_180279038;
  v5[7] = v5;
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move((__int64)v6, (__int64)v5);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move((__int64)v5, a1);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(a1, (__int64)v6);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy((__int64)v6, v2);
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy((__int64)v5, v3);
  return a1;
}
