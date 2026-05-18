/*
 * XREFs of sub_180020778 @ 0x180020778
 * Callers:
 *     sub_180021890 @ 0x180021890 (sub_180021890.c)
 *     sub_1800256F0 @ 0x1800256F0 (sub_1800256F0.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180020778(__int64 a1)
{
  _QWORD *v1; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v7[16]; // [rsp+28h] [rbp-10h] BYREF

  v1 = (_QWORD *)(a1 + 128);
  *(_QWORD *)a1 = &Spectre::Engine::RenderState::`vftable';
  sub_180026420(a1 + 128, v6, **(_QWORD **)(a1 + 128));
  j_j__o_free(*v1);
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
  sub_180026554(a1 + 80, v7, **(_QWORD **)(a1 + 80), *(_QWORD *)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_180063F2C(a1);
}
