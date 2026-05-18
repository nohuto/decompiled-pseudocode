/*
 * XREFs of sub_180064A1C @ 0x180064A1C
 * Callers:
 *     sub_180064B70 @ 0x180064B70 (sub_180064B70.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_180064A1C(__int64 a1))()
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-10h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 160);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = *(volatile signed __int32 **)(a1 + 144);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  sub_180026530((__int64 ***)(a1 + 120), &v6, **(__int64 ***)(a1 + 120), *(__int64 **)(a1 + 120));
  j_j__o_free(*(_QWORD *)(a1 + 120));
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180026664((__int64 ***)(a1 + 80), &v7, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_18006403C(a1);
}
