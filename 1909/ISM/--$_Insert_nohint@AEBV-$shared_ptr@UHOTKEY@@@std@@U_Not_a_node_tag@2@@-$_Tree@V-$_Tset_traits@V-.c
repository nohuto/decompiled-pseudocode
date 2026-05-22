/*
 * XREFs of ??$_Insert_nohint@AEBV?$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@_N@1@_NAEBV?$shared_ptr@UHOTKEY@@@1@U_Not_a_node_tag@1@@Z @ 0x1801455BC
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z @ 0x180145D1C (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KAEA_N@Z.c)
 * Callees:
 *     ??$_Insert_at@AEBV?$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$shared_ptr@UHOTKEY@@@std@@PEAX@1@AEBV?$shared_ptr@UHOTKEY@@@1@U_Not_a_node_tag@1@@Z @ 0x180145090 (--$_Insert_at@AEBV-$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@-$_Tree@V-$_Tset_traits@V-$sha.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::_Insert_nohint<std::shared_ptr<HOTKEY> const &,std::_Not_a_node_tag>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int64 *v7; // r9
  __int64 *v8; // rax
  char v9; // r11
  unsigned __int64 v10; // r8
  __int64 *v11; // rax
  __int64 result; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v7 = *a1;
  v8 = (__int64 *)(*a1)[1];
  v9 = 1;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v10 = *a4;
    do
    {
      v7 = v8;
      v9 = v10 < v8[4];
      if ( v10 >= v8[4] )
        v8 = (__int64 *)v8[2];
      else
        v8 = (__int64 *)*v8;
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  try
  {
    v11 = v7;
    if ( v9 )
    {
      if ( v7 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::_Insert_at<std::shared_ptr<HOTKEY> const &,std::_Not_a_node_tag>(
                           a1,
                           &v16,
                           1,
                           v7,
                           a4);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v7 + 25) )
      {
        v11 = (__int64 *)v7[2];
      }
      else
      {
        v13 = (__int64 *)*v7;
        if ( *(_BYTE *)(*v7 + 25) )
        {
          v14 = (__int64 *)v7[1];
          if ( !*((_BYTE *)v14 + 25) )
          {
            v15 = v7;
            do
            {
              if ( v15 != (__int64 *)*v14 )
                break;
              v11 = v14;
              v14 = (__int64 *)v14[1];
              v15 = v11;
            }
            while ( !*((_BYTE *)v14 + 25) );
          }
          if ( !*((_BYTE *)v11 + 25) )
            v11 = v14;
        }
        else
        {
          do
          {
            v11 = v13;
            v13 = (__int64 *)v13[2];
          }
          while ( !*((_BYTE *)v13 + 25) );
        }
      }
    }
    if ( v11[4] >= *a4 )
    {
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::_Insert_at<std::shared_ptr<HOTKEY> const &,std::_Not_a_node_tag>(
                         a1,
                         &v16,
                         v9,
                         v7,
                         a4);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
