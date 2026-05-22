/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180097CE0
 * Callers:
 *     ?OnCursorDestroyed@SystemCursorService@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800964D0 (-OnCursorDestroyed@SystemCursorService@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?clear@?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180093508 (-clear@-$list@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$allocator@U-$pair@$$CB_K.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800940CC (-erase@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor@@@std@@V-$_Uhash_compare@_KU-$hash@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // r11
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *j; // rax
  _QWORD *v18; // r8
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v5);
  v7 = v5 & a1[6];
  v8 = a1[3];
  v9 = *(_QWORD **)(v8 + 16 * v7);
  v10 = 2 * v7;
  v11 = (_QWORD *)a1[1];
  v12 = v9;
  while ( 1 )
  {
    if ( v12 == v11 )
      v13 = (_QWORD *)a1[1];
    else
      v13 = **(_QWORD ***)(v8 + 8 * v10 + 8);
    if ( v9 == v13 )
      goto LABEL_18;
    if ( v9[2] == *a2 )
      break;
    v9 = (_QWORD *)*v9;
  }
  v14 = v9;
  v15 = v9;
  while ( 1 )
  {
    v16 = v12 == v11 ? (_QWORD *)a1[1] : **(_QWORD ***)(v8 + 16 * (v5 & a1[6]) + 8);
    if ( v9 == v16 || *a2 != v9[2] )
      break;
    v9 = (_QWORD *)*v9;
  }
  if ( v14 == v9 )
  {
LABEL_18:
    v15 = (_QWORD *)a1[1];
    v9 = v15;
  }
  for ( j = v15; j != v9; j = (_QWORD *)*j )
    ++v4;
  if ( v15 == (_QWORD *)*v11 && v9 == v11 )
  {
    std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::clear((__int64)(a1 + 1));
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v15 != v9 )
    {
      v18 = v15;
      v15 = (_QWORD *)*v15;
      std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::erase(
        a1,
        &v20,
        v18);
    }
  }
  return v4;
}
