/*
 * XREFs of sub_18006A11C @ 0x18006A11C
 * Callers:
 *     sub_180032FF8 @ 0x180032FF8 (sub_180032FF8.c)
 *     sub_18006A1E0 @ 0x18006A1E0 (sub_18006A1E0.c)
 * Callees:
 *     sub_18006A840 @ 0x18006A840 (sub_18006A840.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_18006A11C(_QWORD *a1))()
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  volatile signed __int32 *v5; // rcx

  *a1 = &Spectre::Engine::CommandList::`vftable';
  if ( a1[12] )
    sub_18006A840(a1);
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
  return sub_180063F2C((__int64)a1);
}
