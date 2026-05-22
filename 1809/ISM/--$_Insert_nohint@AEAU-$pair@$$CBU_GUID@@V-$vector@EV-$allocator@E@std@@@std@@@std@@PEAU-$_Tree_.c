/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@@Z @ 0x180120A20
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@@Z @ 0x18011F430 (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@std@@@std@@PEAU-$_Tree_no.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18003C108 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@1@1@Z @ 0x180120794 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@std@@@std@@PEAU-$_Tree_node.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x18012DB53 (memcmp_0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Insert_nohint<std::pair<_GUID const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<_GUID const,std::vector<unsigned char>>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        void *a5)
{
  void *v5; // rax
  _QWORD *v8; // rsi
  __int64 **v9; // r15
  __int64 v10; // rbx
  __int64 *v11; // r14
  char v12; // r13
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  char *v17; // rcx
  const struct std::nothrow_t *v18; // rdx
  char *v19; // r8
  char *v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 *v22; // [rsp+70h] [rbp+8h] BYREF
  void *Buf2; // [rsp+88h] [rbp+20h]

  Buf2 = a4;
  v5 = a4;
  v8 = a5;
  v9 = (__int64 **)*a1;
  v10 = (*a1)[1];
  v11 = *a1;
  v12 = 1;
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v11 = (__int64 *)v10;
    v13 = memcmp_0(v5, (const void *)(v10 + 32), 0x10uLL);
    v12 = v13 < 0;
    if ( v13 >= 0 )
      v10 = *(_QWORD *)(v10 + 16);
    else
      v10 = *(_QWORD *)v10;
    v5 = Buf2;
  }
  try
  {
    v14 = v11;
    v22 = v11;
    if ( v12 )
    {
      if ( v11 == *v9 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<_GUID const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<_GUID const,std::vector<unsigned char>>,void *> *>(
                           a1,
                           &v22,
                           1,
                           v11,
                           v21,
                           v8);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v22);
      v14 = v22;
    }
    if ( memcmp_0(v14 + 4, Buf2, 0x10uLL) >= 0 )
    {
      v17 = (char *)v8[6];
      if ( v17 )
      {
        v18 = (const struct std::nothrow_t *)(v8[8] - (_QWORD)v17);
        if ( (unsigned __int64)v18 >= 0x1000 )
        {
          v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
          v19 = (char *)*((_QWORD *)v17 - 1);
          v20 = (char *)(v17 - v19);
          if ( (unsigned __int64)(v20 - 8) > 0x1F )
          {
            _o__invalid_parameter_noinfo_noreturn(v20, v18);
            JUMPOUT(0x180120BA4LL);
          }
          v17 = v19;
        }
        operator delete(v17, v18);
        v8[6] = 0LL;
        v8[7] = 0LL;
        v8[8] = 0LL;
      }
      operator delete(v8, (const struct std::nothrow_t *)0x48);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Insert_at<std::pair<_GUID const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<_GUID const,std::vector<unsigned char>>,void *> *>(
                         a1,
                         &v22,
                         v12,
                         v11,
                         v21,
                         v8);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Destroy_if_node(
      v15,
      a5);
    throw;
  }
  return result;
}
