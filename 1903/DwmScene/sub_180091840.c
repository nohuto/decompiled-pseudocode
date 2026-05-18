/*
 * XREFs of sub_180091840 @ 0x180091840
 * Callers:
 *     sub_180092E40 @ 0x180092E40 (sub_180092E40.c)
 * Callees:
 *     sub_1800912BC @ 0x1800912BC (sub_1800912BC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180091840(__int64 a1, __int64 *a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  float v13; // [rsp+24h] [rbp-34h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 *v16; // [rsp+38h] [rbp-20h]

  v14 = -2LL;
  v15 = a1;
  v16 = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v13 = (float)a4;
  sub_1800912BC((_QWORD *)(a1 + 40), 1uLL, &v13);
  v6 = a2[3];
  if ( v6 >= 0x10 )
  {
    v7 = v6 + 1;
    v8 = *a2;
    if ( v7 >= 0x1000 )
    {
      v9 = v7 + 39;
      v10 = *(_QWORD *)(v8 - 8);
      v11 = v8 - v10;
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v9);
        JUMPOUT(0x18009192CLL);
      }
      v8 = v10;
    }
    j_j__o_free(v8);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
