/*
 * XREFs of ??1CRegion@@QEAA@XZ @ 0x18004AFB0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRegion::~CRegion(CRegion *this)
{
  FastRegion::CRegion::FreeMemory(this);
}
