/*
 * XREFs of ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x18017457C
 * Callers:
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_c03835fc5c7dc0aa41433fd397421b59__void_ @ 0x1801722E8 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_c03835fc5c7dc0aa41433f.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_fab49bea0c152df40203ec606f021e9f__void_ @ 0x180172380 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_fab49bea0c152df40203ec.c)
 *     ??$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z @ 0x180172948 (--$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@Z @ 0x180172A44 (--$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@.c)
 *     ?_Change_array@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@AEAAXQEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@2@_K1@Z @ 0x180174084 (-_Change_array@-$vector@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V-.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180174524 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_ea5334e7435b0bbc38160b55b647b03d__void_ @ 0x1801C0638 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_ea5334e7435b0bbc38160b.c)
 *     ??$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z @ 0x1801C09CC (--$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_62e64e60f9736b2b6195c9f34efcaa56__void_ @ 0x1801C94B0 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_62e64e60f9736b2b6195c9.c)
 *     ??$RegisterNodeForVisit@VCSpriteVisualContent@@@CDebugTreeDumper@@QEAAXPEAVCSpriteVisualContent@@_N@Z @ 0x1801C9654 (--$RegisterNodeForVisit@VCSpriteVisualContent@@@CDebugTreeDumper@@QEAAXPEAVCSpriteVisualContent@.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_603f181036d0da53b7b505f826c78df9__void_ @ 0x1801FA470 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_603f181036d0da53b7b505.c)
 *     ??$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z @ 0x1801FA668 (--$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_d7a2e9ce7dbc93133989b34b2e12210d__void_ @ 0x180217700 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_d7a2e9ce7dbc93133989b3.c)
 *     ??$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z @ 0x1802178A4 (--$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
