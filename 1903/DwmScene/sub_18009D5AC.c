/*
 * XREFs of sub_18009D5AC @ 0x18009D5AC
 * Callers:
 *     sub_180018120 @ 0x180018120 (sub_180018120.c)
 *     sub_18001B930 @ 0x18001B930 (sub_18001B930.c)
 * Callees:
 *     sub_18002627C @ 0x18002627C (sub_18002627C.c)
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18009D5AC(__int64 a1))()
{
  __int64 ***v2; // rbx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx
  __int64 *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-10h] BYREF

  v2 = (__int64 ***)(a1 + 112);
  *(_QWORD *)a1 = &Spectre::Engine::Texture::`vftable';
  sub_18002627C((_QWORD *)(a1 + 112));
  v3 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
    j__o_free(v4);
  sub_180026420(v2, &v7, **v2, (__int64 *)*v2);
  j_j__o_free(*v2);
  v5 = *(volatile signed __int32 **)(a1 + 104);
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  sub_180026554((__int64 ***)(a1 + 80), &v8, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_180063F2C(a1);
}
