/*
 * XREFs of ??_GDXGDIAGNOSTICSWITHMUTEX@@QEAAPEAXI@Z @ 0x1C003F238
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C023BD8C (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0018AE0 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall DXGDIAGNOSTICSWITHMUTEX::`scalar deleting destructor'(_QWORD *P)
{
  DXGFASTMUTEX *v2; // rcx
  void *v3; // rcx

  v2 = (DXGFASTMUTEX *)P[5];
  if ( v2 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v2);
    P[5] = 0LL;
  }
  v3 = (void *)P[4];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
  return P;
}
