/*
 * XREFs of ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18003B180
 * Callers:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18003AEC0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18003B030 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@AEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x18003EBA0 (--$_Insert_hint@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003EC40 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800D94F0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 __fastcall CResourcePriorityTracker::AddResourcePriorityToMap(CResourcePriorityTracker *this, unsigned int a2)
{
  unsigned int v2; // r10d
  char *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  int *v9; // rcx
  int *v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 i; // rcx
  __int64 v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int *v19; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  try
  {
    v2 = a2;
    v3 = (char *)this + 40;
    v4 = *((_QWORD *)this + 5);
    v5 = *(_QWORD *)(v4 + 8);
    v6 = v5;
    v7 = v4;
    while ( !*(_BYTE *)(v6 + 25) )
    {
      v14 = *(_DWORD *)(v6 + 28);
      if ( v14 >= v2 )
      {
        if ( *(_BYTE *)(v7 + 25) && v2 < v14 )
          v7 = v6;
        v4 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    if ( !*(_BYTE *)(v7 + 25) )
      v5 = *(_QWORD *)v7;
    while ( !*(_BYTE *)(v5 + 25) )
    {
      if ( v2 >= *(_DWORD *)(v5 + 28) )
      {
        v5 = *(_QWORD *)(v5 + 16);
      }
      else
      {
        v7 = v5;
        v5 = *(_QWORD *)v5;
      }
    }
    v8 = 0LL;
    while ( v4 != v7 )
    {
      ++v8;
      v15 = *(_QWORD *)(v4 + 16);
      if ( *(_BYTE *)(v15 + 25) )
      {
        for ( i = *(_QWORD *)(v4 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v4 != *(_QWORD *)(i + 16) )
            break;
          v4 = i;
        }
        v4 = i;
      }
      else
      {
        v4 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min(v15, v6, v7, v8);
      }
    }
    v9 = *(int **)v3;
    v10 = *(int **)v3;
    v11 = *(__int64 **)(*(_QWORD *)v3 + 8LL);
    if ( v8 )
    {
      if ( *((_BYTE *)v11 + 25) )
        goto LABEL_39;
      do
      {
        if ( *((_DWORD *)v11 + 7) >= v2 )
        {
          v10 = (int *)v11;
          v11 = (__int64 *)*v11;
        }
        else
        {
          v11 = (__int64 *)v11[2];
        }
      }
      while ( !*((_BYTE *)v11 + 25) );
      if ( v10 == v9 || v2 < v10[7] )
      {
LABEL_39:
        v19 = (int *)&v20;
        v17 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                v3,
                v6,
                &v19);
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_hint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
          (_DWORD)v3,
          (unsigned int)&v19,
          (_DWORD)v10,
          v17 + 28,
          v17);
        v10 = v19;
      }
      ++v10[8];
    }
    else
    {
      if ( *((_BYTE *)v11 + 25) )
        goto LABEL_10;
      do
      {
        if ( *((_DWORD *)v11 + 7) >= v2 )
        {
          v10 = (int *)v11;
          v11 = (__int64 *)*v11;
        }
        else
        {
          v11 = (__int64 *)v11[2];
        }
      }
      while ( !*((_BYTE *)v11 + 25) );
      if ( v10 == v9 || v2 < v10[7] )
      {
LABEL_10:
        v19 = (int *)&v20;
        v12 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                v3,
                v6,
                &v19);
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_hint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
          (_DWORD)v3,
          (unsigned int)&v19,
          (_DWORD)v10,
          v12 + 28,
          v12);
        v10 = v19;
      }
      v10[8] = 1;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x74,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v8);
  }
  return result;
}
