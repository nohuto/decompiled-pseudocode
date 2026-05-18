/*
 * XREFs of sub_18010FFE4 @ 0x18010FFE4
 * Callers:
 *     sub_180110D20 @ 0x180110D20 (sub_180110D20.c)
 * Callees:
 *     sub_180015DF4 @ 0x180015DF4 (sub_180015DF4.c)
 *     sub_180056A54 @ 0x180056A54 (sub_180056A54.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_1800D7B1C @ 0x1800D7B1C (sub_1800D7B1C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18010FFE4(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  int v4; // ebx
  int v5; // r14d
  int v6; // esi
  _QWORD *v7; // rax
  const void **v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int128 v12; // [rsp+30h] [rbp-71h] BYREF
  __int128 v13; // [rsp+40h] [rbp-61h]
  __int64 v14; // [rsp+50h] [rbp-51h]
  __int64 v15[3]; // [rsp+58h] [rbp-49h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp-31h]
  _QWORD *v17; // [rsp+78h] [rbp-29h] BYREF
  __int64 v18; // [rsp+80h] [rbp-21h]
  __int64 v19; // [rsp+88h] [rbp-19h] BYREF
  __int64 v20; // [rsp+90h] [rbp-11h]
  _DWORD v21[7]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v22; // [rsp+B4h] [rbp+13h]
  int v23; // [rsp+C4h] [rbp+23h]
  int v24; // [rsp+C8h] [rbp+27h]

  v14 = -2LL;
  v4 = 1;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      v4 = 0;
    }
    else if ( *a3 != 2 )
    {
      switch ( *a3 )
      {
        case 3:
          v4 = 2;
          break;
        case 4:
          v4 = 7;
          break;
        case 5:
          v4 = 8;
          break;
        case 6:
          v4 = 9;
          break;
        case 7:
          v4 = 10;
          break;
        case 8:
          v4 = 6;
          break;
      }
    }
    if ( a3[1] == 1 )
      v5 = 2;
    else
      v5 = a3[1] == 3;
    if ( a3[2] == 1 )
      v6 = 2;
    else
      v6 = a3[2] == 3;
    v17 = 0LL;
    v18 = 0LL;
    v7 = (_QWORD *)sub_18006CE94(a2);
    sub_180015DF4(v7, &v17, 1u);
    sub_1800D7B1C(v15, _InterlockedExchangeAdd(&dword_18026BC40, 1u));
    v8 = sub_180056A54(v15, 0LL, "Deserialized sampler ", 0x15uLL);
    v13 = 0uLL;
    v12 = *(_OWORD *)v8;
    v13 = *((_OWORD *)v8 + 1);
    v8[2] = 0LL;
    v8[3] = (const void *)15;
    *(_BYTE *)v8 = 0;
    sub_1800645F4((__int64)v17, (__int64 *)&v12);
    if ( v16 >= 0x10 )
    {
      v9 = v15[0];
      if ( v16 + 1 >= 0x1000 )
      {
        v9 = *(_QWORD *)(v15[0] - 8);
        if ( (unsigned __int64)(v15[0] - v9 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v9, v16 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v9);
    }
    v21[3] = 0;
    v21[4] = 0;
    v21[5] = 1;
    v21[6] = 7;
    v22 = xmmword_18025F030;
    v23 = 0;
    v24 = 2139095039;
    v21[0] = v4;
    v21[1] = v5;
    v21[2] = v6;
    sub_18009F6C0(v17, v21, 0LL);
    *a1 = v17;
    a1[1] = v18;
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
    v10 = (_QWORD *)sub_18006CE94(a2);
    sub_180015DF4(v10, &v19, 1u);
    *a1 = v19;
    a1[1] = v20;
  }
  return a1;
}
