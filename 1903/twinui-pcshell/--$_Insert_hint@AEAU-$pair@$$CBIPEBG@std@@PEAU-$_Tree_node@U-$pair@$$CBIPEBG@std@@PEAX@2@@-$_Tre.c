/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x18031C39C
 * Callers:
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x18005B080 (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800682C4 (--$_Try_emplace@AEBI$$V@-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@Q.c)
 *     ??0?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBIPEBG@std@@@1@@Z @ 0x18031D648 (--0-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V-$initializer_li.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x18009920C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@AEAU?$pair@$$CBIPEBG@1@1@Z @ 0x1802278C0 (--$_Insert_at@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tree@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x18031C608 (--$_Insert_nohint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_T.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 *v7; // r11
  __int64 v8; // r10
  _QWORD *result; // rax
  __int64 v10; // r9
  unsigned int v11; // edi
  bool v12; // cf
  __int64 *v13; // rax
  __int64 *i; // r9
  __int64 *j; // rax
  __int64 *v16; // rcx
  __int64 *k; // rax
  int v18; // [rsp+20h] [rbp-38h]
  char v19; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  if ( a1[1] )
  {
    v8 = *a1;
    if ( a3 == *(__int64 **)*a1 )
    {
      if ( *a4 < *((_DWORD *)a3 + 8) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v18,
          a5);
        return a2;
      }
      goto LABEL_42;
    }
    if ( a3 == (__int64 *)v8 )
    {
      v10 = *(_QWORD *)(v8 + 16);
      if ( *(_DWORD *)(v10 + 32) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v10,
          v18,
          a5);
        return a2;
      }
      goto LABEL_42;
    }
    v11 = *a4;
    v12 = *((_DWORD *)a3 + 8) < *a4;
    if ( *((_DWORD *)a3 + 8) > *a4 )
    {
      v13 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        i = (__int64 *)a3[2];
      }
      else
      {
        i = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
            v13 = i;
          if ( *((_BYTE *)v13 + 25) )
            i = v13;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      if ( *((_DWORD *)i + 8) < v11 )
      {
        if ( *(_BYTE *)(i[2] + 25) )
          std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
            a1,
            a2,
            0,
            i,
            v18,
            a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
            a1,
            a2,
            1,
            a3,
            v18,
            a5);
        return a2;
      }
      v12 = *((_DWORD *)a3 + 8) < v11;
    }
    if ( !v12 )
      goto LABEL_42;
    v16 = a3;
    if ( *(_BYTE *)(a3[2] + 25) )
    {
      for ( k = (__int64 *)a3[1]; !*((_BYTE *)k + 25) && v16 == (__int64 *)k[2]; k = (__int64 *)k[1] )
        v16 = k;
    }
    else
    {
      k = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min((_QWORD *)a3[2]);
    }
    if ( k != (__int64 *)v8 && v11 >= *((_DWORD *)k + 8) )
    {
LABEL_42:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_nohint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
                         (_DWORD)v7,
                         (unsigned int)&v19,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return a2;
    }
    if ( *(_BYTE *)(a3[2] + 25) )
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        v7,
        a2,
        0,
        a3,
        v18,
        a5);
    else
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        v7,
        a2,
        1,
        k,
        v18,
        a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)*a1,
        v18,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x30);
      throw;
    }
  }
  return result;
}
