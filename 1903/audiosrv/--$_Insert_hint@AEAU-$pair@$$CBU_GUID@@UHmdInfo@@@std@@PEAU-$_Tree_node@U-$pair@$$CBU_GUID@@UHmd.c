/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x180125304
 * Callers:
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x180125834 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 * Callees:
 *     memcmp_0 @ 0x18006B8F7 (memcmp_0.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800FB980 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdI.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@1@Z @ 0x180125198 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdIn.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x180125650 (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UH.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_hint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int128 *a4,
        __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r15
  int v11; // r8d
  __int64 *result; // rax
  __int64 v13; // rbx
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rbx
  int v19; // [rsp+20h] [rbp-68h]
  __int128 Buf2; // [rsp+40h] [rbp-48h] BYREF
  __int128 Buf1; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v22; // [rsp+90h] [rbp+8h] BYREF

  v22 = 0LL;
  if ( !a1[1] )
  {
    try
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)*a1,
        v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Destroy_if_node(
        v9,
        a5);
      throw;
    }
    return result;
  }
  v10 = *a1;
  if ( a3 == *(__int64 **)*a1 )
  {
    Buf2 = *((_OWORD *)a3 + 2);
    Buf1 = *a4;
    if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) < 0 )
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        1,
        a3,
        v19,
        a5);
      return a2;
    }
    goto LABEL_32;
  }
  if ( a3 == (__int64 *)v10 )
  {
    v13 = *(_QWORD *)(v10 + 16);
    Buf1 = *a4;
    Buf2 = *(_OWORD *)(v13 + 32);
    if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0 )
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        0,
        (_QWORD *)v13,
        v19,
        a5);
      return a2;
    }
    goto LABEL_32;
  }
  Buf1 = *((_OWORD *)a3 + 2);
  Buf2 = *a4;
  if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0 )
  {
    v14 = a3;
    v22 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v14 = (__int64 *)a3[2];
    }
    else
    {
      v15 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v16 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v16 + 25) )
        {
          v17 = a3;
          do
          {
            if ( v17 != (__int64 *)*v16 )
              break;
            v14 = v16;
            v22 = v16;
            v16 = (__int64 *)v16[1];
            v17 = v14;
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
        if ( !*((_BYTE *)v14 + 25) )
        {
          v14 = v16;
          v22 = v16;
        }
LABEL_20:
        Buf1 = *a4;
        Buf2 = *((_OWORD *)v14 + 2);
        if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0 )
        {
          if ( *(_BYTE *)(v14[2] + 25) )
            std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
              a1,
              a2,
              0,
              v14,
              v19,
              a5);
          else
            std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
              a1,
              a2,
              1,
              a3,
              v19,
              a5);
          return a2;
        }
        goto LABEL_25;
      }
      do
      {
        v14 = v15;
        v15 = (__int64 *)v15[2];
      }
      while ( !*((_BYTE *)v15 + 25) );
    }
    v22 = v14;
    goto LABEL_20;
  }
LABEL_25:
  Buf1 = *a4;
  Buf2 = *((_OWORD *)a3 + 2);
  if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0
    || (v22 = a3,
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>,std::_Iterator_base0>::operator++(&v22),
        v18 = v22,
        v22 != (__int64 *)v10)
    && (Buf1 = *((_OWORD *)v22 + 2), Buf2 = *a4, memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0) )
  {
LABEL_32:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_nohint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
                       (_DWORD)a1,
                       (unsigned int)&Buf1,
                       v11,
                       (_DWORD)a4,
                       a5);
    return a2;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
      a1,
      a2,
      0,
      a3,
      v19,
      a5);
  else
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
      a1,
      a2,
      1,
      v18,
      v19,
      a5);
  return a2;
}
