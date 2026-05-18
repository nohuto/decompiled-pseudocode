/*
 * XREFs of sub_18006A22C @ 0x18006A22C
 * Callers:
 *     sub_180033108 @ 0x180033108 (sub_180033108.c)
 *     sub_18006A2F0 @ 0x18006A2F0 (sub_18006A2F0.c)
 * Callees:
 *     sub_18006A950 @ 0x18006A950 (sub_18006A950.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18006A22C(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  volatile signed __int32 *v5; // rcx

  *a1 = &Spectre::Engine::CommandList::`vftable';
  if ( a1[12] )
    sub_18006A950(a1);
  v2 = (volatile signed __int32 *)a1[17];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (void (__fastcall ***)(_QWORD, __int64))a1[12];
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = (volatile signed __int32 *)a1[10];
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  return sub_18006403C((__int64)a1);
}
