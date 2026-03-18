/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C000DB80
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C000DADC (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0047BC0 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0129540 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C000DC08 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

unsigned int __fastcall DpiInternal::AdjustDesktopScaleFactorForOverride(
        DpiInternal *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4,
        int a5)
{
  int v5; // r14d
  int v7; // ebx
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v12; // rax
  __int64 v13; // rax
  struct _DPI_SCALE_FACTOR_COLLECTION *v14; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+28h] [rbp-10h]

  v5 = (int)a4;
  v7 = a2;
  v8 = (int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 314LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL);
  v10 = 0;
  if ( v9 )
  {
    this = *(DpiInternal **)(*(_QWORD *)&a3 + 16LL);
    do
    {
      if ( v8 == *(_DWORD *)this )
        break;
      ++v10;
      this = (DpiInternal *)((char *)this + 4);
    }
    while ( v10 < v9 );
  }
  if ( v10 >= v9 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 296LL;
    WdLogEvent5_WdAssertion(v13);
  }
  LODWORD(v14) = a5;
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v10, v5, v7, a3, v14, v15);
}
