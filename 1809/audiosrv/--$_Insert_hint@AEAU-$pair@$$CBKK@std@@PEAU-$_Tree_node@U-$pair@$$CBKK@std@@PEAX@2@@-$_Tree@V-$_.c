/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@AEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x18000C970
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000A120 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800CAF5C (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800CAFAC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800CAFD0 (-_Rrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@1@Z @ 0x1800E19E8 (--$_Insert_at@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAPPLIC.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAPPLICATION_REF_DATA@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800E1B58 (--$_Insert_nohint@AEAU-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUAP.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_hint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  _DWORD *v5; // rdi
  _QWORD *v7; // r11
  _QWORD *v8; // r10
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // rdx
  bool v20; // cf
  _QWORD *v21; // rax
  _QWORD *j; // rax
  _QWORD *i; // rcx
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 k; // rcx
  char v28; // [rsp+38h] [rbp-20h] BYREF

  v5 = a4;
  v7 = a1;
  v8 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == (_QWORD *)*v8 )
    {
      if ( *(_DWORD *)a4 < *((_DWORD *)a3 + 7) )
      {
        v16 = (int)a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          (_DWORD)a1,
          (_DWORD)a2,
          (_DWORD)a3,
          v16);
        return a2;
      }
    }
    else if ( a3 == v8 )
    {
      v17 = v8[2];
      if ( *(_DWORD *)(v17 + 28) < *v5 )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
          (_DWORD)a1,
          (_DWORD)a2,
          0,
          v17);
        return a2;
      }
    }
    else
    {
      v18 = *(_DWORD *)a4;
      v19 = *((unsigned int *)a3 + 7);
      v20 = (unsigned int)v19 < *(_DWORD *)a4;
      if ( (unsigned int)v19 > *(_DWORD *)a4 )
      {
        v21 = a3;
        if ( *((_BYTE *)a3 + 25) )
        {
          a4 = (_QWORD *)a3[2];
        }
        else
        {
          a4 = (_QWORD *)*a3;
          if ( *(_BYTE *)(*a3 + 25LL) )
          {
            for ( i = (_QWORD *)a3[1]; !*((_BYTE *)i + 25); i = (_QWORD *)i[1] )
            {
              if ( v21 != (_QWORD *)*i )
                break;
              v21 = i;
            }
            a4 = v21;
            if ( !*((_BYTE *)v21 + 25) )
              a4 = i;
          }
          else
          {
            for ( j = (_QWORD *)a4[2]; !*((_BYTE *)j + 25); j = (_QWORD *)j[2] )
              a4 = j;
          }
        }
        if ( *((_DWORD *)a4 + 7) < v18 )
        {
          if ( *(_BYTE *)(a4[2] + 25LL) )
          {
            std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
              (_DWORD)v7,
              (_DWORD)a2,
              0,
              (_DWORD)a4);
          }
          else
          {
            v24 = (int)a3;
            LOBYTE(a3) = 1;
            std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
              (_DWORD)v7,
              (_DWORD)a2,
              (_DWORD)a3,
              v24);
          }
          return a2;
        }
        v20 = (unsigned int)v19 < v18;
      }
      if ( v20 )
      {
        v25 = (__int64)a3;
        if ( !*((_BYTE *)a3 + 25) )
        {
          v26 = a3[2];
          if ( *(_BYTE *)(v26 + 25) )
          {
            for ( k = a3[1]; !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
            {
              if ( v25 != *(_QWORD *)(k + 16) )
                break;
              v25 = k;
            }
            v25 = k;
          }
          else
          {
            v25 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min(
                    v26,
                    v19,
                    a3,
                    a4);
          }
        }
        if ( (_QWORD *)v25 == v8 || v18 < *(_DWORD *)(v25 + 28) )
        {
          if ( *(_BYTE *)(a3[2] + 25LL) )
          {
            std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
              (_DWORD)v7,
              (_DWORD)a2,
              0,
              (_DWORD)a3);
          }
          else
          {
            LOBYTE(a3) = 1;
            std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_at<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
              (_DWORD)v7,
              (_DWORD)a2,
              (_DWORD)a3,
              v25);
          }
          return a2;
        }
      }
    }
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Insert_nohint<std::pair<unsigned long const,APPLICATION_REF_DATA> &,std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *> *>(
                       (_DWORD)v7,
                       (unsigned int)&v28,
                       (_DWORD)a3,
                       (_DWORD)v5,
                       a5);
    return a2;
  }
  a1[1] = 1LL;
  v9 = a5;
  *(_QWORD *)(a5 + 8) = v8;
  if ( v8 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = a5;
    *(_QWORD *)*a1 = a5;
    *(_QWORD *)(*a1 + 16LL) = a5;
  }
  else
  {
    try
    {
      *v8 = a5;
      if ( v8 == *(_QWORD **)*a1 )
        *(_QWORD *)*a1 = a5;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, 40LL);
      throw;
    }
  }
  v10 = a5;
  while ( !*(_BYTE *)(*(_QWORD *)(v10 + 8) + 24LL) )
  {
    v12 = *(_QWORD *)(v10 + 8);
    v13 = *(__int64 **)(v12 + 8);
    v14 = *v13;
    if ( v12 == *v13 )
    {
      v15 = v13[2];
      if ( *(_BYTE *)(v15 + 24) )
      {
        if ( v10 == *(_QWORD *)(v12 + 16) )
          std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(v7);
        *(_BYTE *)(*(_QWORD *)(v10 + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) + 24LL) = 0;
        std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
          v7,
          *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL));
      }
      else
      {
        *(_BYTE *)(v12 + 24) = 1;
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) + 24LL) = 0;
        v10 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL);
      }
    }
    else if ( *(_BYTE *)(v14 + 24) )
    {
      if ( v10 == *(_QWORD *)v12 )
        std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Rrotate(
          v7,
          v12);
      *(_BYTE *)(*(_QWORD *)(v10 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Lrotate(v7);
    }
    else
    {
      *(_BYTE *)(v12 + 24) = 1;
      *(_BYTE *)(v14 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL) + 24LL) = 0;
      v10 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL);
    }
  }
  *(_BYTE *)(*(_QWORD *)(*v7 + 8LL) + 24LL) = 1;
  *a2 = v9;
  return a2;
}
