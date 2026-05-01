/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@VAltTabWindowHookData@@@2@_K1@Z @ 0x1802E989C
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@VAltTabWindowHookData@@@std@@@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VAltTabWindowHookData@@@1@QEAV21@AEAV21@@Z @ 0x1802E7110 (--$_Emplace_reallocate@AEAV-$shared_ptr@VAltTabWindowHookData@@@std@@@-$vector@V-$shared_ptr@VAl.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::shared_ptr<AltTabWindowHookData>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v8; // r14
  std::_Ref_count_base *v9; // rcx

  v4 = (_QWORD *)AltTabWindowHook::s_altTabHooks;
  if ( AltTabWindowHook::s_altTabHooks )
  {
    v8 = (_QWORD *)xmmword_18059A188;
    if ( AltTabWindowHook::s_altTabHooks != (_QWORD)xmmword_18059A188 )
    {
      do
      {
        v9 = (std::_Ref_count_base *)v4[1];
        if ( v9 )
          std::_Ref_count_base::_Decref(v9);
        v4 += 2;
      }
      while ( v4 != v8 );
      v4 = (_QWORD *)AltTabWindowHook::s_altTabHooks;
    }
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)&xmmword_18059A188 + 1) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  AltTabWindowHook::s_altTabHooks = a2;
  *((_QWORD *)&xmmword_18059A188 + 1) = a2 + 16 * a4;
  *(_QWORD *)&xmmword_18059A188 = a2 + 16 * a3;
}
