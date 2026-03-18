/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@2@@Z @ 0x18017C544
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@2@@Z @ 0x18017C838 (-erase@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U-$less@PEAVIDevic.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180173898 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180175BF8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18017BBC4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVIDeviceResour.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<CSceneNode * const,void *>>>::_Extract(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // dl
  __int64 *v13; // rcx
  __int64 v14; // rdi
  _BYTE *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>>,std::_Iterator_base0>::operator++(&v19);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
LABEL_5:
    v6 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v6 == v3 )
    {
      *(_QWORD *)v6 = v4;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v4;
    }
    v7 = (_QWORD *)*a1;
    v8 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v9 = (_QWORD *)v6;
      else
        v9 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v4);
      *v7 = v9;
      v7 = (_QWORD *)*a1;
      v8 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v8[2] == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v10 = v6;
      }
      else
      {
        v11 = *(_QWORD *)(v4 + 16);
        v10 = v4;
        if ( !*(_BYTE *)(v11 + 25) )
        {
          do
          {
            v10 = v11;
            v11 = *(_QWORD *)(v11 + 16);
          }
          while ( !*(_BYTE *)(v11 + 25) );
          v8 = v7;
        }
      }
      v8[2] = v10;
    }
    v12 = *((_BYTE *)v3 + 24);
    goto LABEL_36;
  }
  v5 = v19;
  v4 = *(_QWORD *)(v19 + 16);
  if ( (__int64 *)v19 == v3 )
    goto LABEL_5;
  *(_QWORD *)(*v3 + 8) = v19;
  *(_QWORD *)v5 = *v3;
  if ( v5 == v3[2] )
  {
    v6 = v5;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v6 = v4;
    *(_QWORD *)(v5 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v5;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else
  {
    v13 = (__int64 *)v3[1];
    if ( (__int64 *)*v13 == v3 )
      *v13 = v5;
    else
      v13[2] = v5;
  }
  *(_QWORD *)(v5 + 8) = v3[1];
  v12 = *(_BYTE *)(v5 + 24);
  *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v12;
LABEL_36:
  if ( v12 == 1 )
  {
    if ( v4 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v14 = v6;
        if ( *(_BYTE *)(v4 + 24) != 1 )
          break;
        v15 = *(_BYTE **)v6;
        if ( v4 == *(_QWORD *)v6 )
        {
          v15 = *(_BYTE **)(v6 + 16);
          if ( !v15[24] )
          {
            v15[24] = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              (__int64)a1,
              v6);
            v15 = *(_BYTE **)(v6 + 16);
          }
          if ( v15[25] )
            goto LABEL_54;
          if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
              v15[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
                (__int64)a1,
                v15);
              v15 = *(_BYTE **)(v6 + 16);
            }
            v15[24] = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
              (__int64)a1,
              v6);
            break;
          }
        }
        else
        {
          if ( !v15[24] )
          {
            v15[24] = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v6);
            v15 = *(_BYTE **)v6;
          }
          if ( v15[25] )
            goto LABEL_54;
          v16 = *((_QWORD *)v15 + 2);
          if ( *(_BYTE *)(v16 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v15 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) == 1 )
            {
              *(_BYTE *)(v16 + 24) = 1;
              v15[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
                (__int64)a1,
                (__int64)v15);
              v15 = *(_BYTE **)v6;
            }
            v15[24] = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v15 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v6);
            break;
          }
        }
        v15[24] = 0;
LABEL_54:
        v4 = v14;
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v14 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v4 + 24) = 1;
  }
  v17 = a1[1];
  if ( v17 )
    a1[1] = v17 - 1;
  return v3;
}
