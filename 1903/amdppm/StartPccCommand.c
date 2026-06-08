/*
 * XREFs of StartPccCommand @ 0x1C0021F28
 * Callers:
 *     AcquirePccSubspace @ 0x1C00031E0 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 StartPccCommand()
{
  return (*(__int64 (__fastcall **)(_QWORD))(qword_1C0013940 + 88))(*(_QWORD *)(qword_1C0013940 + 56));
}
