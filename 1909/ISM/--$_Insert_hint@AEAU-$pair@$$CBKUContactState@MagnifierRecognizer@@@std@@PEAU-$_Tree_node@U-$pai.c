/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x180105E1C
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1801061D8 (--$_Try_emplace@AEBK$$V@-$map@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U-.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@1@Z @ 0x180105CAC (--$_Insert_at@AEAU-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU-$_Tree_node@U-$pair@.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x18010606C (--$_Insert_nohint@AEAU-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU-$_Tree_node@U-$p.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_hint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 *v6; // r9
  __int64 *v8; // r11
  __int64 *v9; // rdi
  _QWORD *result; // rax
  __int64 v11; // r9
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 *v16; // rdx
  _QWORD *v17; // r9
  int v18; // [rsp+20h] [rbp-38h]
  char v19; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+60h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v20 = 0LL;
  if ( !a1[1] )
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
        a1,
        a2,
        1,
        (_QWORD *)*a1,
        v18,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x48);
      throw;
    }
    return result;
  }
  v9 = (__int64 *)*a1;
  if ( a3 == *(__int64 **)*a1 )
  {
    if ( *a4 < *((_DWORD *)a3 + 8) )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
        a1,
        a2,
        1,
        a3,
        v18,
        a5);
      return a2;
    }
    goto LABEL_32;
  }
  if ( a3 == v9 )
  {
    v11 = v9[2];
    if ( *(_DWORD *)(v11 + 32) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
        a1,
        a2,
        0,
        (_QWORD *)v11,
        v18,
        a5);
      return a2;
    }
    goto LABEL_32;
  }
  v12 = *a4;
  if ( *a4 < *((_DWORD *)a3 + 8) )
  {
    v13 = a3;
    v20 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v13 = (__int64 *)a3[2];
    }
    else
    {
      v14 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v15 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v15 + 25) )
        {
          v16 = a3;
          do
          {
            LODWORD(a3) = (_DWORD)v15;
            if ( v16 != (__int64 *)*v15 )
              break;
            v13 = v15;
            v20 = v15;
            v15 = (__int64 *)v15[1];
            v16 = v13;
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
        if ( !*((_BYTE *)v13 + 25) )
        {
          v13 = v15;
          v20 = v15;
        }
LABEL_20:
        if ( *((_DWORD *)v13 + 8) < v12 )
        {
          if ( *(_BYTE *)(v13[2] + 25) )
            std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
              v8,
              a2,
              0,
              v13,
              v18,
              a5);
          else
            std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
              v8,
              a2,
              1,
              v6,
              v18,
              a5);
          return a2;
        }
        goto LABEL_25;
      }
      do
      {
        v13 = v14;
        v14 = (__int64 *)v14[2];
      }
      while ( !*((_BYTE *)v14 + 25) );
    }
    v20 = v13;
    goto LABEL_20;
  }
LABEL_25:
  if ( *((_DWORD *)v6 + 8) >= v12
    || (v20 = v6,
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v20),
        v20 != v9)
    && v12 >= *((_DWORD *)v20 + 8) )
  {
LABEL_32:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_nohint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
                       (_DWORD)v8,
                       (unsigned int)&v19,
                       (_DWORD)a3,
                       (_DWORD)a4,
                       (__int64)a5);
    return a2;
  }
  if ( *(_BYTE *)(v17[2] + 25LL) )
    std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
      v8,
      a2,
      0,
      v17,
      v18,
      a5);
  else
    std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_at<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
      v8,
      a2,
      1,
      v20,
      v18,
      a5);
  return a2;
}
