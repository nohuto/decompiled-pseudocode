/*
 * XREFs of ??$_Buynode@U?$pair@PEA_WPEA_W@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@PEA_WPEA_W@1@@Z @ 0x180081CB8
 * Callers:
 *     ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008161C (-GetActionService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@CreativeF.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@XZ @ 0x180081EE8 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allo_ea_180081EE8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<wchar_t *,wchar_t *>>(
        __int64 a1,
        char **a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rdi
  char *v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  _QWORD *v10; // rcx
  char *v11; // rdx
  void *v13; // [rsp+58h] [rbp+10h]

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(a1);
  v4 = v3;
  v13 = (void *)v3;
  v5 = 0LL;
  *(_WORD *)(v3 + 24) = 0;
  v6 = (_QWORD *)(v3 + 32);
  v7 = *a2;
  *(_QWORD *)(v3 + 56) = 7LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_WORD *)(v3 + 32) = 0;
  v8 = -1LL;
  if ( *(_WORD *)v7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)&v7[2 * v9] );
  }
  else
  {
    v9 = 0LL;
  }
  try
  {
    std::wstring::assign((_QWORD *)(v3 + 32), v7, v9);
    v10 = v6 + 4;
    v11 = a2[1];
    v6[7] = 7LL;
    v6[6] = 0LL;
    *((_WORD *)v6 + 16) = 0;
    if ( *(_WORD *)v11 )
    {
      do
        ++v8;
      while ( *(_WORD *)&v11[2 * v8] );
      v5 = v8;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      (__int64)v10,
      v13);
    throw;
  }
  std::wstring::assign(v10, v11, v5);
  return v4;
}
