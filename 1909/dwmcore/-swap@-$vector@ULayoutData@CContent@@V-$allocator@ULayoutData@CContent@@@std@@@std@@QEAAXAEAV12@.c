/*
 * XREFs of ?swap@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAXAEAV12@@Z @ 0x1801FB054
 * Callers:
 *     ?GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801FAB70 (-GetTextureMemoryLayoutData@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConten.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CContent::LayoutData>::swap(__int64 *a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v3 = *a1;
    *a1 = *a2;
    *a2 = v3;
    v4 = a1[1];
    a1[1] = a2[1];
    a2[1] = v4;
    result = a2[2];
    v6 = a1[2];
    a1[2] = result;
    a2[2] = v6;
  }
  return result;
}
