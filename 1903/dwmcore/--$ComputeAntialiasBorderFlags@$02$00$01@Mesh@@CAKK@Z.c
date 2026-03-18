/*
 * XREFs of ??$ComputeAntialiasBorderFlags@$02$00$01@Mesh@@CAKK@Z @ 0x1800CB0AC
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180057590 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801B92EC (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::ComputeAntialiasBorderFlags<3,1,2>(char a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = (a1 & 3) - 1;
  if ( !v1 )
    return 4LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 8LL;
  if ( v2 == 1 )
    return 12LL;
  return 0LL;
}
