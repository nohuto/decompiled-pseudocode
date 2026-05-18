/*
 * XREFs of sub_1800A2B04 @ 0x1800A2B04
 * Callers:
 *     sub_1800A2FA0 @ 0x1800A2FA0 (sub_1800A2FA0.c)
 *     sub_1800A5A80 @ 0x1800A5A80 (sub_1800A5A80.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800A2B04(__int64 a1))()
{
  _QWORD *v1; // rbx
  volatile signed __int32 *v3; // rcx
  volatile signed __int32 *v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-10h] BYREF

  v1 = (_QWORD *)(a1 + 136);
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  sub_180026420((__int64 ***)(a1 + 136), &v6, **(__int64 ***)(a1 + 136), *(__int64 **)(a1 + 136));
  j_j__o_free(*v1);
  v3 = *(volatile signed __int32 **)(a1 + 128);
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180026554((__int64 ***)(a1 + 80), &v7, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_180063F2C(a1);
}
