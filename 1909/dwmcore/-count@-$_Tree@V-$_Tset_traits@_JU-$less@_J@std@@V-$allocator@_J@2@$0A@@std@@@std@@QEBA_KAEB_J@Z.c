/*
 * XREFs of ?count@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@QEBA_KAEB_J@Z @ 0x1801746F0
 * Callers:
 *     ??$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z @ 0x180172948 (--$RegisterNodeForVisit@VCVisual@@@CDebugTreeDumper@@QEAAXPEAVCVisual@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@Z @ 0x180172A44 (--$RegisterNodeForVisit@VIBitmapRealization@@@CDebugTreeDumper@@QEAAXPEAVIBitmapRealization@@_N@.c)
 *     ??$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z @ 0x1801C09CC (--$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VCSpriteVisualContent@@@CDebugTreeDumper@@QEAAXPEAVCSpriteVisualContent@@_N@Z @ 0x1801C9654 (--$RegisterNodeForVisit@VCSpriteVisualContent@@@CDebugTreeDumper@@QEAAXPEAVCSpriteVisualContent@.c)
 *     ??$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z @ 0x1801FA668 (--$RegisterNodeForVisit@VCResource@@@CDebugTreeDumper@@QEAAXPEAVCResource@@_N@Z.c)
 *     ??$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z @ 0x1802178A4 (--$RegisterNodeForVisit@VCGdiSpriteBitmap@@@CDebugTreeDumper@@QEAAXPEAVCGdiSpriteBitmap@@_N@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<__int64,std::less<__int64>,std::allocator<__int64>,0>>::count(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v2; // rax
  char v3; // r11
  _QWORD *v4; // r9
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 i; // rcx

  v2 = *(_QWORD **)a1;
  v3 = 0;
  v4 = *(_QWORD **)a1;
  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( v6[4] >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < v6[4] )
          v4 = v6;
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( v8 >= v5[4] )
      {
        v5 = (__int64 *)v5[2];
      }
      else
      {
        v4 = v5;
        v5 = (__int64 *)*v5;
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  v9 = 0LL;
  while ( v2 != v4 )
  {
    v10 = v2[2];
    ++v9;
    if ( *(_BYTE *)(v10 + 25) == v3 )
    {
      v2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v10);
    }
    else
    {
      for ( i = v2[1]; *(_BYTE *)(i + 25) == v3 && v2 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v2 = (_QWORD *)i;
      v2 = (_QWORD *)i;
    }
  }
  return v9;
}
