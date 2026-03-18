/*
 * XREFs of ?GetIndexCount@CMeshGeometry2D@@UEAAIXZ @ 0x1801A7C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2D::GetIndexCount(CMeshGeometry2D *this)
{
  return *((_DWORD *)this + 40) >> 2;
}
