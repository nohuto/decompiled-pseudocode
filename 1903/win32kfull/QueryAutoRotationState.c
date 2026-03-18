/*
 * XREFs of QueryAutoRotationState @ 0x1C01D5EB4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 QueryAutoRotationState()
{
  return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
}
