/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180141640
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180141120 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAAPEAXI@Z @ 0x18013D998 (--_G-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAAPEAXI.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@1@Z @ 0x180140FB4 (--$_Insert_at@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_nohint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        void *a5)
{
  _QWORD *v8; // r15
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  unsigned __int64 v12; // r14
  char *v13; // rcx
  char *v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  signed __int64 v17; // r8
  unsigned __int16 v18; // r11
  unsigned int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int16 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int16 v32; // di
  int v33; // eax
  bool v34; // sf
  void *v35; // rdi
  int v36; // [rsp+20h] [rbp-38h]
  __int64 v37; // [rsp+60h] [rbp+8h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 8);
  LOBYTE(v11) = 1;
  if ( !*(_BYTE *)(v10 + 25) )
  {
    v12 = *((_QWORD *)a4 + 2);
    do
    {
      v9 = v10;
      v13 = (char *)(v10 + 32);
      if ( *(_QWORD *)(v10 + 56) >= 8uLL )
        v13 = *(char **)(v10 + 32);
      v14 = a4;
      if ( *((_QWORD *)a4 + 3) >= 8uLL )
        v14 = *(char **)a4;
      v15 = *(_QWORD *)(v10 + 48);
      v16 = v15;
      if ( v15 >= v12 )
        v16 = *((_QWORD *)a4 + 2);
      if ( v16 )
      {
        v17 = v14 - v13;
        while ( 1 )
        {
          v18 = *(_WORD *)&v13[v17];
          if ( v18 != *(_WORD *)v13 )
            break;
          v13 += 2;
          if ( !--v16 )
            goto LABEL_13;
        }
        v19 = v18 < *(_WORD *)v13 ? -1 : 1;
      }
      else
      {
LABEL_13:
        v19 = 0;
      }
      if ( !v19 )
      {
        if ( v12 >= v15 )
          v19 = v12 > v15;
        else
          v19 = -1;
      }
      v11 = v19 >> 31;
      if ( (_BYTE)v11 )
        v10 = *(_QWORD *)v10;
      else
        v10 = *(_QWORD *)(v10 + 16);
    }
    while ( !*(_BYTE *)(v10 + 25) );
  }
  try
  {
    v20 = v9;
    if ( (_BYTE)v11 )
    {
      if ( v9 == *v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_at<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
                           a1,
                           &v37,
                           1,
                           (_QWORD *)v9,
                           v36,
                           (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v9 + 25) )
      {
        v20 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v23 = *(_QWORD *)v9;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
        {
          v24 = *(_QWORD *)(v9 + 8);
          if ( !*(_BYTE *)(v24 + 25) )
          {
            v25 = v9;
            do
            {
              if ( v25 != *(_QWORD *)v24 )
                break;
              v20 = v24;
              v24 = *(_QWORD *)(v24 + 8);
              v25 = v20;
            }
            while ( !*(_BYTE *)(v24 + 25) );
          }
          if ( !*(_BYTE *)(v20 + 25) )
            v20 = v24;
        }
        else
        {
          do
          {
            v20 = v23;
            v23 = *(_QWORD *)(v23 + 16);
          }
          while ( !*(_BYTE *)(v23 + 25) );
        }
      }
    }
    v26 = (unsigned __int16 *)a4;
    if ( *((_QWORD *)a4 + 3) >= 8uLL )
      v26 = *(unsigned __int16 **)a4;
    v27 = v20 + 32;
    if ( *(_QWORD *)(v20 + 56) >= 8uLL )
      v27 = *(_QWORD *)(v20 + 32);
    v28 = *((_QWORD *)a4 + 2);
    v29 = *(_QWORD *)(v20 + 48);
    v30 = v28;
    if ( v28 >= v29 )
      v30 = *(_QWORD *)(v20 + 48);
    if ( v30 )
    {
      v31 = v27 - (_QWORD)v26;
      while ( 1 )
      {
        v32 = *(unsigned __int16 *)((char *)v26 + v31);
        if ( v32 != *v26 )
          break;
        ++v26;
        if ( !--v30 )
          goto LABEL_47;
      }
      v33 = v32 < *v26 ? -1 : 1;
    }
    else
    {
LABEL_47:
      v33 = 0;
    }
    v34 = v33 < 0;
    if ( !v33 )
    {
      if ( v29 < v28 )
      {
LABEL_54:
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_at<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
                           a1,
                           &v37,
                           v11,
                           (_QWORD *)v9,
                           v36,
                           (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( v29 > v28 )
      {
LABEL_53:
        v35 = a5;
        std::pair<std::wstring const,std::wstring>::`scalar deleting destructor'((__int64)a5 + 32);
        std::_Deallocate<16,0>(v35, (const struct std::nothrow_t *)0x60);
        *(_QWORD *)a2 = v20;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      v34 = 0;
    }
    if ( !v34 )
      goto LABEL_53;
    goto LABEL_54;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Destroy_if_node(
      v21,
      a5);
    throw;
  }
  return result;
}
