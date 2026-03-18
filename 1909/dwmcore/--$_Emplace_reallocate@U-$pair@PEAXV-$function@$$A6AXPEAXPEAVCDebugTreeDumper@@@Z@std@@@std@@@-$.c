/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@1@QEAU21@$$QEAU21@@Z @ 0x180172B40
 * Callers:
 *     ??$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z @ 0x180172948 (--$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@Z @ 0x180172A44 (--$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@.c)
 *     ??$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z @ 0x1801C09CC (--$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VCSpriteVisualContent@@@CDebugTreeDumper@@QEAAXPEAVCSpriteVisualContent@@_N@Z @ 0x1801C9654 (--$RegisterNodeForVisit@VCSpriteVisualContent@@@CDebugTreeDumper@@QEAAXPEAVCSpriteVisualContent@.c)
 *     ??$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z @ 0x1801FA668 (--$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z @ 0x1802178A4 (--$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V?$allocator@U?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@@2@@std@@AEAAXQEAU?$pair@PEAXV?$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@2@_K1@Z @ 0x180174084 (-_Change_array@-$vector@U-$pair@PEAXV-$function@$$A6AXPEAXPEAVCDebugTreeDumper@@@Z@std@@@std@@V-.c)
 *     ?_Reset_move@?$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z @ 0x180174524 (-_Reset_move@-$_Func_class@XPEAXPEAVCDebugTreeDumper@@@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::vector<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>::_Emplace_reallocate<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // rdi
  __int64 v5; // rdx
  const char *v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r14
  SIZE_T v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  __int64 (__fastcall ***v20)(_QWORD, __int64); // rcx
  __int64 v21; // rsi
  __int64 v22; // rbx

  v3 = a2;
  v5 = (__int64)a2 - *a1;
  v7 = (const char *)(a1[1] - *a1);
  v8 = v5 / 72;
  if ( (__int64)v7 / 72 == 0x38E38E38E38E38ELL )
    std::_Xlength_error(v7);
  v9 = (__int64)v7 / 72 + 1;
  v10 = (a1[2] - *a1) / 72LL;
  v11 = v10 >> 1;
  if ( v10 <= 0x38E38E38E38E38ELL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 72 * v12;
  if ( v12 > 0x38E38E38E38E38ELL )
    v13 = -1LL;
  v14 = 9 * v8;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  *(_QWORD *)(v15 + 72 * v8) = *a3;
  v16 = v15 + 72 * v8 + 8;
  *(_QWORD *)(v16 + 56) = 0LL;
  std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v16, a3 + 1);
  v17 = (_QWORD *)a1[1];
  v18 = (_QWORD *)*a1;
  if ( v3 == v17 )
  {
    if ( v18 != v17 )
    {
      v19 = (_QWORD *)(v15 + 64);
      do
      {
        *(v19 - 8) = *v18;
        *v19 = 0LL;
        v20 = (__int64 (__fastcall ***)(_QWORD, __int64))v18[8];
        if ( v20 )
          *v19 = (**v20)(v20, (__int64)(v19 - 7));
        v19 += 9;
        v18 += 9;
      }
      while ( v18 != v17 );
    }
  }
  else
  {
    if ( v18 != v3 )
    {
      v21 = v15 + 8;
      do
      {
        *(_QWORD *)(v21 - 8) = *v18;
        *(_QWORD *)(v21 + 56) = 0LL;
        std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v21, v18 + 1);
        v21 += 72LL;
        v18 += 9;
      }
      while ( v18 != v3 );
      v17 = (_QWORD *)a1[1];
    }
    if ( v3 != v17 )
    {
      v22 = v15 + 8 * v14 + 80;
      do
      {
        *(_QWORD *)(v22 - 8) = *v3;
        *(_QWORD *)(v22 + 56) = 0LL;
        std::_Func_class<void,void *,CDebugTreeDumper *>::_Reset_move(v22, v3 + 1);
        v3 += 9;
        v22 += 72LL;
      }
      while ( v3 != v17 );
    }
  }
  std::vector<std::pair<void *,std::function<void (void *,CDebugTreeDumper *)>>>::_Change_array(a1, v15, v9, v12);
  return *a1 + 8 * v14;
}
