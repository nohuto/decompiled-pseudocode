/*
 * XREFs of ??$insert_or_assign@UActiveKeyProperties@ControllerProcessor@@@?$unordered_map@GUActiveKeyProperties@ControllerProcessor@@U?$hash@G@std@@U?$equal_to@G@4@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180037B28
 * Callers:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180036C44 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@1@@Z @ 0x180038018 (--$_Insert@AEAU-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$_List_unchecked_it.c)
 *     ??$_Buynode@AEBGUActiveKeyProperties@ControllerProcessor@@@?$_List_buy@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@1@PEAU21@0AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180038354 (--$_Buynode@AEBGUActiveKeyProperties@ControllerProcessor@@@-$_List_buy@U-$pair@$$CBGUActiveKeyPr.c)
 */

__int64 __fastcall std::unordered_map<unsigned short,ControllerProcessor::ActiveKeyProperties>::insert_or_assign<ControllerProcessor::ActiveKeyProperties>(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3,
        _BYTE *a4)
{
  __int64 v7; // r10
  unsigned __int64 i; // r11
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 *j; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // r14
  __int64 active; // rdx
  __int64 v20; // rax

  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2; ++i )
  {
    v9 = *((unsigned __int8 *)a3 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  v10 = a1[3];
  v11 = (__int64 *)a1[1];
  v12 = v7 & a1[6];
  v13 = 2 * v12;
  for ( j = *(__int64 **)(v10 + 16 * v12); ; j = (__int64 *)*j )
  {
    v15 = *(__int64 **)(v10 + 8 * v13) == v11 ? (__int64 *)a1[1] : **(__int64 ***)(v10 + 8 * v13 + 8);
    if ( j == v15 )
      break;
    if ( *((_WORD *)j + 8) == *a3 )
    {
      v16 = j;
      goto LABEL_12;
    }
  }
  j = (__int64 *)a1[1];
  v16 = j;
LABEL_12:
  if ( v16 == v11 )
  {
    v17 = *v11;
    v18 = *(__int64 **)(*v11 + 8);
    active = std::_List_buy<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Buynode<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
               (_DWORD)v16,
               *v11,
               (_DWORD)v18,
               (_DWORD)a3,
               (__int64)a4);
    v20 = a1[2];
    if ( v20 == 0xAAAAAAAAAAAAAA9LL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v20 + 1;
    *(_QWORD *)(v17 + 8) = active;
    *v18 = active;
    std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Insert<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    *((_BYTE *)j + 18) = *a4;
    *(_QWORD *)a2 = j;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
