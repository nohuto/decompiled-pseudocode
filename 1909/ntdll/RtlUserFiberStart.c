/*
 * XREFs of RtlUserFiberStart @ 0x18007FC20
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18006D750 (RtlExitUserThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(-1073741823);
}
