/*
 * XREFs of ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000A120
 * Callers:
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009E60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009FD0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@AEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x18000C970 (--$_Insert_hint@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000CA10 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800CAFAC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
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
  __int64 *v9; // rcx
  int *v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 i; // rcx
  __int64 *v16; // rax
  int *v17; // rbx
  __int64 v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int *v20; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
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
      v13 = *(_DWORD *)(v6 + 28);
      if ( v13 >= v2 )
      {
        if ( *(_BYTE *)(v7 + 25) && v2 < v13 )
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
      if ( !*(_BYTE *)(v4 + 25) )
      {
        v14 = *(_QWORD *)(v4 + 16);
        if ( *(_BYTE *)(v14 + 25) )
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
          v4 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min(
                 v14,
                 v6,
                 v7,
                 v8);
        }
      }
    }
    if ( v8 )
    {
      v16 = *(__int64 **)(*(_QWORD *)v3 + 8LL);
      v17 = *(int **)v3;
      if ( *((_BYTE *)v16 + 25) )
        goto LABEL_40;
      do
      {
        if ( *((_DWORD *)v16 + 7) >= v2 )
        {
          v17 = (int *)v16;
          v16 = (__int64 *)*v16;
        }
        else
        {
          v16 = (__int64 *)v16[2];
        }
      }
      while ( !*((_BYTE *)v16 + 25) );
      if ( v17 == *(int **)v3 || v2 < v17[7] )
      {
LABEL_40:
        v20 = (int *)&v21;
        v18 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                v3,
                v6,
                &v20);
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_hint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
          (_DWORD)v3,
          (unsigned int)&v20,
          (_DWORD)v17,
          v18 + 28,
          v18);
        v17 = v20;
      }
      ++v17[8];
    }
    else
    {
      v9 = *(__int64 **)(*(_QWORD *)v3 + 8LL);
      v10 = *(int **)v3;
      if ( *((_BYTE *)v9 + 25) )
        goto LABEL_10;
      do
      {
        if ( *((_DWORD *)v9 + 7) >= v2 )
        {
          v10 = (int *)v9;
          v9 = (__int64 *)*v9;
        }
        else
        {
          v9 = (__int64 *)v9[2];
        }
      }
      while ( !*((_BYTE *)v9 + 25) );
      if ( v10 == *(int **)v3 || v2 < v10[7] )
      {
LABEL_10:
        v20 = (int *)&v21;
        v11 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                v3,
                v6,
                &v20);
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_hint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
          (_DWORD)v3,
          (unsigned int)&v20,
          (_DWORD)v10,
          v11 + 28,
          v11);
        v10 = v20;
      }
      v10[8] = 1;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x73,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v8);
  }
  return result;
}
