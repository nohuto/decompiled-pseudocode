/*
 * XREFs of ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180033D68
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003031C (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180053A30 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKG@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKG@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@1@@Z @ 0x180037E0C (--$_Insert@AEAU-$pair@$$CBKG@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types.c)
 *     ??$_Buynode@AEBKAEAG@?$_List_buy@U?$pair@$$CBKG@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKG@std@@PEAX@1@PEAU21@0AEBKAEAG@Z @ 0x180038254 (--$_Buynode@AEBKAEAG@-$_List_buy@U-$pair@$$CBKG@std@@V-$allocator@U-$pair@$$CBKG@std@@@2@@std@@Q.c)
 */

__int64 __fastcall ControllerProcessor::SetControllerVirtualKeyMappingFor(__int64 a1, __int16 a2)
{
  __int64 v2; // rcx
  unsigned __int64 i; // r8
  __int64 v4; // rax
  __int64 v5; // r10
  _DWORD *j; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rdx
  _DWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v13[32]; // [rsp+38h] [rbp-20h] BYREF
  __int16 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v12[0] = 8;
  v2 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v4 = *((unsigned __int8 *)v12 + i);
    v2 = 0x100000001B3LL * (v4 ^ v2);
  }
  v5 = 2 * (qword_180193CC0 & v2);
  for ( j = *(_DWORD **)(qword_180193CA8 + 16 * (qword_180193CC0 & v2)); ; j = *(_DWORD **)j )
  {
    v7 = *(void **)(qword_180193CA8 + 8 * v5) == qword_180193C98
       ? qword_180193C98
       : **(_DWORD ***)(qword_180193CA8 + 8 * v5 + 8);
    if ( j == v7 )
      break;
    if ( j[4] == 8 )
      goto LABEL_11;
  }
  j = qword_180193C98;
LABEL_11:
  if ( j == qword_180193C98 )
  {
    v8 = *(_QWORD *)qword_180193C98;
    v9 = *(__int64 **)(*(_QWORD *)qword_180193C98 + 8LL);
    v10 = std::_List_buy<std::pair<unsigned long const,unsigned short>>::_Buynode<unsigned long const &,unsigned short &>(
            (_DWORD)v7,
            *(_QWORD *)qword_180193C98,
            (_DWORD)v9,
            (unsigned int)v12,
            (__int64)&v14);
    if ( qword_180193CA0 == 0xAAAAAAAAAAAAAA9LL )
      std::_Xlength_error("list<T> too long");
    ++qword_180193CA0;
    *(_QWORD *)(v8 + 8) = v10;
    *v9 = v10;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::_Insert<std::pair<unsigned long const,unsigned short> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>>(
      &ControllerProcessor::s_controllerCurrentKeyMap,
      v13,
      *(_QWORD *)qword_180193C98 + 16LL);
  }
  else
  {
    *((_WORD *)j + 10) = a2;
  }
  return 0LL;
}
