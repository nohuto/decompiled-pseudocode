/*
 * XREFs of ?ndisWorkItemHandler@@YAXPEAX@Z @ 0x1C001CCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisWorkItemHandler(_QWORD *a1)
{
  ((void (__fastcall *)(_QWORD *, _QWORD))a1[1])(a1, *a1);
}
