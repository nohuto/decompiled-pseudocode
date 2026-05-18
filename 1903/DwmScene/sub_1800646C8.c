/*
 * XREFs of sub_1800646C8 @ 0x1800646C8
 * Callers:
 *     sub_18000E418 @ 0x18000E418 (sub_18000E418.c)
 * Callees:
 *     sub_18000E00C @ 0x18000E00C (sub_18000E00C.c)
 *     sub_180041C80 @ 0x180041C80 (sub_180041C80.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_180063E80 @ 0x180063E80 (sub_180063E80.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800646C8(__int64 a1)
{
  const void **v2; // rax
  __int64 v3; // rcx
  __int128 v5; // [rsp+28h] [rbp-60h] BYREF
  __int128 v6; // [rsp+38h] [rbp-50h]
  __int64 v7; // [rsp+48h] [rbp-40h]
  __int64 v8; // [rsp+50h] [rbp-38h]
  _QWORD v9[3]; // [rsp+58h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp-18h]

  v7 = -2LL;
  v8 = a1;
  sub_180063E80((_QWORD *)a1, 10, 3u);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 120) = sub_180041C80();
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  _InterlockedExchangeAdd(&dword_18026A044, 1u);
  sub_18000E00C(v9, dword_18026A044);
  v2 = sub_180056944(v9, 0LL, "FrameBuffer", 0xBuLL);
  v6 = 0uLL;
  v5 = *(_OWORD *)v2;
  v6 = *((_OWORD *)v2 + 1);
  v2[2] = 0LL;
  v2[3] = (const void *)15;
  *(_BYTE *)v2 = 0;
  sub_1800644E4(a1, (__int64 *)&v5);
  if ( v10 >= 0x10 )
  {
    v3 = v9[0];
    if ( v10 + 1 >= 0x1000 )
    {
      v3 = *(_QWORD *)(v9[0] - 8LL);
      if ( (unsigned __int64)(v9[0] - v3 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v3, v10 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v3);
  }
  return a1;
}
