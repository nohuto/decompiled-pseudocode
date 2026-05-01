/*
 * XREFs of ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x1801B4370
 * Callers:
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1801B458C (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1801B66FC (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x1801B6734 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

unsigned __int64 __fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(
        char **a1,
        char *a2,
        __int64 a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  size_t v10; // rcx
  unsigned __int64 v11; // r9
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi
  char *v14; // r9
  char *v15; // r8
  char *v16; // rdx
  _QWORD *v17; // rcx
  signed __int64 v18; // rdx
  _QWORD *v19; // rcx
  signed __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 result; // rax
  void *v25; // [rsp+20h] [rbp-48h]
  _QWORD *v26; // [rsp+70h] [rbp+8h]
  _QWORD *v27; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v7 + 1);
  v10 = 32 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v25 = v12;
  v13 = v6 & 0xFFFFFFFFFFFFFFE0uLL;
  v14 = (char *)v12 + v13;
  v27 = (_QWORD *)((char *)v12 + v13 + 32);
  try
  {
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *(_OWORD *)v14 = *(_OWORD *)a3;
    *((_OWORD *)v14 + 1) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 7LL;
    *(_WORD *)a3 = 0;
    v26 = (_QWORD *)((char *)v12 + v13);
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      if ( v16 != v15 )
      {
        v17 = v12 + 3;
        v18 = v16 - (char *)v12;
        do
        {
          *(v17 - 1) = 0LL;
          *v17 = 0LL;
          *(_OWORD *)(v17 - 3) = *(_OWORD *)((char *)v17 + v18 - 24);
          *(_OWORD *)(v17 - 1) = *(_OWORD *)((char *)v17 + v18 - 8);
          *(_QWORD *)((char *)v17 + v18 - 8) = 0LL;
          *(_QWORD *)((char *)v17 + v18) = 7LL;
          *(_WORD *)((char *)v17 + v18 - 24) = 0;
          v17 += 4;
        }
        while ( (char *)v17 + v18 - 24 != v15 );
      }
    }
    else
    {
      if ( v16 != a2 )
      {
        v19 = v12 + 3;
        v20 = v16 - (char *)v12;
        do
        {
          *(v19 - 1) = 0LL;
          *v19 = 0LL;
          *(_OWORD *)(v19 - 3) = *(_OWORD *)((char *)v19 + v20 - 24);
          *(_OWORD *)(v19 - 1) = *(_OWORD *)((char *)v19 + v20 - 8);
          *(_QWORD *)((char *)v19 + v20 - 8) = 0LL;
          *(_QWORD *)((char *)v19 + v20) = 7LL;
          *(_WORD *)((char *)v19 + v20 - 24) = 0;
          v19 += 4;
        }
        while ( (char *)v19 + v20 - 24 != a2 );
        v15 = a1[1];
      }
      v26 = v12;
      if ( a2 != v15 )
      {
        v21 = v14 + 56;
        v22 = &a2[-v13] - (char *)v12;
        do
        {
          *(v21 - 1) = 0LL;
          *v21 = 0LL;
          *(_OWORD *)(v21 - 3) = *(_OWORD *)((char *)v21 + v22 - 56);
          *(_OWORD *)(v21 - 1) = *(_OWORD *)((char *)v21 + v22 - 40);
          *(_QWORD *)((char *)v21 + v22 - 40) = 0LL;
          *(_QWORD *)((char *)v21 + v22 - 32) = 7LL;
          *(_WORD *)((char *)v21 + v22 - 56) = 0;
          v21 += 4;
        }
        while ( (char *)v21 + v22 - 56 != v15 );
      }
    }
    std::vector<std::wstring>::_Change_array(a1, v12, v8, v9);
    result = (unsigned __int64)&(*a1)[v13];
  }
  catch ( ... )
  {
    std::vector<std::wstring>::_Destroy(v23, v26, v27);
    std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)(32 * v9));
    throw;
  }
  return result;
}
