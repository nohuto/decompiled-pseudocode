/*
 * XREFs of sub_1800D2F44 @ 0x1800D2F44
 * Callers:
 *     sub_1800D3040 @ 0x1800D3040 (sub_1800D3040.c)
 *     sub_1800F63B0 @ 0x1800F63B0 (sub_1800F63B0.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D2F44(__int64 a1))()
{
  _QWORD *v1; // rbx
  volatile signed __int32 *v3; // rcx
  __int64 *v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v6; // [rsp+28h] [rbp-10h] BYREF

  v1 = (_QWORD *)(a1 + 112);
  *(_QWORD *)a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  sub_180026420((__int64 ***)(a1 + 112), &v5, **(__int64 ***)(a1 + 112), *(__int64 **)(a1 + 112));
  j_j__o_free(*v1);
  v3 = *(volatile signed __int32 **)(a1 + 104);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  sub_180026554((__int64 ***)(a1 + 80), &v6, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_180063F2C(a1);
}
