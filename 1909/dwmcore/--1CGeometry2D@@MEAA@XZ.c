/*
 * XREFs of ??1CGeometry2D@@MEAA@XZ @ 0x18019C84C
 * Callers:
 *     ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x18019D790 (--_GCGeometry2D@@MEAAPEAXI@Z.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x180211418 (--1CGeometry2DGroup@@MEAA@XZ.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x1802162A0 (--1CMeshGeometry2D@@MEAA@XZ.c)
 * Callees:
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x18020F8F8 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

void __fastcall CGeometry2D::~CGeometry2D(CGeometry2D *this)
{
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CGeometry2D::FreeCaches(this);
  CResource::~CResource(this);
}
