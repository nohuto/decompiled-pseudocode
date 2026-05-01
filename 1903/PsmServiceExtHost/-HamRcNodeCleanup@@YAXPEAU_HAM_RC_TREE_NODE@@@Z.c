/*
 * XREFs of ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x18003A6E0
 * Callers:
 *     ?HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003A530 (-HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003A5E0 (-HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18003A654 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003FB30 (-HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x18003A708 (CemRcObjectCleanup.c)
 */

void __fastcall HamRcNodeCleanup(struct _HAM_RC_TREE_NODE *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference((_QWORD *)(v1 - 40));
}
