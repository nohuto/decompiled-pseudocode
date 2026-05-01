/*
 * XREFs of ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180008814
 * Callers:
 *     ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800087E0 (-HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x1800071D0 (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800088A8 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180013FEC (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 */

void __fastcall HampAppCleanup(struct _HAM_APPLICATION *a1)
{
  int v1; // eax
  _QWORD *v3; // rcx

  v1 = *((_DWORD *)a1 + 152);
  if ( (v1 & 7) != 4 )
  {
    HampPkgUpdateApplicationStateCounters(*((_QWORD *)a1 + 11));
    v1 = *((_DWORD *)a1 + 152);
  }
  if ( (v1 & 0x80000) != 0 )
    HampHostIdStoreInvalidateForApplication(
      (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*((_QWORD *)a1 + 11) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                          + 120)
                                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 456),
      a1);
  if ( *((_QWORD *)a1 + 70) )
    TpReleaseWork();
  HamRcNodeCleanup(a1);
  v3 = (_QWORD *)*((_QWORD *)a1 + 11);
  if ( v3 )
    CemRcObjectDereference(v3);
}
