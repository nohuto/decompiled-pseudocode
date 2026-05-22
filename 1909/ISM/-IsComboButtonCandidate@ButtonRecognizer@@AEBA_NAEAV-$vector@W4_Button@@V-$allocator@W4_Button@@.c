/*
 * XREFs of ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1800FD72C
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800FD048 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B0AC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1800FBDC4 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1800FC8C4 (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800FCC24 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ButtonRecognizer::IsComboButtonCandidate(__int64 a1, int **a2)
{
  __int64 *v4; // r11
  __int64 v5; // rax
  char v6; // bl
  int **v7; // r8
  int *v8; // r10
  int *v9; // rcx
  __int64 v10; // rdx
  int *v11; // rdi
  signed __int64 v12; // r9
  int *i; // rdx
  int **v14; // rdx
  int *v15; // rdx
  int *v16; // rcx
  int *v17; // rax
  int *v19; // [rsp+28h] [rbp-20h] BYREF
  int *v20; // [rsp+30h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  std::vector<enum _Button>::vector<enum _Button>((__int64)&v19, (__int64)a2);
  std::_Sort_unchecked<enum _Button *,std::less<void>>(v19, v20, v20 - v19, v21);
  v4 = *(__int64 **)(a1 + 32);
  v5 = *v4;
  v21 = *v4;
  v6 = 0;
  while ( (__int64 *)v5 != v4 )
  {
    v7 = (int **)(v5 + 48);
    if ( *(_BYTE *)(v5 + 40) )
    {
      v8 = *(int **)(v5 + 56);
      v9 = *v7;
      v10 = a2[1] - *a2;
      if ( ((__int64)v8 - *(_QWORD *)(v5 + 48)) >> 2 < v10 )
      {
LABEL_13:
        v9 = *(int **)(v5 + 56);
      }
      else
      {
        v11 = &v8[-v10];
        v12 = (char *)v9 - (char *)*a2;
LABEL_6:
        for ( i = *a2; i != a2[1]; ++i )
        {
          if ( *(int *)((char *)i + v12) != *i )
          {
            if ( v9 == v11 )
              goto LABEL_13;
            ++v9;
            v12 += 4LL;
            goto LABEL_6;
          }
        }
      }
      if ( v9 == v8 )
        goto LABEL_26;
      v14 = a2;
    }
    else
    {
      v15 = *v7;
      v16 = v19;
      while ( v15 != v7[1] )
      {
        if ( v16 == v20 )
          goto LABEL_24;
        if ( *v16 < *v15 )
          goto LABEL_26;
        v17 = v16 + 1;
        if ( *v16 > *v15 )
          v17 = v16;
        v16 = v17;
        ++v15;
      }
      if ( v16 != v20 )
        goto LABEL_26;
LABEL_24:
      v14 = &v19;
    }
    if ( !std::operator==<enum _Button,std::allocator<enum _Button>>((__int64)v7, v14) )
    {
      v6 = 1;
      break;
    }
LABEL_26:
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v21);
    v5 = v21;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v19);
  return v6;
}
