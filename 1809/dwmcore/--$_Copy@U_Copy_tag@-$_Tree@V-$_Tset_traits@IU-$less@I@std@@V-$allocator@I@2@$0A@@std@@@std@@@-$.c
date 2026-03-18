/*
 * XREFs of ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x1800C500C
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800C4BAC (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@PEAU32@@Z @ 0x180016010 (-_Min@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x1800C73B4 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@st.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy<std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_tag>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  char v10; // r9
  _QWORD *v11; // r8
  __int64 result; // rax
  __int64 i; // rcx

  v4 = *a1;
  LOBYTE(a4) = a3;
  *(_QWORD *)(v4 + 8) = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_tag>(
                          a1,
                          *(_QWORD *)(*a2 + 8LL),
                          *a1,
                          a4);
  v7 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v8 = v7[1];
  if ( *(_BYTE *)(v8 + 25) )
  {
    *v7 = v7;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v9 = std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Min((_QWORD *)v8);
    *v11 = v9;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( i = *(_QWORD *)(result + 16); *(_BYTE *)(i + 25) == v10; i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
