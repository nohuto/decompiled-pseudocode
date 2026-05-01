/*
 * XREFs of ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x1803502E4
 * Callers:
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x180028CD0 (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHMONITOR__@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHMONITOR__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18034FD30 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHMONITOR__@@@2@V-$tuple@$$V@2@@-$_Tre.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x18034FF0C (--$_Insert_hint@AEAU-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU-$_Tree_.c)
 */

unsigned __int64 __fastcall std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
        __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = a2;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  a2 = *a3;
  do
  {
    if ( *(_QWORD *)(v6 + 32) >= a2 )
    {
      v3 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || a2 < v3[4] )
  {
LABEL_10:
    v9 = a3;
    v7 = std::_Tree_comp_alloc<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HMONITOR__ * const &>,std::tuple<>>(
           a1,
           a2,
           &v9);
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_hint<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
      (__int64 *)a1,
      &v9,
      v3,
      v7 + 4,
      v7);
    *(_QWORD *)v5 = v9;
    *(_BYTE *)(v5 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v5 = v3;
    *(_BYTE *)(v5 + 8) = 0;
  }
  return v5;
}
