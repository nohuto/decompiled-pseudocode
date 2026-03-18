/*
 * XREFs of DpiUnmapIommuIdentityRangeInternal @ 0x1C0049804
 * Callers:
 *     DpiUnmapIommuIdentityRange @ 0x1C02634A0 (DpiUnmapIommuIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiUnmapIommuIdentityRangeInternal(__int64 a1)
{
  return ((__int64 (__fastcall *)(_QWORD))qword_1C008EC90)(*(_QWORD *)(a1 + 80));
}
