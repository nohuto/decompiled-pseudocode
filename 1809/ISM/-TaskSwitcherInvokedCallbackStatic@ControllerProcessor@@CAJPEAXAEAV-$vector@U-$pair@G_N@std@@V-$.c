/*
 * XREFs of ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180033860
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180036504 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180036EF4 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180037A48 (-erase@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::TaskSwitcherInvokedCallbackStatic(
        ControllerProcessor *this,
        __int64 *a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r8
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD **v13; // rdx
  _QWORD **v14; // r9
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 j; // r15
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  _QWORD *v23; // r8
  int v24; // ebx
  int updated; // eax
  __int64 v26; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int16 v29; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 869) )
  {
    v5 = *a2;
    if ( !a3 )
      goto LABEL_39;
    v29 = 208;
    v6 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 2; ++i )
      v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v29 + i) ^ (unsigned __int64)v6);
    v8 = v6 & *((_QWORD *)this + 13);
    v9 = 2 * v8;
    v10 = *((_QWORD *)this + 10);
    v11 = *(_QWORD **)(v10 + 16 * v8);
    v12 = 2 * v8;
    v13 = (_QWORD **)*((_QWORD *)this + 8);
    v14 = (_QWORD **)v11;
    while ( 1 )
    {
      if ( v14 == v13 )
        v15 = (_QWORD *)*((_QWORD *)this + 8);
      else
        v15 = **(_QWORD ***)(v10 + 8 * v12 + 8);
      if ( v11 == v15 )
        goto LABEL_20;
      if ( *((_WORD *)v11 + 8) == 208 )
        break;
      v11 = (_QWORD *)*v11;
    }
    v16 = v11;
    v17 = v11;
    while ( 1 )
    {
      v18 = v14 == v13 ? (_QWORD *)*((_QWORD *)this + 8) : **(_QWORD ***)(v10 + 8 * v9 + 8);
      if ( v11 == v18 || *((_WORD *)v11 + 8) != 208 )
        break;
      v11 = (_QWORD *)*v11;
    }
    if ( v16 == v11 )
    {
LABEL_20:
      v17 = (_QWORD *)*((_QWORD *)this + 8);
      v11 = v17;
    }
    v19 = v17;
    for ( j = 0LL; v19 != v11; v19 = (_QWORD *)*v19 )
      ++j;
    v21 = *v13;
    if ( v17 == *v13 && v11 == v13 )
    {
      *v13 = v13;
      *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) = *((_QWORD *)this + 8);
      *((_QWORD *)this + 9) = 0LL;
      if ( v21 != *((_QWORD **)this + 8) )
      {
        do
        {
          v22 = (_QWORD *)*v21;
          operator delete(v21, (const struct std::nothrow_t *)0x18);
          v21 = v22;
        }
        while ( v22 != *((_QWORD **)this + 8) );
      }
      std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
        (_QWORD *)this + 7,
        8LL);
    }
    else
    {
      while ( v17 != v11 )
      {
        v23 = v17;
        v17 = (_QWORD *)*v17;
        std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::erase(
          (char *)this + 56,
          &v29,
          v23);
      }
    }
    if ( !j )
    {
      v24 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)0x80004005LL);
LABEL_42:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x147,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v24);
      return (unsigned int)v24;
    }
    updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
    v24 = updated;
    if ( updated < 0 )
    {
      v26 = 348LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_41;
    }
    updated = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xD0u, 0);
    v24 = updated;
    if ( updated < 0 )
    {
      v26 = 349LL;
      goto LABEL_34;
    }
LABEL_39:
    while ( v5 != a2[1] )
    {
      updated = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, *(_WORD *)v5, *(_BYTE *)(v5 + 2));
      v24 = updated;
      if ( updated < 0 )
      {
        v26 = 360LL;
        goto LABEL_34;
      }
      v5 += 4LL;
    }
  }
  v24 = 0;
LABEL_41:
  if ( v24 < 0 )
    goto LABEL_42;
  return 0LL;
}
