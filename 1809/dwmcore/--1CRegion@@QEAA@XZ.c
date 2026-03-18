/*
 * XREFs of ??1CRegion@@QEAA@XZ @ 0x1800926A0
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRegion::~CRegion(void **this)
{
  FastRegion::CRegion::FreeMemory(this);
}
