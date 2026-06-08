/*
 * XREFs of StartPccCommand @ 0x1C002DB84
 * Callers:
 *     AcquirePccSubspace @ 0x1C000A210 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 StartPccCommand()
{
  return (*(__int64 (__fastcall **)(_QWORD))(qword_1C001A8B0 + 88))(*(_QWORD *)(qword_1C001A8B0 + 56));
}
