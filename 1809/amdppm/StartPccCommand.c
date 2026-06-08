/*
 * XREFs of StartPccCommand @ 0x1C00218DC
 * Callers:
 *     AcquirePccSubspace @ 0x1C0003630 (AcquirePccSubspace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 StartPccCommand()
{
  return (*(__int64 (__fastcall **)(_QWORD))(qword_1C0011900 + 88))(*(_QWORD *)(qword_1C0011900 + 56));
}
