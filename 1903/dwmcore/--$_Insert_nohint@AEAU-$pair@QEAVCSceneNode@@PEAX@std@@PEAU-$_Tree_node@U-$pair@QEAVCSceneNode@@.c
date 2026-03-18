/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEAVCSceneNode@@PEAX@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAVCSceneNode@@PEAX@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@@Z @ 0x18017B9B4
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAVCSceneNode@@PEAX@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@AEAU?$pair@QEAVCSceneNode@@PEAX@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@@Z @ 0x18017B7F8 (--$_Insert_hint@AEAU-$pair@QEAVCSceneNode@@PEAX@std@@PEAU-$_Tree_node@U-$pair@QEAVCSceneNode@@PE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@QEAVCSceneNode@@PEAX@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEAU?$pair@QEAVCSceneNode@@PEAX@1@1@Z @ 0x18017B690 (--$_Insert_at@AEAU-$pair@QEAVCSceneNode@@PEAX@std@@PEAU-$_Tree_node@U-$pair@QEAVCSceneNode@@PEAX.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Insert_nohint<std::pair<CSceneNode * const,void *> &,std::_Tree_node<std::pair<CSceneNode * const,void *>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v7; // r9
  char v8; // r8
  __int64 *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *i; // rax
  int v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v7 = (_QWORD *)*a1;
  v8 = 1;
  v9 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v9 + 25) )
  {
    v7 = v9;
    if ( *a4 >= (unsigned __int64)v9[4] )
    {
      v9 = (__int64 *)v9[2];
      v8 = 0;
    }
    else
    {
      v9 = (__int64 *)*v9;
      v8 = 1;
    }
  }
  v10 = v7;
  if ( v8 )
  {
    if ( v7 == *(_QWORD **)*a1 )
    {
      v8 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v10 = (_QWORD *)v7[2];
    }
    else
    {
      v12 = *v7;
      if ( *(_BYTE *)(*v7 + 25LL) )
      {
        for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v10 == (_QWORD *)*i; i = (_QWORD *)i[1] )
          v10 = i;
        if ( *((_BYTE *)v10 + 25) )
          i = v10;
        v10 = i;
      }
      else
      {
        do
        {
          v10 = (_QWORD *)v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
        while ( !*(_BYTE *)(v12 + 25) );
      }
    }
  }
  if ( v10[4] >= *a4 )
  {
    std::_Deallocate<16,0>(a5, 0x30uLL);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
LABEL_9:
  v11 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Insert_at<std::pair<CSceneNode * const,void *> &,std::_Tree_node<std::pair<CSceneNode * const,void *>,void *> *>(
          a1,
          &v16,
          v8,
          v7,
          v15,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v11;
  return a2;
}
