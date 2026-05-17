/*
 * XREFs of RtlUserFiberStart @ 0x180081BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(0xC0000001);
}
