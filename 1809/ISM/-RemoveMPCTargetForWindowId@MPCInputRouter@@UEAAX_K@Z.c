/*
 * XREFs of ?RemoveMPCTargetForWindowId@MPCInputRouter@@UEAAX_K@Z @ 0x180007180
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@std@@@std@@@2@@Z @ 0x180008BC0 (-erase@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::RemoveMPCTargetForWindowId(MPCInputRouter *this, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 i; // r8
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r8
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD **v11; // rdx
  _QWORD **v12; // r10
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rbx
  _QWORD *v19; // r8
  _QWORD *v20; // [rsp+40h] [rbp+8h] BYREF
  __int64 v21; // [rsp+48h] [rbp+10h]

  v21 = a2;
  v3 = (_QWORD *)((char *)this + 136);
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)&v21 + i) ^ (unsigned __int64)v4);
  v6 = v4 & v3[6];
  v7 = 2 * v6;
  v8 = v3[3];
  v9 = *(_QWORD **)(v8 + 16 * v6);
  v10 = 2 * v6;
  v11 = (_QWORD **)v3[1];
  v12 = (_QWORD **)v9;
  while ( 1 )
  {
    if ( v12 == v11 )
      v13 = (_QWORD *)v3[1];
    else
      v13 = **(_QWORD ***)(v8 + 8 * v10 + 8);
    if ( v9 == v13 )
      goto LABEL_18;
    if ( v9[2] == a2 )
      break;
    v9 = (_QWORD *)*v9;
  }
  v14 = v9;
  v15 = v9;
  while ( 1 )
  {
    v16 = v12 == v11 ? (_QWORD *)v3[1] : **(_QWORD ***)(v8 + 8 * v7 + 8);
    if ( v9 == v16 || a2 != v9[2] )
      break;
    v9 = (_QWORD *)*v9;
  }
  if ( v14 == v9 )
  {
LABEL_18:
    v15 = (_QWORD *)v3[1];
    v9 = v15;
  }
  v20 = v15;
  v17 = *v11;
  if ( v15 == *v11 && v9 == v11 )
  {
    *v11 = v11;
    *(_QWORD *)(v3[1] + 8LL) = v3[1];
    v3[2] = 0LL;
    if ( v17 != (_QWORD *)v3[1] )
    {
      do
      {
        v18 = (_QWORD *)*v17;
        operator delete(v17, (const struct std::nothrow_t *)0x20);
        v17 = v18;
      }
      while ( v18 != (_QWORD *)v3[1] );
    }
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      v3,
      8LL);
  }
  else
  {
    while ( v15 != v9 )
    {
      v19 = v15;
      v15 = (_QWORD *)*v15;
      std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::erase(
        v3,
        &v20,
        v19);
    }
  }
}
