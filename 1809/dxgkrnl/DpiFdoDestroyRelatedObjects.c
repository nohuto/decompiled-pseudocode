/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x1C0263B28
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C0266DB0 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01446B4 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0277564 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C0277D4C (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a1 + 64);
  DpiGdoDestroyGdiObjects(a1);
  KeWaitForSingleObject((PVOID)(v2 + 3480), Executive, 0, 0, 0LL);
  KeReleaseMutex((PRKMUTEX)(v2 + 3480), 0);
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
  {
    DmmResetModeState(*(PERESOURCE **)(v2 + 3792), -1);
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL, a2);
}
