/*
 * XREFs of ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1801C570C
 * Callers:
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801C6610 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 *     ?GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801F5380 (-GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConte.c)
 *     ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801FC260 (-GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConten.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x1801C6B04 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x1801C6B54 (-_Change_array@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  signed __int64 v4; // r9
  signed __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  SIZE_T v12; // rcx
  unsigned __int64 v13; // r10
  __int64 v14; // rbp
  char *v15; // rdi
  char *v16; // rcx
  _BYTE *v17; // r8
  _BYTE *v18; // rdx
  size_t v19; // r8

  v4 = a2 - (_BYTE *)*a1;
  v7 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v8 = v4 / 40;
  v9 = v7 / 40;
  if ( v7 / 40 == 0x666666666666666LL )
    std::_Xlength_error((const char *)v7);
  v10 = v9 + 1;
  v11 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v9 + 1);
  v12 = 40 * v11;
  if ( v11 > v13 )
    v12 = -1LL;
  v14 = 5 * v8;
  v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v16 = v15;
  *(_OWORD *)&v15[8 * v14] = *(_OWORD *)a3;
  *(_OWORD *)&v15[8 * v14 + 16] = *(_OWORD *)(a3 + 16);
  *(_QWORD *)&v15[8 * v14 + 32] = *(_QWORD *)(a3 + 32);
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = v17 - v18;
  }
  else
  {
    memmove_0(v15, v18, a2 - (_BYTE *)*a1);
    v19 = (_BYTE *)a1[1] - a2;
    v16 = &v15[8 * v14 + 40];
    v18 = a2;
  }
  memmove_0(v16, v18, v19);
  std::vector<CContent::LayoutData>::_Change_array(a1, v15, v10, v11);
  return (__int64)*a1 + 40 * v8;
}
