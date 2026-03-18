/*
 * XREFs of ??0CRegion@@QEAA@XZ @ 0x18009E1F4
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this)
{
  *(_QWORD *)this = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  return this;
}
