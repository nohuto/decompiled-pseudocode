/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x1406EAF50
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewInSystemSpace @ 0x14066E434 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (__int64)qword_140464960, a2, a3, a4, a5, 0LL);
}
