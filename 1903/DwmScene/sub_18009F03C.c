/*
 * XREFs of sub_18009F03C @ 0x18009F03C
 * Callers:
 *     sub_180018030 @ 0x180018030 (sub_180018030.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 * Callees:
 *     sub_18002627C @ 0x18002627C (sub_18002627C.c)
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18009F03C(__int64 a1))()
{
  __int64 ***v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-10h] BYREF

  v2 = (__int64 ***)(a1 + 128);
  *(_QWORD *)a1 = &Spectre::Engine::Sampler::`vftable';
  sub_18002627C((_QWORD *)(a1 + 128));
  sub_180026420(v2, &v6, **v2, (__int64 *)*v2);
  j_j__o_free(*v2);
  v3 = *(volatile signed __int32 **)(a1 + 120);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180026554((__int64 ***)(a1 + 80), &v7, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_180063F2C(a1);
}
