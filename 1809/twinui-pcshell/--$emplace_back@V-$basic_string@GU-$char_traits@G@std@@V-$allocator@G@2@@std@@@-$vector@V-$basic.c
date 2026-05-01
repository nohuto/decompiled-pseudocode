/*
 * XREFs of ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x180183FD0
 * Callers:
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x180186B60 (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?LoadPinnedAppsFromRegistry@VirtualPinnedAppsHandler@@AEAAXXZ @ 0x180391AC8 (-LoadPinnedAppsFromRegistry@VirtualPinnedAppsHandler@@AEAAXXZ.c)
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180391C10 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<std::wstring>::emplace_back<std::wstring>(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == v3 )
    return std::vector<std::wstring>::_Emplace_reallocate<std::wstring>((char **)a1, (char *)v3, a2);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_OWORD *)v3 = *(_OWORD *)a2;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 32;
  return result;
}
