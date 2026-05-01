/*
 * XREFs of ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801D5DF0
 * Callers:
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801D5A18 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180085294 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x1801D5CDC (-_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x1801D628C (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

_OWORD *__fastcall RetailDemoExperienceManager::_ParseScreenRect(_OWORD *a1, __int64 a2)
{
  const wchar_t *v4; // rcx
  char v5; // bl
  unsigned int v6; // esi
  unsigned int v7; // r14d
  const wchar_t *v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-30h]
  _QWORD v11[4]; // [rsp+30h] [rbp-20h] BYREF
  DWORD pdwDefaultLayout; // [rsp+70h] [rbp+20h] BYREF

  pdwDefaultLayout = 0;
  GetProcessDefaultLayout(&pdwDefaultLayout);
  v10 = 0uLL;
  RetailDemoExperienceManager::_SplitString(v11, a2, 44LL);
  v4 = (const wchar_t *)v11[0];
  if ( ((v11[1] - v11[0]) & 0xFFFFFFFFFFFFFFE0uLL) == 0x80 )
  {
    if ( pdwDefaultLayout == 1 )
    {
      v5 = 1;
      v4 = (const wchar_t *)(v11[0] + 64LL);
    }
    else
    {
      v5 = 0;
    }
    v6 = RetailDemoExperienceManager::_ParseScreenInt(v4, 1, v5);
    v7 = RetailDemoExperienceManager::_ParseScreenInt((const wchar_t *)(v11[0] + 32LL), 0, 0);
    v8 = (const wchar_t *)v11[0];
    if ( pdwDefaultLayout != 1 )
    {
      v8 = (const wchar_t *)(v11[0] + 64LL);
      v5 = 0;
    }
    *(_QWORD *)&v10 = __PAIR64__(v7, v6);
    DWORD2(v10) = RetailDemoExperienceManager::_ParseScreenInt(v8, 1, v5);
    HIDWORD(v10) = RetailDemoExperienceManager::_ParseScreenInt((const wchar_t *)(v11[0] + 96LL), 0, 0);
  }
  *a1 = v10;
  std::vector<std::wstring>::_Tidy((__int64)v11);
  return a1;
}
