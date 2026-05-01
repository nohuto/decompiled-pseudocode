/*
 * XREFs of ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003FBE0
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectCleanup @ 0x18003A708 (CemRcObjectCleanup.c)
 */

void __fastcall HampHostIdStoreSessionDestroy(struct _CEM_RC_OBJECT *a1)
{
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
