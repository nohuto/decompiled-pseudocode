/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C026AB34
 * Callers:
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C008A04C (GreReferenceObject.c)
 * Callees:
 *     <none>
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  HSURF v3; // rcx

  v3 = a2;
  LOBYTE(a2) = 5;
  *(_QWORD *)this = HmgShareLockCheck(v3, a2);
  return this;
}
