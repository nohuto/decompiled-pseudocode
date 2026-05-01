/*
 * XREFs of ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180009E90
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     CemRcObjectCleanup @ 0x180009F60 (CemRcObjectCleanup.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0F8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006BB5C (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampClientPkgDestroy(struct _HAM_PACKAGE **a1)
{
  int v2; // eax
  char v3; // di

  CemRcObjectCleanup(a1);
  HampPkgAcquireLockExclusive(a1[7]);
  v2 = *((_DWORD *)a1 + 16);
  v3 = 1;
  if ( (v2 & 1) != 0 )
  {
    *((_DWORD *)a1[7] + 85) &= ~1u;
    v2 = *((_DWORD *)a1 + 16);
  }
  if ( (v2 & 2) != 0 )
    *((_DWORD *)a1[7] + 85) &= ~2u;
  else
    v3 = 0;
  HampPkgReleaseLockExclusive(a1[7]);
  if ( v3 )
    HampPkgNotifyDebugModeChanged(a1[7]);
  CemRcObjectDereference(a1[7]);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
