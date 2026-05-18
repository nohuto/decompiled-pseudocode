/*
 * XREFs of sub_1800A4B48 @ 0x1800A4B48
 * Callers:
 *     sub_180018380 @ 0x180018380 (sub_180018380.c)
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800C1450 @ 0x1800C1450 (sub_1800C1450.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800C4490 @ 0x1800C4490 (sub_1800C4490.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800FAB30 @ 0x1800FAB30 (sub_1800FAB30.c)
 *     sub_180113740 @ 0x180113740 (sub_180113740.c)
 * Callees:
 *     sub_1800A205C @ 0x1800A205C (sub_1800A205C.c)
 *     sub_1800A629C @ 0x1800A629C (sub_1800A629C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A4B48(__int64 a1, _QWORD *a2, size_t *a3)
{
  __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  size_t v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  size_t v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  size_t v17; // rcx
  _QWORD *result; // rax
  _QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-38h] BYREF

  v19[1] = -2LL;
  v20[2] = a3;
  v19[0] = 0LL;
  v5 = (__int64 *)(a1 + 18560);
  sub_1800A629C(a1 + 18560, v19, a3);
  if ( v19[0] == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v6 = a3[3];
    if ( v6 < 0x10 )
      goto LABEL_13;
    v7 = v6 + 1;
    v8 = *a3;
    if ( v7 < 0x1000 )
      goto LABEL_12;
    v9 = v7 + 39;
    v10 = *(_QWORD *)(v8 - 8);
    v11 = v8 - v10;
    if ( v11 - 8 <= 0x1F )
    {
LABEL_11:
      v8 = v10;
      goto LABEL_12;
    }
    o__invalid_parameter_noinfo_noreturn(v11, v9);
  }
  sub_1800A205C(v5, (__int64)v20, a3);
  v12 = v20[0];
  *a2 = 0LL;
  a2[1] = 0LL;
  v13 = *(_QWORD *)(v12 + 72);
  if ( v13 )
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  *a2 = *(_QWORD *)(v12 + 64);
  a2[1] = *(_QWORD *)(v12 + 72);
  v14 = a3[3];
  if ( v14 >= 0x10 )
  {
    v15 = v14 + 1;
    v8 = *a3;
    if ( v15 >= 0x1000 )
    {
      v16 = v15 + 39;
      v10 = *(_QWORD *)(v8 - 8);
      v17 = v8 - v10;
      if ( v17 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v17, v16);
        JUMPOUT(0x1800A4C7ELL);
      }
      goto LABEL_11;
    }
LABEL_12:
    j_j__o_free(v8);
  }
LABEL_13:
  a3[2] = 0LL;
  a3[3] = 15LL;
  result = a2;
  *(_BYTE *)a3 = 0;
  return result;
}
