/*
 * XREFs of sub_180121EA0 @ 0x180121EA0
 * Callers:
 *     sub_1800733F8 @ 0x1800733F8 (sub_1800733F8.c)
 * Callees:
 *     sub_18006DF24 @ 0x18006DF24 (sub_18006DF24.c)
 *     sub_180122F98 @ 0x180122F98 (sub_180122F98.c)
 *     sub_180123A6C @ 0x180123A6C (sub_180123A6C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180121EA0(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v5; // rbx

  sub_180123A6C();
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 64), 2);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = sub_180122F98(a1 + 144);
  Mtx_init_in_situ((_Mtx_t)(a1 + 160), 2);
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 240) = sub_18006DF24();
  *(_DWORD *)(a1 + 256) = 0;
  v5 = *(volatile signed __int32 **)(a3 + 8);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
