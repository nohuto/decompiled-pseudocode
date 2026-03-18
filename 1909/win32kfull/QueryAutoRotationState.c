/*
 * XREFs of QueryAutoRotationState @ 0x1C01D5D24
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 QueryAutoRotationState()
{
  return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
}
