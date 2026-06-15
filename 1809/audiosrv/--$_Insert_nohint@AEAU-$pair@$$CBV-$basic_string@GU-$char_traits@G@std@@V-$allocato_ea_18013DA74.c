/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x18013DA74
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x18013D518 (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAAPEAXI@Z @ 0x180137D04 (--_G-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAAPEAXI.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@1@Z @ 0x18013D3AC (--$_Insert_at@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_nohint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        void *a5)
{
  __int64 v6; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  char *v11; // rcx
  char *v12; // r8
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  signed __int64 v15; // r8
  unsigned __int16 v16; // r11
  unsigned int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int16 *v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int16 v30; // di
  int v31; // eax
  void *v32; // rdi
  int v33; // [rsp+20h] [rbp-38h]
  __int64 v34; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2;
  v8 = (_QWORD *)*a1;
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = *a1;
  LOBYTE(a2) = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v10 = v9;
    v11 = (char *)(v9 + 32);
    if ( *(_QWORD *)(v9 + 56) >= 8uLL )
      v11 = *(char **)(v9 + 32);
    v12 = a4;
    if ( *((_QWORD *)a4 + 3) >= 8uLL )
      v12 = *(char **)a4;
    v13 = *(_QWORD *)(v9 + 48);
    v14 = v13;
    if ( v13 >= *((_QWORD *)a4 + 2) )
      v14 = *((_QWORD *)a4 + 2);
    if ( v14 )
    {
      v15 = v12 - v11;
      while ( 1 )
      {
        v16 = *(_WORD *)&v11[v15];
        if ( v16 != *(_WORD *)v11 )
          break;
        v11 += 2;
        if ( !--v14 )
          goto LABEL_12;
      }
      v17 = v16 < *(_WORD *)v11 ? -1 : 1;
    }
    else
    {
LABEL_12:
      v17 = 0;
    }
    if ( !v17 )
    {
      if ( *((_QWORD *)a4 + 2) >= v13 )
        v17 = *((_QWORD *)a4 + 2) > v13;
      else
        v17 = -1;
    }
    LODWORD(a2) = v17 >> 31;
    if ( (_BYTE)a2 )
      v9 = *(_QWORD *)v9;
    else
      v9 = *(_QWORD *)(v9 + 16);
  }
  try
  {
    v18 = v10;
    if ( (_BYTE)a2 )
    {
      if ( v10 == *v8 )
      {
        *(_QWORD *)v6 = *std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_at<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
                           a1,
                           &v34,
                           1,
                           (_QWORD *)v10,
                           v33,
                           (__int64)a5);
        *(_BYTE *)(v6 + 8) = 1;
        return v6;
      }
      if ( *(_BYTE *)(v10 + 25) )
      {
        v18 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v21 = *(_QWORD *)v10;
        if ( *(_BYTE *)(*(_QWORD *)v10 + 25LL) )
        {
          v22 = *(_QWORD *)(v10 + 8);
          if ( !*(_BYTE *)(v22 + 25) )
          {
            v23 = v10;
            do
            {
              if ( v23 != *(_QWORD *)v22 )
                break;
              v18 = v22;
              v22 = *(_QWORD *)(v22 + 8);
              v23 = v18;
            }
            while ( !*(_BYTE *)(v22 + 25) );
          }
          if ( !*(_BYTE *)(v18 + 25) )
            v18 = v22;
        }
        else
        {
          do
          {
            v18 = v21;
            v21 = *(_QWORD *)(v21 + 16);
          }
          while ( !*(_BYTE *)(v21 + 25) );
        }
      }
    }
    v24 = (unsigned __int16 *)a4;
    if ( *((_QWORD *)a4 + 3) >= 8uLL )
      v24 = *(unsigned __int16 **)a4;
    v25 = v18 + 32;
    if ( *(_QWORD *)(v18 + 56) >= 8uLL )
      v25 = *(_QWORD *)(v18 + 32);
    v26 = *((_QWORD *)a4 + 2);
    v27 = *(_QWORD *)(v18 + 48);
    v28 = v26;
    if ( v26 >= v27 )
      v28 = *(_QWORD *)(v18 + 48);
    if ( v28 )
    {
      v29 = v25 - (_QWORD)v24;
      while ( 1 )
      {
        v30 = *(unsigned __int16 *)((char *)v24 + v29);
        if ( v30 != *v24 )
          break;
        ++v24;
        if ( !--v28 )
          goto LABEL_47;
      }
      v31 = v30 < *v24 ? -1 : 1;
    }
    else
    {
LABEL_47:
      v31 = 0;
    }
    if ( !v31 )
    {
      if ( v27 >= v26 )
        v31 = v27 > v26;
      else
        v31 = -1;
    }
    if ( v31 >= 0 )
    {
      v32 = a5;
      std::pair<std::wstring const,std::wstring>::`scalar deleting destructor'((__int64)a5 + 32);
      std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)0x60);
      *(_QWORD *)v6 = v18;
      *(_BYTE *)(v6 + 8) = 0;
    }
    else
    {
      *(_QWORD *)v6 = *std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_at<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
                         a1,
                         &v34,
                         a2,
                         (_QWORD *)v10,
                         v33,
                         (__int64)a5);
      *(_BYTE *)(v6 + 8) = 1;
    }
    result = v6;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Destroy_if_node(
      v19,
      a5);
    throw;
  }
  return result;
}
