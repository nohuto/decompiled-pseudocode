/*
 * XREFs of ??$_Buynode@U?$pair@PEBGPEBG@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x180051B64
 * Callers:
 *     ?RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4ActionServices@Actions@CreativeFramework@@AEBUActionContext@78@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18004EA68 (-RuntimeClassInitialize@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Wind.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800333A0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800443EC (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$alloca_ea_1800443EC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        char **a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r14
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
  v13 = v3;
  v5 = 0LL;
  *((_WORD *)v3 + 12) = 0;
  v6 = v3 + 4;
  v7 = *a2;
  v3[7] = 7LL;
  v3[6] = 0LL;
  *((_WORD *)v3 + 16) = 0;
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
    std::wstring::assign(v3 + 4, v7, v9);
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
