/*
 * XREFs of PopThreadGuardedObject @ 0x1C001E1D0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0043B40 (NtGdiOpenDCW.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0044B20 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00480E4 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     CaptureDriverInfo2W @ 0x1C0060B40 (CaptureDriverInfo2W.c)
 *     GdiThreadCallout @ 0x1C0061970 (GdiThreadCallout.c)
 *     CaptureDEVMODEW @ 0x1C006BF30 (CaptureDEVMODEW.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0072744 (GreCreatePolyPolygonRgnInternal.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0072AB4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     vFreeDriverInfo2 @ 0x1C00739A0 (vFreeDriverInfo2.c)
 *     GrePopThreadGuardedObject @ 0x1C00C2B50 (GrePopThreadGuardedObject.c)
 *     MultiUserNtGreCleanup @ 0x1C00C4240 (MultiUserNtGreCleanup.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThreadGuardedObject(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  if ( a1 )
  {
    KeEnterCriticalRegion();
    v2 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    a1[1] = a1;
    *a1 = a1;
    KeLeaveCriticalRegion();
  }
}
