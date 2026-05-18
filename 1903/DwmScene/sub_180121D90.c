/*
 * XREFs of sub_180121D90 @ 0x180121D90
 * Callers:
 *     sub_1800732E8 @ 0x1800732E8 (sub_1800732E8.c)
 * Callees:
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_180122E88 @ 0x180122E88 (sub_180122E88.c)
 *     sub_18012395C @ 0x18012395C (sub_18012395C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180121D90(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v5; // rbx

  sub_18012395C();
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 64), 2);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = sub_180122E88(a1 + 144);
  Mtx_init_in_situ((_Mtx_t)(a1 + 160), 2);
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 240) = sub_18006DE14();
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
