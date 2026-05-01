/*
 * XREFs of ?erase@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@2@@Z @ 0x18041B048
 * Callers:
 *     ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x18041A850 (-UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180216A2C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::vector<std::wstring>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 32;
  if ( a3 + 32 != v3 )
  {
    do
    {
      std::wstring::operator=(v4 - 32, v4);
      v4 += 32LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
  }
  std::wstring::_Tidy_deallocate((_QWORD *)(v3 - 32));
  *(_QWORD *)(a1 + 8) -= 32LL;
  result = a2;
  *a2 = a3;
  return result;
}
