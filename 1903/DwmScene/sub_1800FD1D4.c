/*
 * XREFs of sub_1800FD1D4 @ 0x1800FD1D4
 * Callers:
 *     sub_180132B60 @ 0x180132B60 (sub_180132B60.c)
 *     sub_180132B78 @ 0x180132B78 (sub_180132B78.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_4 @ 0x180132BB0 (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_4.c)
 *     sub_180132BBC @ 0x180132BBC (sub_180132BBC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FD1D4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}
