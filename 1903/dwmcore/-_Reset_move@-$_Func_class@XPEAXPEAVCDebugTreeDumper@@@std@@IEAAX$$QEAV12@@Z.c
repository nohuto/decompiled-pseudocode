/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180175C94
 * Callers:
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_c03835fc5c7dc0aa41433fd397421b59__void_ @ 0x180173A38 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_c03835fc5c7dc0aa41433f.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_fab49bea0c152df40203ec606f021e9f__void_ @ 0x180173AD0 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_fab49bea0c152df40203ec.c)
 *     ??$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z @ 0x180174098 (--$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@Z @ 0x180174194 (--$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@.c)
 *     ??$_Emplace_reallocate@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@1@QEAU21@$$QEAU21@@Z @ 0x180174290 (--$_Emplace_reallocate@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@-$.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_ea5334e7435b0bbc38160b55b647b03d__void_ @ 0x1801C1E08 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_ea5334e7435b0bbc38160b.c)
 *     ??$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z @ 0x1801C219C (--$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_62e64e60f9736b2b6195c9f34efcaa56__void_ @ 0x1801CAC50 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_62e64e60f9736b2b6195c9.c)
 *     ??$RegisterNodeForVisit@VCSpriteVisualContent@@@CDebugTreeDumper@@QEAAXPEAVCSpriteVisualContent@@_N@Z @ 0x1801CADF4 (--$RegisterNodeForVisit@VCSpriteVisualContent@@@CDebugTreeDumper@@QEAAXPEAVCSpriteVisualContent@.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_603f181036d0da53b7b505f826c78df9__void_ @ 0x1801FBB60 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_603f181036d0da53b7b505.c)
 *     ??$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z @ 0x1801FBD58 (--$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_d7a2e9ce7dbc93133989b34b2e12210d__void_ @ 0x180218DF0 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_d7a2e9ce7dbc93133989b3.c)
 *     ??$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z @ 0x180218F94 (--$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x180175CEC (-_Tidy@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ.c)
 */

void __fastcall std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy(a2);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
