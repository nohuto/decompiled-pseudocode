/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x180118900
 * Callers:
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x180118E2C (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 * Callees:
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EF9D4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdI.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@1@Z @ 0x180118794 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdIn.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x180118C4C (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UH.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_hint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int128 *a4,
        __int64 a5)
{
  __int64 **v9; // r15
  __int64 v10; // rcx
  int v11; // r8d
  __int64 *result; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rdi
  __int64 *i; // rax
  __int64 *v17; // rcx
  __int64 *v18; // rdx
  _QWORD *v19; // rdi
  int v20; // [rsp+20h] [rbp-68h]
  __int128 Buf2; // [rsp+40h] [rbp-48h] BYREF
  __int128 Buf1; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v23; // [rsp+90h] [rbp+8h] BYREF

  v23 = 0LL;
  v9 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
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
          v20,
          a5);
        return a2;
      }
      goto LABEL_34;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v13 = v9[2];
      Buf1 = *a4;
      Buf2 = *((_OWORD *)v13 + 2);
      if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0 )
      {
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          0,
          v13,
          v20,
          a5);
        return a2;
      }
      goto LABEL_34;
    }
    Buf1 = *((_OWORD *)a3 + 2);
    Buf2 = *a4;
    if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
      goto LABEL_27;
    v14 = a3;
    v23 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v15 = (__int64 *)a3[2];
    }
    else
    {
      v15 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v17 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v17 + 25) )
        {
          v18 = a3;
          do
          {
            if ( v18 != (__int64 *)*v17 )
              break;
            v14 = v17;
            v23 = v17;
            v17 = (__int64 *)v17[1];
            v18 = v14;
          }
          while ( !*((_BYTE *)v17 + 25) );
        }
        v15 = v14;
        if ( !*((_BYTE *)v14 + 25) )
          v15 = v17;
      }
      else
      {
        for ( i = (__int64 *)v15[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
          v15 = i;
      }
    }
    v23 = v15;
    Buf1 = *a4;
    Buf2 = *((_OWORD *)v15 + 2);
    if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
    {
LABEL_27:
      Buf1 = *a4;
      Buf2 = *((_OWORD *)a3 + 2);
      if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0
        || (v23 = a3,
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>,std::_Iterator_base0>::operator++(&v23),
            v19 = v23,
            v23 != (__int64 *)v9)
        && (Buf1 = *((_OWORD *)v23 + 2), Buf2 = *a4, memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0) )
      {
LABEL_34:
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
          v20,
          a5);
      else
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          1,
          v19,
          v20,
          a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v15[2] + 25) )
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          0,
          v15,
          v20,
          a5);
      else
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v20,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        1,
        v9,
        v20,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Destroy_if_node(
        v10,
        a5);
      throw;
    }
  }
  return result;
}
