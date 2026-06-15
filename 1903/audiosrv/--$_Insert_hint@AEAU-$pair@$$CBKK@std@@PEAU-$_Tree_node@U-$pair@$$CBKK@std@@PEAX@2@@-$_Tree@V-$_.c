/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@AEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x18003A8E0
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x1800328D0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800D994C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800D999C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@2@@Z @ 0x1800D99C0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEAU?$pair@$$CBKK@1@1@Z @ 0x1800ED040 (--$_Insert_at@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800ED1B0 (--$_Insert_nohint@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_hint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned int *i,
        __int64 a5)
{
  unsigned int *v5; // rdi
  _QWORD *v7; // r11
  _QWORD *v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int64 v11; // r10
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r10
  int v18; // r9d
  __int64 v19; // r9
  unsigned int v20; // esi
  unsigned int v21; // ecx
  bool v22; // cf
  unsigned int *v23; // rax
  int *j; // rax
  int v25; // r9d
  __int64 v26; // rcx
  __int64 k; // rax
  char v28; // [rsp+38h] [rbp-20h] BYREF

  v5 = i;
  v7 = a1;
  if ( a1[1] )
  {
    v17 = (_QWORD *)*a1;
    if ( a3 == *(_QWORD **)*a1 )
    {
      if ( *i < *((_DWORD *)a3 + 7) )
      {
        v18 = (int)a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
          (_DWORD)a1,
          (_DWORD)a2,
          (_DWORD)a3,
          v18);
        return a2;
      }
    }
    else if ( a3 == v17 )
    {
      v19 = v17[2];
      if ( *(_DWORD *)(v19 + 28) < *v5 )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
          (_DWORD)a1,
          (_DWORD)a2,
          0,
          v19);
        return a2;
      }
    }
    else
    {
      v20 = *i;
      v21 = *((_DWORD *)a3 + 7);
      v22 = v21 < *i;
      if ( v21 > *i )
      {
        v23 = (unsigned int *)a3;
        if ( *((_BYTE *)a3 + 25) )
        {
          i = (unsigned int *)a3[2];
        }
        else
        {
          i = (unsigned int *)*a3;
          if ( *(_BYTE *)(*a3 + 25LL) )
          {
            for ( i = (unsigned int *)a3[1]; !*((_BYTE *)i + 25); i = (unsigned int *)*((_QWORD *)i + 1) )
            {
              if ( v23 != *(unsigned int **)i )
                break;
              v23 = i;
            }
            if ( *((_BYTE *)v23 + 25) )
              i = v23;
          }
          else
          {
            for ( j = (int *)*((_QWORD *)i + 2); !*((_BYTE *)j + 25); j = (int *)*((_QWORD *)j + 2) )
              i = (unsigned int *)j;
          }
        }
        if ( i[7] < v20 )
        {
          if ( *(_BYTE *)(*((_QWORD *)i + 2) + 25LL) )
          {
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
              (_DWORD)v7,
              (_DWORD)a2,
              0,
              (_DWORD)i);
          }
          else
          {
            v25 = (int)a3;
            LOBYTE(a3) = 1;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
              (_DWORD)v7,
              (_DWORD)a2,
              (_DWORD)a3,
              v25);
          }
          return a2;
        }
        v22 = v21 < v20;
      }
      if ( v22 )
      {
        v26 = (__int64)a3;
        if ( *(_BYTE *)(a3[2] + 25LL) )
        {
          for ( k = a3[1]; !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
          {
            if ( v26 != *(_QWORD *)(k + 16) )
              break;
            v26 = k;
          }
        }
        else
        {
          k = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min(
                a3[2],
                a2,
                a3,
                i);
        }
        if ( (_QWORD *)k == v17 || v20 < *(_DWORD *)(k + 28) )
        {
          if ( *(_BYTE *)(a3[2] + 25LL) )
          {
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
              (_DWORD)v7,
              (_DWORD)a2,
              0,
              (_DWORD)a3);
          }
          else
          {
            LOBYTE(a3) = 1;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
              (_DWORD)v7,
              (_DWORD)a2,
              (_DWORD)a3,
              k);
          }
          return a2;
        }
      }
    }
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_nohint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
                       (_DWORD)v7,
                       (unsigned int)&v28,
                       (_DWORD)a3,
                       (_DWORD)v5,
                       a5);
    return a2;
  }
  v8 = (_QWORD *)*a1;
  a1[1] = 1LL;
  v9 = a5;
  *(_QWORD *)(a5 + 8) = v8;
  v10 = (_QWORD *)*a1;
  if ( v8 == v10 )
  {
    v10[1] = a5;
    *(_QWORD *)*v7 = a5;
    *(_QWORD *)(*v7 + 16LL) = a5;
  }
  else
  {
    try
    {
      *v8 = a5;
      if ( v8 == *(_QWORD **)*v7 )
        *(_QWORD *)*v7 = a5;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, 40LL);
      throw;
    }
  }
  v11 = a5;
  while ( !*(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = *(__int64 **)(v13 + 8);
    v15 = *v14;
    if ( v13 == *v14 )
    {
      v16 = v14[2];
      if ( *(_BYTE *)(v16 + 24) )
      {
        if ( v11 == *(_QWORD *)(v13 + 16) )
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v7, v13);
        *(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Rrotate(
          v7,
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL),
          a3,
          v9);
      }
      else
      {
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
        v11 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
      }
    }
    else if ( *(_BYTE *)(v15 + 24) )
    {
      if ( v11 == *(_QWORD *)v13 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Rrotate(
          v7,
          v13,
          a3,
          v9);
      *(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL));
    }
    else
    {
      *(_BYTE *)(v13 + 24) = 1;
      *(_BYTE *)(v15 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
      v11 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
    }
  }
  *(_BYTE *)(*(_QWORD *)(*v7 + 8LL) + 24LL) = 1;
  *a2 = v9;
  return a2;
}
