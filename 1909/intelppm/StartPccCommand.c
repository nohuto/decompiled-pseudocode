/*
 * XREFs of StartPccCommand @ 0x1C0030164
 * Callers:
 *     AcquirePccSubspace @ 0x1C000A760 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

__int64 StartPccCommand()
{
  return (*(__int64 (__fastcall **)(_QWORD))(qword_1C001B8C0 + 88))(*(_QWORD *)(qword_1C001B8C0 + 56));
}
