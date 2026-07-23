/*
 * XREFs of _guard_icall_bugcheck @ 0x1401C5F80
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140120720 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x1401C5FE0 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
