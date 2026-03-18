/*
 * XREFs of DpiPdoRemovePdoObjects @ 0x1C0277564
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01486F0 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0263B28 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C0274D40 (DpiPdoDestroyPendingPdoObjects.c)
 *     DpiPdoRemovePdo @ 0x1C02772BC (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoRemovePdoObjects(__int64 a1, char a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rbx
  struct _ERESOURCE *v7; // r15
  bool v8; // si
  __int64 v9; // r8
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax

  v3 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  v7 = (struct _ERESOURCE *)(v3 + 3232);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3232), 1u);
  v8 = (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0;
  v10 = (_QWORD *)(v3 + 3392);
  v11 = *(_QWORD **)(v3 + 3392);
  while ( v11 != v10 )
  {
    v12 = (__int64)(v11 - 4);
    v11 = (_QWORD *)*v11;
    v13 = *(_QWORD *)(v12 + 48);
    if ( v13 )
    {
      if ( a2 )
        *(_BYTE *)(*(_QWORD *)(v13 + 64) + 509LL) = 0;
      LOBYTE(v9) = v8;
      DpiPdoRemovePdo(a1, v12, v9, a3);
    }
  }
  if ( a2 )
    DpiPdoDestroyPendingPdoObjects(a1);
  if ( v8 )
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return 0LL;
}
