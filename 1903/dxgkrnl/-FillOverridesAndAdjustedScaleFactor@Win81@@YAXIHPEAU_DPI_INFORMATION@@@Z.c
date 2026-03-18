/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B1F4
 * Callers:
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B0D4 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B5D8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C028ACF0 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C028ADEC (-CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

void __fastcall Win81::FillOverridesAndAdjustedScaleFactor(
        Win81 *this,
        __int64 a2,
        __int64 a3,
        struct _DPI_INFORMATION *a4)
{
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  const struct Win81::DPI_SCALE_FACTOR_COLLECTION *v8; // r9
  unsigned int v9; // eax

  v5 = (int)this;
  if ( !*(_DWORD *)(a3 + 12) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 595LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*(_DWORD *)(a3 + 32) || !*(_DWORD *)(a3 + 36) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 596LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Win81::CalculateMinMaxOverride(
    (Win81 *)*(unsigned int *)(a3 + 12),
    *(_QWORD *)(a3 + 32),
    (struct tagSIZE)(a3 + 80),
    (int *)(a3 + 88));
  if ( v5 )
  {
    *(_DWORD *)(a3 + 84) = 1234568;
    v9 = (100 * v5 + 48) / 0x60u;
  }
  else
  {
    v9 = Win81::AdjustDesktopScaleFactorForOverride(
           (Win81 *)*(unsigned int *)(a3 + 12),
           *(_QWORD *)(a3 + 32),
           (struct tagSIZE)*(unsigned int *)(a3 + 84),
           v8);
  }
  *(_DWORD *)(a3 + 8) = v9;
}
