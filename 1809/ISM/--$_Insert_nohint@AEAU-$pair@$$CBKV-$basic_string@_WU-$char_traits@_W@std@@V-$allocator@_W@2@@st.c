/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@@Z @ 0x180129CB8
 * Callers:
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180121F30 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@1@Z @ 0x180129E58 (--$_Insert_at@AEAU-$pair@$$CBKV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Insert_nohint<std::pair<unsigned long const,std::wstring> &,std::_Tree_node<std::pair<unsigned long const,std::wstring>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        void *a5)
{
  int v7; // r10d
  void *v8; // rsi
  __int64 **v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // r9
  bool v12; // r8
  unsigned int v13; // ecx
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rcx
  char v20; // [rsp+50h] [rbp+8h] BYREF

  v7 = (int)a1;
  v8 = a5;
  v9 = *a1;
  v10 = (*a1)[1];
  v11 = (__int64 *)*a1;
  v12 = 1;
  if ( !*((_BYTE *)v10 + 25) )
  {
    v13 = *a4;
    do
    {
      v11 = v10;
      v12 = v13 < *((_DWORD *)v10 + 8);
      if ( v13 >= *((_DWORD *)v10 + 8) )
        v10 = (__int64 *)v10[2];
      else
        v10 = (__int64 *)*v10;
    }
    while ( !*((_BYTE *)v10 + 25) );
  }
  try
  {
    v14 = v11;
    if ( v12 )
    {
      if ( v11 == *v9 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Insert_at<std::pair<unsigned long const,std::wstring> &,std::_Tree_node<std::pair<unsigned long const,std::wstring>,void *> *>(
                                     v7,
                                     (unsigned int)&v20,
                                     1,
                                     (_DWORD)v11);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v11 + 25) )
      {
        v14 = (__int64 *)v11[2];
      }
      else
      {
        v17 = (__int64 *)*v11;
        if ( *(_BYTE *)(*v11 + 25) )
        {
          v18 = (__int64 *)v11[1];
          if ( !*((_BYTE *)v18 + 25) )
          {
            v19 = v11;
            do
            {
              if ( v19 != (__int64 *)*v18 )
                break;
              v14 = v18;
              v18 = (__int64 *)v18[1];
              v19 = v14;
            }
            while ( !*((_BYTE *)v18 + 25) );
          }
          if ( !*((_BYTE *)v14 + 25) )
            v14 = v18;
        }
        else
        {
          do
          {
            v14 = v17;
            v17 = (__int64 *)v17[2];
          }
          while ( !*((_BYTE *)v17 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v14 + 8) >= *a4 )
    {
      std::wstring::~wstring((__int64)a5 + 40);
      operator delete(v8, (const struct std::nothrow_t *)0x48);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Insert_at<std::pair<unsigned long const,std::wstring> &,std::_Tree_node<std::pair<unsigned long const,std::wstring>,void *> *>(
                                   v7,
                                   (unsigned int)&v20,
                                   v12,
                                   (_DWORD)v11);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Destroy_if_node(
      v15,
      a5);
    throw;
  }
  return result;
}
