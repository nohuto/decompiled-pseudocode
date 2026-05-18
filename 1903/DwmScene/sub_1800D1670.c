/*
 * XREFs of sub_1800D1670 @ 0x1800D1670
 * Callers:
 *     sub_1800D1820 @ 0x1800D1820 (sub_1800D1820.c)
 *     sub_1800F9640 @ 0x1800F9640 (sub_1800F9640.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     sub_1800D1FB4 @ 0x1800D1FB4 (sub_1800D1FB4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D1670(__int64 a1))()
{
  volatile signed __int32 *v2; // rcx
  __int64 *v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v5; // [rsp+28h] [rbp-10h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 168);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_180026420((__int64 ***)(a1 + 144), &v4, **(__int64 ***)(a1 + 144), *(__int64 **)(a1 + 144));
  j_j__o_free(*(_QWORD *)(a1 + 144));
  sub_1800D1FB4(a1 + 112);
  sub_180026554((__int64 ***)(a1 + 80), &v5, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_180063F2C(a1);
}
