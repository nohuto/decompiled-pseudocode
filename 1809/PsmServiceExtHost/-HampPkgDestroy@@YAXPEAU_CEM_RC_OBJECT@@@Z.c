/*
 * XREFs of ?HampPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180009F20
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800088A8 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 */

void __fastcall HampPkgDestroy(struct _CEM_RC_OBJECT *a1)
{
  _QWORD *v2; // rcx

  HamRcNodeCleanup(a1);
  v2 = (_QWORD *)*((_QWORD *)a1 + 11);
  if ( v2 )
    CemRcObjectDereference(v2);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
