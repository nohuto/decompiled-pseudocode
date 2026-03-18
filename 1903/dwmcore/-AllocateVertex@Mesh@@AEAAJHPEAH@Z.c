/*
 * XREFs of ?AllocateVertex@Mesh@@AEAAJHPEAH@Z @ 0x1801B9270
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801B92EC (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mesh::AllocateVertex(Mesh *this, int a2, int *a3)
{
  int v3; // eax
  int v4; // r9d
  __int64 result; // rax

  v3 = *((_DWORD *)this + 3);
  v4 = v3 + a2;
  if ( v3 + a2 > *((_DWORD *)this + 2) )
    return 2147942414LL;
  *a3 = v3;
  result = 0LL;
  *((_DWORD *)this + 3) = v4;
  return result;
}
