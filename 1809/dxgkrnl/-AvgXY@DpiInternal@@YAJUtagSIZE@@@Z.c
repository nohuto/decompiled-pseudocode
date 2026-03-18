/*
 * XREFs of ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000284C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00B98C8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::AvgXY(DpiInternal *this, struct tagSIZE a2)
{
  return (unsigned int)(((int)this + HIDWORD(this)) / 2);
}
