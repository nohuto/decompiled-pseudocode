/*
 * XREFs of ?_Tidy@?$vector@V?$shared_ptr@VAltTabWindowHookData@@@std@@V?$allocator@V?$shared_ptr@VAltTabWindowHookData@@@std@@@2@@std@@AEAAXXZ @ 0x180083960
 * Callers:
 *     _dynamic_atexit_destructor_for__AltTabWindowHook::s_altTabHooks__ @ 0x1800AF8D0 (_dynamic_atexit_destructor_for__AltTabWindowHook--s_altTabHooks__.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void std::vector<std::shared_ptr<AltTabWindowHookData>>::_Tidy()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rdi
  std::_Ref_count_base *v2; // rcx

  v0 = (_QWORD *)AltTabWindowHook::s_altTabHooks;
  if ( AltTabWindowHook::s_altTabHooks )
  {
    v1 = (_QWORD *)xmmword_18050FDD8;
    if ( AltTabWindowHook::s_altTabHooks != (_QWORD)xmmword_18050FDD8 )
    {
      do
      {
        v2 = (std::_Ref_count_base *)v0[1];
        if ( v2 )
          std::_Ref_count_base::_Decref(v2);
        v0 += 2;
      }
      while ( v0 != v1 );
      v0 = (_QWORD *)AltTabWindowHook::s_altTabHooks;
    }
    std::_Deallocate<16,0>(
      v0,
      (const struct std::nothrow_t *)((*((_QWORD *)&xmmword_18050FDD8 + 1) - (_QWORD)v0) & 0xFFFFFFFFFFFFFFF0uLL));
    AltTabWindowHook::s_altTabHooks = 0LL;
    xmmword_18050FDD8 = 0LL;
  }
}
