/*
 * XREFs of ??0CRegionShape@@QEAA@XZ @ 0x18004E548
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CRegionShape *__fastcall CRegionShape::CRegionShape(CRegionShape *this)
{
  CRegionShape *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRegionShape::`vftable';
  *((_QWORD *)this + 2) = (char *)this + 24;
  *((_DWORD *)this + 6) = 0;
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
