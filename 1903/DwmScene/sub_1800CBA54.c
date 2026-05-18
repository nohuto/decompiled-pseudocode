/*
 * XREFs of sub_1800CBA54 @ 0x1800CBA54
 * Callers:
 *     sub_180020518 @ 0x180020518 (sub_180020518.c)
 *     sub_1800CBAA0 @ 0x1800CBAA0 (sub_1800CBAA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CBA54(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180063F2C((__int64)a1);
}
