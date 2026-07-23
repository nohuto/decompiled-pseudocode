/*
 * XREFs of RtlUserFiberStart @ 0x18007F580
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(-1073741823);
}
