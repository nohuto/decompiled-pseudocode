/*
 * XREFs of ??$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@QEAAPEAULink@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x18017447C
 * Callers:
 *     ??$AddLinkInternal@VIBitmapRealization@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVIBitmapRealization@@_N@Z @ 0x180173C60 (--$AddLinkInternal@VIBitmapRealization@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$cha.c)
 *     ??$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCContent@@_N@Z @ 0x1801C1EFC (--$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ??$AddLinkInternal@VCSpriteVisualContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSpriteVisualContent@@_N@Z @ 0x1801CACE8 (--$AddLinkInternal@VCSpriteVisualContent@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$c.c)
 *     ??$AddLinkInternal@VCResource@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCResource@@_N@Z @ 0x1801FBC4C (--$AddLinkInternal@VCResource@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@.c)
 *     ??$AddLinkInternal@VCGdiSpriteBitmap@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCGdiSpriteBitmap@@_N@Z @ 0x180218E88 (--$AddLinkInternal@VCGdiSpriteBitmap@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Change_array@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAULink@CTreeDumpNodeData@@_K1@Z @ 0x18017588C (-_Change_array@-$vector@ULink@CTreeDumpNodeData@@V-$allocator@ULink@CTreeDumpNodeData@@@std@@@st.c)
 */

__int64 __fastcall std::vector<CTreeDumpNodeData::Link>::_Emplace_reallocate<CTreeDumpNodeData::Link>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  SIZE_T v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax

  v3 = a2;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = v5 / 40;
  if ( v7 / 40 == 0x666666666666666LL )
    std::_Xlength_error((const char *)v7);
  v9 = v7 / 40 + 1;
  v10 = (a1[2] - *a1) / 40;
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 40 * v12;
  if ( v12 > 0x666666666666666LL )
    v13 = -1LL;
  v14 = 5 * v8;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  *(_QWORD *)(v15 + 8 * v14 + 16) = 0LL;
  *(_QWORD *)(v15 + 8 * v14 + 24) = 0LL;
  *(_OWORD *)(v15 + 8 * v14) = *(_OWORD *)a3;
  *(_OWORD *)(v15 + 8 * v14 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_QWORD *)(v15 + 8 * v14 + 32) = *(_QWORD *)(a3 + 32);
  v16 = a1[1];
  v17 = *a1;
  if ( v3 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = (_QWORD *)(v15 + 24);
      do
      {
        *(v18 - 1) = 0LL;
        *v18 = 0LL;
        v18 += 5;
        *((_OWORD *)v18 - 4) = *(_OWORD *)v17;
        *((_OWORD *)v18 - 3) = *(_OWORD *)(v17 + 16);
        *(_QWORD *)(v17 + 16) = 0LL;
        *(_QWORD *)(v17 + 24) = 15LL;
        *(_BYTE *)v17 = 0;
        v19 = *(_QWORD *)(v17 + 32);
        v17 += 40LL;
        *(v18 - 4) = v19;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    if ( v17 != v3 )
    {
      v20 = (_QWORD *)(v15 + 24);
      do
      {
        *(v20 - 1) = 0LL;
        *v20 = 0LL;
        v20 += 5;
        *((_OWORD *)v20 - 4) = *(_OWORD *)v17;
        *((_OWORD *)v20 - 3) = *(_OWORD *)(v17 + 16);
        *(_QWORD *)(v17 + 16) = 0LL;
        *(_QWORD *)(v17 + 24) = 15LL;
        *(_BYTE *)v17 = 0;
        v21 = *(_QWORD *)(v17 + 32);
        v17 += 40LL;
        *(v20 - 4) = v21;
      }
      while ( v17 != v3 );
      v16 = a1[1];
    }
    if ( v3 != v16 )
    {
      v22 = (_QWORD *)(v15 + 8 * (v14 + 8));
      do
      {
        *(v22 - 1) = 0LL;
        *v22 = 0LL;
        v22 += 5;
        *((_OWORD *)v22 - 4) = *(_OWORD *)v3;
        *((_OWORD *)v22 - 3) = *(_OWORD *)(v3 + 16);
        *(_QWORD *)(v3 + 16) = 0LL;
        *(_QWORD *)(v3 + 24) = 15LL;
        *(_BYTE *)v3 = 0;
        v23 = *(_QWORD *)(v3 + 32);
        v3 += 40LL;
        *(v22 - 4) = v23;
      }
      while ( v3 != v16 );
    }
  }
  std::vector<CTreeDumpNodeData::Link>::_Change_array(a1, v15, v9, v12);
  return *a1 + 8 * v14;
}
