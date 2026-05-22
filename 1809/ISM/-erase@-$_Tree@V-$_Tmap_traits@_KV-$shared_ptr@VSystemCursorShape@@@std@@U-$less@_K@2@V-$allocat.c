/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180093F8C
 * Callers:
 *     ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800929B0 (-DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerSt.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180096F60 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800977FC (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x180093024 (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$le_ea_180093024.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
        __int64 ***a1,
        unsigned __int64 *a2)
{
  __int64 *v2; // r10
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  __int64 *j; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 i; // rcx
  __int64 *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*a1;
  v4 = (__int64)*a1;
  v5 = (__int64)(*a1)[1];
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_QWORD *)(v6 + 32) )
          v4 = v6;
        v2 = (__int64 *)v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v5 = *(_QWORD *)v4;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( *a2 >= *(_QWORD *)(v5 + 32) )
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  j = v2;
  v9 = 0LL;
  while ( j != (__int64 *)v4 )
  {
    ++v9;
    if ( !*((_BYTE *)j + 25) )
    {
      v10 = j[2];
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
          j = (__int64 *)i;
        j = (__int64 *)i;
      }
      else
      {
        v11 = *(_QWORD *)v10;
        for ( j = (__int64 *)j[2]; !*(_BYTE *)(v11 + 25); v11 = *(_QWORD *)v11 )
          j = (__int64 *)v11;
      }
    }
  }
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::erase(
    a1,
    &v14,
    v2,
    (__int64 *)v4);
  return v9;
}
