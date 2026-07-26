/*
 * XREFs of ?ndisVerifierNdisFPauseComplete@@YAXPEAX@Z @ 0x1C00A9BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisVerifierNdisFPauseComplete(void *a1)
{
  ndisVerifierNdisDispatch->NdisFPauseComplete(
    a1,
    (void *)*((_QWORD *)a1 + 98),
    (void (__fastcall *)(void *))NdisFPauseComplete);
}
