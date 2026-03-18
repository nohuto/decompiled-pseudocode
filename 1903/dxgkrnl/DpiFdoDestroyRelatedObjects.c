/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x1C029F000
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C015F448 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C02A2680 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C01569D4 (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     DpiPdoRemovePdoObjects @ 0x1C02AFDD8 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C02B02C4 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 64);
  DpiGdoDestroyGdiObjects(a1);
  KeWaitForSingleObject((PVOID)(v2 + 3584), Executive, 0, 0, 0LL);
  KeReleaseMutex((PRKMUTEX)(v2 + 3584), 0);
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
  {
    DmmResetModeState(*(PERESOURCE **)(v2 + 3896), 0xFFFFFFFFLL, v5);
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL, a2);
}
