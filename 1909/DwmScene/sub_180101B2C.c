/*
 * XREFs of sub_180101B2C @ 0x180101B2C
 * Callers:
 *     sub_1800BCABC @ 0x1800BCABC (sub_1800BCABC.c)
 *     sub_180101A78 @ 0x180101A78 (sub_180101A78.c)
 * Callees:
 *     sub_1800F0A50 @ 0x1800F0A50 (sub_1800F0A50.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180101B2C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdi
  _QWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  _QWORD *v10; // [rsp+48h] [rbp-20h]

  v9 = -2LL;
  v10 = a2;
  v8 = 15LL;
  LOBYTE(v7[0]) = 0;
  v7[2] = 5LL;
  memmove(v7, "Aimer", 5uLL);
  BYTE5(v7[0]) = 0;
  sub_1800F0A50(a1, (__int64)v7, a2);
  if ( v8 >= 0x10 )
  {
    v4 = v7[0];
    if ( v8 + 1 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v7[0] - 8LL);
      if ( (unsigned __int64)(v7[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v8 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = &Spectre::Engine::Aimer::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = xmmword_18025E7F8;
  v5 = (volatile signed __int32 *)a2[1];
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
