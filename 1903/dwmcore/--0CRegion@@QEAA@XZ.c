/*
 * XREFs of ??0CRegion@@QEAA@XZ @ 0x1800D6524
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this)
{
  *(_QWORD *)this = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  return this;
}
