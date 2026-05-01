/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@1@@Z @ 0x180227B9C
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18022873C (--$_Try_emplace@AEBK$$V@-$map@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U-$less@K.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x18009920C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$shared_ptr@VWin32ProcessInfo@@@std@@@std.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@AEAU?$pair@$$CBIPEBG@1@1@Z @ 0x1802278C0 (--$_Insert_at@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tree@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@PEAX@1@@Z @ 0x1802282F4 (--$_Insert_nohint@AEAU-$pair@$$CBKUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_hint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 *v7; // r10
  __int64 v8; // r11
  _QWORD *result; // rax
  __int64 v10; // r9
  unsigned int v11; // edi
  bool v12; // cf
  __int64 *v13; // r9
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 *v21; // rdx
  int v22; // [rsp+20h] [rbp-38h]
  char v23; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  if ( a1[1] )
  {
    v8 = *a1;
    if ( a3 == *(__int64 **)*a1 )
    {
      if ( *a4 < *((_DWORD *)a3 + 7) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v22,
          a5);
        return a2;
      }
      goto LABEL_39;
    }
    if ( a3 == (__int64 *)v8 )
    {
      v10 = *(_QWORD *)(v8 + 16);
      if ( *(_DWORD *)(v10 + 28) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v10,
          v22,
          a5);
        return a2;
      }
      goto LABEL_39;
    }
    v11 = *a4;
    v12 = *((_DWORD *)a3 + 7) < *a4;
    if ( *((_DWORD *)a3 + 7) > *a4 )
    {
      v13 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v13 = (__int64 *)a3[2];
      }
      else
      {
        v14 = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          v15 = (__int64 *)a3[1];
          if ( !*((_BYTE *)v15 + 25) )
          {
            v16 = a3;
            do
            {
              v17 = v15;
              if ( v16 != (__int64 *)*v15 )
                break;
              v13 = v15;
              v15 = (__int64 *)v15[1];
              v16 = v17;
            }
            while ( !*((_BYTE *)v15 + 25) );
          }
          if ( !*((_BYTE *)v13 + 25) )
            v13 = v15;
        }
        else
        {
          do
          {
            v13 = v14;
            v14 = (__int64 *)v14[2];
          }
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
      if ( *((_DWORD *)v13 + 7) < v11 )
      {
        if ( *(_BYTE *)(v13[2] + 25) )
          std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
            v7,
            a2,
            0,
            v13,
            v22,
            a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
            v7,
            a2,
            1,
            a3,
            v22,
            a5);
        return a2;
      }
      v12 = *((_DWORD *)a3 + 7) < v11;
    }
    if ( !v12 )
      goto LABEL_39;
    v18 = a3[2];
    if ( *(_BYTE *)(v18 + 25) )
    {
      v19 = (__int64 *)a3[1];
      if ( !*((_BYTE *)v19 + 25) )
      {
        v20 = a3;
        do
        {
          v21 = v19;
          if ( v20 != (__int64 *)v19[2] )
            break;
          v19 = (__int64 *)v19[1];
          v20 = v21;
        }
        while ( !*((_BYTE *)v19 + 25) );
      }
    }
    else
    {
      v19 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>>::_Min((_QWORD *)v18);
    }
    if ( v19 != (__int64 *)v8 && v11 >= *((_DWORD *)v19 + 7) )
    {
LABEL_39:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>>,0>>::_Insert_nohint<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId> &,std::_Tree_node<std::pair<unsigned long const,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,void *> *>(
                         (_DWORD)v7,
                         (unsigned int)&v23,
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
        v22,
        a5);
    else
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        v7,
        a2,
        1,
        v19,
        v22,
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
        v22,
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
