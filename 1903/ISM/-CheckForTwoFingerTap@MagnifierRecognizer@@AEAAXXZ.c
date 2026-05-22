/*
 * XREFs of ?CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ @ 0x180106650
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180105650 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 */

void __fastcall MagnifierRecognizer::CheckForTwoFingerTap(MagnifierRecognizer *this)
{
  char v1; // r11
  MagnifierRecognizer *v2; // r10
  int v3; // ecx
  int v4; // ecx
  _QWORD *v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = this;
  if ( !*(_BYTE *)this || *((_BYTE *)this + 1) )
    return;
  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
  {
    if ( *((_DWORD *)v2 + 2) == 2 )
      *((_BYTE *)v2 + 1) = 1;
    goto LABEL_17;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( *((_DWORD *)v2 + 2) != 1 )
      return;
    v7 = (_QWORD *)**((_QWORD **)v2 + 2);
    if ( 1000000LL * *((_QWORD *)v2 + 5) < v7[8] - v7[7] )
      *(_BYTE *)v2 = 0;
    if ( (int)((v7[6] - v7[5]) * (v7[6] - v7[5]) + (HIDWORD(v7[6]) - HIDWORD(v7[5])) * (HIDWORD(v7[6]) - HIDWORD(v7[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)v2 + 12) * *((_DWORD *)v2 + 12)) )
      return;
LABEL_17:
    *(_BYTE *)v2 = v1;
    return;
  }
  if ( v4 != 1 )
    goto LABEL_17;
  v5 = (_QWORD *)*((_QWORD *)v2 + 2);
  v6 = (_QWORD *)*v5;
  v8 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    if ( (int)((v6[6] - v6[5]) * (v6[6] - v6[5]) + (HIDWORD(v6[6]) - HIDWORD(v6[5])) * (HIDWORD(v6[6]) - HIDWORD(v6[5]))) >= (unsigned __int64)(unsigned int)(*((_DWORD *)v2 + 13) * *((_DWORD *)v2 + 13)) )
      goto LABEL_17;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v8);
    v6 = v8;
  }
}
