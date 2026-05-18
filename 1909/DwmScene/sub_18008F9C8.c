/*
 * XREFs of sub_18008F9C8 @ 0x18008F9C8
 * Callers:
 *     sub_18008FE40 @ 0x18008FE40 (sub_18008FE40.c)
 *     sub_1800A9F30 @ 0x1800A9F30 (sub_1800A9F30.c)
 * Callees:
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     sub_18009098C @ 0x18009098C (sub_18009098C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18008F9C8(__int64 a1))()
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  __int64 *v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v9; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::Material::`vftable';
  sub_18009098C(a1);
  v2 = *(volatile signed __int32 **)(a1 + 224);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_180026664((__int64 ***)(a1 + 200), &v8, **(__int64 ***)(a1 + 200), *(__int64 **)(a1 + 200));
  j_j__o_free(*(_QWORD *)(a1 + 200));
  v3 = *(volatile signed __int32 **)(a1 + 176);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 144);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = *(volatile signed __int32 **)(a1 + 128);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a1 + 104);
  if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  sub_180026664((__int64 ***)(a1 + 80), &v9, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_18006403C(a1);
}
