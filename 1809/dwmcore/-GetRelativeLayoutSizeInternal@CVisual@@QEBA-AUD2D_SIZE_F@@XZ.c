/*
 * XREFs of ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18009FD04
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180069440 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18009F3A0 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18009FD28 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A2130 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A23C0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_F __fastcall CVisual::GetRelativeLayoutSizeInternal(CVisual *this, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v2 + 4) & 0x20000000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x3000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *a2 = *(_QWORD *)(i + 4);
  }
  else
  {
    *a2 = 0LL;
  }
  return (struct D2D_SIZE_F)a2;
}
