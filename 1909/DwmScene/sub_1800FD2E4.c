/*
 * XREFs of sub_1800FD2E4 @ 0x1800FD2E4
 * Callers:
 *     sub_180132C70 @ 0x180132C70 (sub_180132C70.c)
 *     sub_180132C88 @ 0x180132C88 (sub_180132C88.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_4 @ 0x180132CC0 (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_4.c)
 *     sub_180132CCC @ 0x180132CCC (sub_180132CCC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FD2E4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
