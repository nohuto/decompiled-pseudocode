/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18021090C
 * Callers:
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x18020BA1C (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180148F2C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@2@0@Z @ 0x1802107FC (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicViewData@@U-$less@I@std@@V-$allocator@U-$pair@$$CBI.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::erase(
        _QWORD *a1,
        unsigned int *a2)
{
  _QWORD *v2; // r10
  _QWORD *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // r8
  unsigned int v7; // r11d
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 i; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v4 = (_QWORD *)*a1;
  v5 = *(__int64 **)(*a1 + 8LL);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *((_DWORD *)v6 + 7) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *((_DWORD *)v6 + 7) )
          v4 = v6;
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *a2 >= *((_DWORD *)v5 + 7) )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  v8 = v2;
  v9 = 0LL;
  while ( v8 != v4 )
  {
    ++v9;
    if ( !*((_BYTE *)v8 + 25) )
    {
      v10 = v8[2];
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( i = v8[1]; !*(_BYTE *)(i + 25) && v8 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v8 = (_QWORD *)i;
        v8 = (_QWORD *)i;
      }
      else
      {
        v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v10);
      }
    }
  }
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::erase(
    a1,
    &v13,
    v2,
    v4);
  return v9;
}
