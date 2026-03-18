/*
 * XREFs of ??1CRegion@@QEAA@XZ @ 0x18015F9D4
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRegion::~CRegion(void **this)
{
  FastRegion::CRegion::FreeMemory(this);
}
