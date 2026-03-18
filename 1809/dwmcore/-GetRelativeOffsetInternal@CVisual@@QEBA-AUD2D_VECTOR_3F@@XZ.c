/*
 * XREFs of ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18009F378
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x180069440 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18009EC60 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18009F3A0 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A2130 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A23C0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_3F *__fastcall CVisual::GetRelativeOffsetInternal(
        CVisual *this,
        struct D2D_VECTOR_3F *__return_ptr retstr)
{
  __int64 v2; // rcx
  FLOAT v3; // eax
  __int64 i; // rcx

  v2 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v2 + 4) & 0x10000000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x4000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_QWORD *)&retstr->x = *(_QWORD *)(i + 4);
    v3 = *(float *)(i + 12);
  }
  else
  {
    v3 = 0.0;
    *(_QWORD *)&retstr->x = 0LL;
  }
  retstr->z = v3;
  return retstr;
}
