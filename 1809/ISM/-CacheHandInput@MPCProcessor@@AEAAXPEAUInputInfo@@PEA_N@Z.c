/*
 * XREFs of ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x1800F62D0
 * Callers:
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5FD0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F62B0 (-Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003B5E8 (-_Extract@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UG.c)
 *     ??$_Buynode@AEAIAEAUInputData@MPCProcessor@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEAIAEAUInputData@MPCProcessor@@@Z @ 0x1800F759C (--$_Buynode@AEAIAEAUInputData@MPCProcessor@@@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCP.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x1800F7600 (--$_Insert_nohint@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIU.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

void __fastcall MPCProcessor::CacheHandInput(MPCProcessor *this, struct InputInfo *a2, bool *a3)
{
  int v4; // esi
  unsigned int v5; // edx
  _QWORD *v6; // r15
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rax
  void *v10; // rax
  int v11; // r8d
  __int64 *v12; // rax
  __int64 **v13; // rcx
  __int64 *j; // rcx
  __int64 *i; // rdx
  __int64 *v16; // rax
  char v17; // al
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE Src[1600]; // [rsp+48h] [rbp-C0h] BYREF
  char v20; // [rsp+688h] [rbp+580h]
  unsigned int v21; // [rsp+6C0h] [rbp+5B8h] BYREF

  *a3 = 0;
  v4 = *((_DWORD *)a2 + 130);
  if ( (unsigned int)(v4 - 2) <= 4 && *((_DWORD *)a2 + 299) && *(_DWORD *)a2 == 512 )
  {
    v5 = *((_DWORD *)a2 + 300);
    v6 = (_QWORD *)((char *)this + 3760);
    v7 = (__int64 *)*((_QWORD *)this + 470);
    v21 = v5;
    v8 = v7;
    v9 = (__int64 *)v7[1];
    if ( *((_BYTE *)v9 + 25) )
      goto LABEL_11;
    do
    {
      if ( *((_DWORD *)v9 + 8) >= v5 )
      {
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    if ( v8 == v7 || v5 < *((_DWORD *)v8 + 8) )
LABEL_11:
      v8 = v7;
    if ( v8 == v7 )
    {
      if ( v4 == 5 )
      {
        memset_0(Src, 0, 0x648uLL);
        memcpy_0(Src, a2, sizeof(Src));
        v20 = 0;
        v10 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<unsigned int &,MPCProcessor::InputData &>(
                        v6,
                        &v21,
                        Src);
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_nohint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          (int)v6,
          (int)&v18,
          v11,
          (_DWORD)v10 + 32,
          v10);
      }
      else
      {
        *a3 = 1;
      }
    }
    else if ( v4 == 4 )
    {
      v12 = v8;
      if ( !*((_BYTE *)v8 + 25) )
      {
        v13 = (__int64 **)v8[2];
        if ( *((_BYTE *)v13 + 25) )
        {
          for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v12 = i;
        }
        else
        {
          for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            ;
        }
      }
      v16 = std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::_Extract(
              v6,
              v8);
      operator delete(v16, (const struct std::nothrow_t *)0x670);
    }
    else
    {
      memset_0(Src, 0, 0x648uLL);
      memcpy_0(Src, a2, sizeof(Src));
      if ( v4 == 2 )
      {
        v20 = 1;
      }
      else
      {
        v17 = *((_BYTE *)v8 + 1640);
        if ( v4 == 3 )
          v17 = 0;
        v20 = v17;
      }
      memcpy_0(v8 + 5, Src, 0x648uLL);
    }
  }
}
