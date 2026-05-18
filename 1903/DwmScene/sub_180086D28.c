/*
 * XREFs of sub_180086D28 @ 0x180086D28
 * Callers:
 *     sub_1800841D4 @ 0x1800841D4 (sub_1800841D4.c)
 *     sub_180085274 @ 0x180085274 (sub_180085274.c)
 *     sub_18008E5F0 @ 0x18008E5F0 (sub_18008E5F0.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1801029B0 @ 0x1801029B0 (sub_1801029B0.c)
 * Callees:
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     sub_180086B44 @ 0x180086B44 (sub_180086B44.c)
 *     sub_180087280 @ 0x180087280 (sub_180087280.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_180086D28(__int64 a1, _DWORD *a2, __int64 a3, int a4)
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
      v7 = (__m128 *)sub_180084370(a1, v16);
    }
    else
    {
      sub_180087340(a1);
      if ( *(_QWORD *)(a1 + 352) != *(_QWORD *)(a1 + 208) )
        sub_180087280(a1);
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
    sub_180086B44(a2, (unsigned __int64 *)a3, v17);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)a3;
    a2[2] = *(_DWORD *)(a3 + 8);
  }
  return a2;
}
