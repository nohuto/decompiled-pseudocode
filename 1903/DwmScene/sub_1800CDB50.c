/*
 * XREFs of sub_1800CDB50 @ 0x1800CDB50
 * Callers:
 *     sub_1800CDB10 @ 0x1800CDB10 (sub_1800CDB10.c)
 *     sub_1800CDB20 @ 0x1800CDB20 (sub_1800CDB20.c)
 *     sub_1800CDB30 @ 0x1800CDB30 (sub_1800CDB30.c)
 *     sub_1800CDB40 @ 0x1800CDB40 (sub_1800CDB40.c)
 *     sub_1800CDEFC @ 0x1800CDEFC (sub_1800CDEFC.c)
 *     sub_1800CDF10 @ 0x1800CDF10 (sub_1800CDF10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CDB50(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180063F2C((__int64)a1);
}
