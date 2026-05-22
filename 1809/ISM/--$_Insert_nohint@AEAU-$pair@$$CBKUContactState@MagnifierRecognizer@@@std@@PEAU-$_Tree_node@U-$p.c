/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x1800D0B38
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x1800D0684 (--$_Insert_hint@AEAU-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU-$_Tree_node@U-$pai.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18003C108 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@1@Z @ 0x1800D08AC (--$_Insert_at@AEAU-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU-$_Tree_node@U-$pair@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_nohint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 **v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rsi
  char v11; // r14
  unsigned int v12; // ecx
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-38h]
  __int64 *v17; // [rsp+60h] [rbp+8h] BYREF

  v8 = (__int64 **)*a1;
  v9 = (*a1)[1];
  v10 = *a1;
  v11 = 1;
  if ( !*(_BYTE *)(v9 + 25) )
  {
    v12 = *a4;
    do
    {
      v10 = (__int64 *)v9;
      v11 = v12 < *(_DWORD *)(v9 + 32);
      if ( v12 >= *(_DWORD *)(v9 + 32) )
        v9 = *(_QWORD *)(v9 + 16);
      else
        v9 = *(_QWORD *)v9;
    }
    while ( !*(_BYTE *)(v9 + 25) );
  }
  try
  {
    v13 = v10;
    v17 = v10;
    if ( v11 )
    {
      if ( v10 == *v8 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
                           a1,
                           &v17,
                           1,
                           v10,
                           v16,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v17);
      v13 = v17;
    }
    if ( *((_DWORD *)v13 + 8) >= *a4 )
    {
      operator delete(a5, (const struct std::nothrow_t *)0x48);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
                         a1,
                         &v17,
                         v11,
                         v10,
                         v16,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>,0>>::_Freenode0(
      v14,
      a5);
    throw;
  }
  return result;
}
