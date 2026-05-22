/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x18003A148
 * Callers:
 *     ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039DD0 (-UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSy.c)
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800929B0 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?UnregisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x18009EBC0 (-UnregisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V32@@Z @ 0x18003A2A4 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUIS_ea_18003A2A4.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned __int64 i; // r8
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r10
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD **v11; // rdx
  _QWORD **v12; // r11
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 j; // rbp
  _QWORD *v19; // rcx
  _QWORD *v20; // rbx
  _QWORD *v21; // r8
  char v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v4);
  v6 = v4 & a1[6];
  v7 = 2 * v6;
  v8 = a1[3];
  v9 = *(_QWORD **)(v8 + 16 * v6);
  v10 = 2 * v6;
  v11 = (_QWORD **)a1[1];
  v12 = (_QWORD **)v9;
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
    v16 = v12 == v11 ? (_QWORD *)a1[1] : **(_QWORD ***)(v8 + 8 * v7 + 8);
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
  v17 = v15;
  for ( j = 0LL; v17 != v9; v17 = (_QWORD *)*v17 )
    ++j;
  v19 = *v11;
  if ( v15 == *v11 && v9 == v11 )
  {
    *v11 = v11;
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    if ( v19 != (_QWORD *)a1[1] )
    {
      do
      {
        v20 = (_QWORD *)*v19;
        operator delete(v19, (const struct std::nothrow_t *)0x18);
        v19 = v20;
      }
      while ( v20 != (_QWORD *)a1[1] );
    }
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v15 != v9 )
    {
      v21 = v15;
      v15 = (_QWORD *)*v15;
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
        a1,
        &v23,
        v21);
    }
  }
  return j;
}
