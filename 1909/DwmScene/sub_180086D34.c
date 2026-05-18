/*
 * XREFs of sub_180086D34 @ 0x180086D34
 * Callers:
 *     sub_1800F0FE4 @ 0x1800F0FE4 (sub_1800F0FE4.c)
 *     sub_180102AC0 @ 0x180102AC0 (sub_180102AC0.c)
 * Callees:
 *     sub_180084480 @ 0x180084480 (sub_180084480.c)
 *     sub_180086B60 @ 0x180086B60 (sub_180086B60.c)
 *     sub_180087390 @ 0x180087390 (sub_180087390.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_180086D34(__int64 a1, _DWORD *a2, __int64 a3, int a4)
{
  __m128 *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  _OWORD v15[4]; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD v16[4]; // [rsp+60h] [rbp-A8h] BYREF
  __m128 v17[4]; // [rsp+A0h] [rbp-68h] BYREF

  if ( a4 )
  {
    if ( a4 == 2 )
    {
      v7 = (__m128 *)sub_180084480(a1, v16);
    }
    else
    {
      sub_180087450(a1);
      if ( *(_QWORD *)(a1 + 352) != *(_QWORD *)(a1 + 208) )
        sub_180087390(a1);
      v7 = (__m128 *)v15;
      v8 = *(_OWORD *)(a1 + 240);
      v15[0] = *(_OWORD *)(a1 + 224);
      v9 = *(_OWORD *)(a1 + 256);
      v15[1] = v8;
      v10 = *(_OWORD *)(a1 + 272);
      v15[2] = v9;
      v15[3] = v10;
    }
    v11 = v7[1];
    v17[0] = *v7;
    v12 = v7[2];
    v17[1] = v11;
    v13 = v7[3];
    v17[2] = v12;
    v17[3] = v13;
    sub_180086B60(a2, (unsigned __int64 *)a3, v17);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)a3;
    a2[2] = *(_DWORD *)(a3 + 8);
  }
  return a2;
}
