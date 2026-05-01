/*
 * XREFs of ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800088A8
 * Callers:
 *     ?HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180008814 (-HampAppCleanup@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180009F20 (-HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003EFA0 (-HampUserDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006D1F0 (-HampHostIdStoreApplicationDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectCleanup @ 0x180009F60 (CemRcObjectCleanup.c)
 */

void __fastcall HamRcNodeCleanup(struct _HAM_RC_TREE_NODE *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  CemRcObjectCleanup(a1);
  CemRcObjectDereference((_QWORD *)(v1 - 40));
}
