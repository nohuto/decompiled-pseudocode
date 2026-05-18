/*
 * XREFs of sub_1800983BC @ 0x1800983BC
 * Callers:
 *     sub_180012A54 @ 0x180012A54 (sub_180012A54.c)
 *     sub_180098080 @ 0x180098080 (sub_180098080.c)
 * Callees:
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     sub_180097D80 @ 0x180097D80 (sub_180097D80.c)
 *     sub_1800F0940 @ 0x1800F0940 (sub_1800F0940.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800983BC(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  char v9; // [rsp+2Dh] [rbp-4Bh]
  __int64 v10; // [rsp+30h] [rbp-48h]
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int64 *v14; // [rsp+50h] [rbp-28h]

  v12 = -2LL;
  v13 = a1;
  v14 = a2;
  v11 = 15LL;
  LOBYTE(v8) = 0;
  v10 = 13LL;
  memmove(&v8, "Mesh Instance", 0xDuLL);
  v9 = 0;
  sub_1800F0940(a1, &v8, a2);
  if ( v11 >= 0x10 )
  {
    v4 = v8;
    if ( v11 + 1 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v8 - 8);
      if ( (unsigned __int64)(v8 - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v11 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_BYTE *)(a1 + 168) = -1;
  *(_OWORD *)(a1 + 172) = xmmword_18025DF88;
  v5 = *a2;
  sub_180087414(*a2);
  *(_QWORD *)(v5 + 448) |= 8uLL;
  sub_180097D80((__int64 *)(a1 + 104), 1uLL, a1 + 104);
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a1;
}
