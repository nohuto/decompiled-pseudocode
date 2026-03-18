/*
 * XREFs of ??$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z @ 0x1802178A4
 * Callers:
 *     ??$AddLinkInternal@VCGdiSpriteBitmap@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCGdiSpriteBitmap@@_N@Z @ 0x180217798 (--$AddLinkInternal@VCGdiSpriteBitmap@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@1@QEAU21@$$QEAU21@@Z @ 0x180172B40 (--$_Emplace_reallocate@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@-$.c)
 *     ??$_Insert_nohint@AEB_JU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_J@std@@@std@@@std@@_N@1@_NAEB_JU_Not_a_node_tag@1@@Z @ 0x18017335C (--$_Insert_nohint@AEB_JU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@_JU-$less@_J@std@@V-$alloc.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180174524 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ @ 0x18017457C (-_Tidy@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAXXZ.c)
 *     ?count@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QEBA_KAEB_J@Z @ 0x1801746F0 (-count@-$_Tree@V-$_Tset_traits@_JU-$less@_J@std@@V-$allocator@_J@2@$0A@@std@@@std@@QEBA_KAEB_J@Z.c)
 *     std::function_void___cdecl(void___CDebugTreeDumper__)_::operator___lambda_d7a2e9ce7dbc93133989b34b2e12210d__void_ @ 0x180217700 (std--function_void___cdecl(void___CDebugTreeDumper__)_--operator___lambda_d7a2e9ce7dbc93133989b3.c)
 */

__int64 __fastcall CDebugTreeDumper::RegisterNodeForVisit<CGdiSpriteBitmap>(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // [rsp+38h] [rbp-71h] BYREF
  char v11[16]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v12; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v13[56]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v14; // [rsp+90h] [rbp-19h]
  _BYTE v15[56]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, _BYTE *); // [rsp+D8h] [rbp+2Fh]

  v2 = a2;
  v10 = a2;
  result = std::_Tree<std::_Tset_traits<__int64,std::less<__int64>,std::allocator<__int64>,0>>::count(
             (__int64)(a1 + 3),
             &v10);
  if ( !result )
  {
    v16 = 0LL;
    std::function_void___cdecl_void___CDebugTreeDumper____::operator___lambda_d7a2e9ce7dbc93133989b34b2e12210d__void_((__int64)v15);
    std::_Tree<std::_Tset_traits<__int64,std::less<__int64>,std::allocator<__int64>,0>>::_Insert_nohint<__int64 const &,std::_Not_a_node_tag>(
      (__int64)(a1 + 3),
      (__int64)v11,
      v5,
      &v10);
    v14 = 0LL;
    v12 = v2;
    if ( v16 )
    {
      v6 = (**v16)(v16, v13);
      v2 = v12;
      v14 = v6;
    }
    v7 = (__int64 *)a1[6];
    if ( (__int64 *)a1[7] == v7 )
    {
      std::vector<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>::_Emplace_reallocate<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>(
        a1 + 5,
        v7,
        &v12);
    }
    else
    {
      *v7 = v2;
      v7[8] = 0LL;
      std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move((__int64)(v7 + 1), (__int64)v13);
      a1[6] += 72LL;
    }
    std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy((__int64)v13, v8);
    return std::_Func_class<void,void *,CDebugTreeDumper *>::_Tidy((__int64)v15, v9);
  }
  return result;
}
