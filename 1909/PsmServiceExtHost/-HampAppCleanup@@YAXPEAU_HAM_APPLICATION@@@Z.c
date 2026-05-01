/*
 * XREFs of ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003A654
 * Callers:
 *     ?HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003A620 (-HampAppDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180014CD0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003A6E0 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x18003A79C (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppCleanup(struct _HAM_PACKAGE **a1)
{
  struct _HAM_PACKAGE *v2; // rcx
  struct _HAM_PACKAGE *v3; // rcx

  if ( ((_DWORD)a1[77] & 0xE0) != 0x80 )
    HampPkgPushUpdate(a1[11]);
  if ( ((_DWORD)a1[76] & 0x10000) != 0 )
    HampHostIdStoreInvalidateForApplication(
      (struct _HAM_HOSTID_STORE *)((*(_QWORD *)(*(_QWORD *)((*((_QWORD *)a1[11] + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 440),
      (struct _HAM_APPLICATION *)a1);
  v2 = a1[70];
  if ( v2 )
    TpReleaseWork(v2);
  HamRcNodeCleanup((struct _HAM_RC_TREE_NODE *)a1);
  v3 = a1[11];
  if ( v3 )
    CemRcObjectDereference(v3);
}
