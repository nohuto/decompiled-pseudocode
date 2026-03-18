/*
 * XREFs of ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0042118
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005373C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0240D88 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C02710FC (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00012FC (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall DXGDIAGNOSTICS::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx
  DXGFASTMUTEX *v3; // rcx

  v2 = (void *)P[6];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (DXGFASTMUTEX *)P[7];
  if ( v3 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v3);
    P[7] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  return P;
}
