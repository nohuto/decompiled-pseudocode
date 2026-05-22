/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x1800D0684
 * Callers:
 *     ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBULegacyInputInfo@@@Z @ 0x1800D01AC (-UpdateContactState@MagnifierRecognizer@@AEAAXPEBULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18003C108 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@1@Z @ 0x1800D08AC (--$_Insert_at@AEAU-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU-$_Tree_node@U-$pair@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x1800D0B38 (--$_Insert_nohint@AEAU-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU-$_Tree_node@U-$p.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_hint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        void *a5)
{
  __int64 v6; // rbx
  int v8; // r14d
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // r9d
  _QWORD *result; // rax
  __int64 v13; // r9
  unsigned int v14; // r15d
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 i; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+70h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v21 = 0LL;
  v9 = *(_QWORD **)a1;
  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( a3 == *v9 )
    {
      if ( *a4 < *(_DWORD *)(a3 + 32) )
      {
        v11 = a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
          a1,
          (_DWORD)a2,
          a3,
          v11);
        return a2;
      }
      goto LABEL_31;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      v13 = v9[2];
      if ( *(_DWORD *)(v13 + 32) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
          a1,
          (_DWORD)a2,
          0,
          v13);
        return a2;
      }
      goto LABEL_31;
    }
    v14 = *a4;
    if ( *a4 >= *(_DWORD *)(a3 + 32)
      || (v21 = (__int64 *)a3,
          *((_DWORD *)*std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v21)
          + 8) >= v14) )
    {
      if ( *(_DWORD *)(v6 + 32) >= v14 )
        goto LABEL_31;
      v15 = v6;
      v21 = (__int64 *)v6;
      v16 = (_QWORD *)v6;
      if ( !*(_BYTE *)(v6 + 25) )
      {
        v15 = *(_QWORD *)(v6 + 16);
        if ( *(_BYTE *)(v15 + 25) )
        {
          v15 = *(_QWORD *)(v6 + 8);
          if ( !*(_BYTE *)(v15 + 25) )
          {
            v18 = v6;
            do
            {
              v19 = v15;
              if ( v18 != *(_QWORD *)(v15 + 16) )
                break;
              v21 = (__int64 *)v15;
              v15 = *(_QWORD *)(v15 + 8);
              v18 = v19;
            }
            while ( !*(_BYTE *)(v15 + 25) );
          }
        }
        else
        {
          for ( i = *(_QWORD *)v15; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
            v15 = i;
        }
        v16 = (_QWORD *)v15;
        v21 = (__int64 *)v15;
      }
      if ( v16 != v9 && v14 >= *(_DWORD *)(v15 + 32) )
      {
LABEL_31:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_nohint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
                           v8,
                           (int)&v20,
                           a3,
                           (int)a4,
                           a5);
        return a2;
      }
      if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 25LL) )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
          v8,
          (_DWORD)a2,
          0,
          v6);
      }
      else
      {
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
          v8,
          (_DWORD)a2,
          a3,
          v15);
      }
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(v21[2] + 25) )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
          v8,
          (_DWORD)a2,
          0,
          (_DWORD)v21);
      }
      else
      {
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
          v8,
          (_DWORD)a2,
          a3,
          v6);
      }
      return a2;
    }
  }
  else
  {
    try
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
        a1,
        (_DWORD)a2,
        a3,
        (_DWORD)v9);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>,0>>::_Freenode0(
        v10,
        a5);
      throw;
    }
  }
  return result;
}
