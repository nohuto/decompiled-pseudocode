/*
 * XREFs of sub_1800D1780 @ 0x1800D1780
 * Callers:
 *     sub_1800D1930 @ 0x1800D1930 (sub_1800D1930.c)
 *     sub_1800F9750 @ 0x1800F9750 (sub_1800F9750.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     sub_1800D20C4 @ 0x1800D20C4 (sub_1800D20C4.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D1780(__int64 a1))()
{
  volatile signed __int32 *v2; // rcx
  __int64 *v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v5; // [rsp+28h] [rbp-10h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayout::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 168);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_180026530((__int64 ***)(a1 + 144), &v4, **(__int64 ***)(a1 + 144), *(__int64 **)(a1 + 144));
  j_j__o_free(*(_QWORD *)(a1 + 144));
  sub_1800D20C4(a1 + 112);
  sub_180026664((__int64 ***)(a1 + 80), &v5, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_18006403C(a1);
}
