/*
 * XREFs of sub_1800DD144 @ 0x1800DD144
 * Callers:
 *     sub_1800DBEFC @ 0x1800DBEFC (sub_1800DBEFC.c)
 * Callees:
 *     sub_180090C88 @ 0x180090C88 (sub_180090C88.c)
 *     sub_18009BA9C @ 0x18009BA9C (sub_18009BA9C.c)
 *     sub_18009EC2C @ 0x18009EC2C (sub_18009EC2C.c)
 *     sub_1800B0A20 @ 0x1800B0A20 (sub_1800B0A20.c)
 *     sub_1800B0E64 @ 0x1800B0E64 (sub_1800B0E64.c)
 *     sub_1800B1094 @ 0x1800B1094 (sub_1800B1094.c)
 *     sub_1800B11FC @ 0x1800B11FC (sub_1800B11FC.c)
 *     sub_1800F5E90 @ 0x1800F5E90 (sub_1800F5E90.c)
 *     sub_1800F610C @ 0x1800F610C (sub_1800F610C.c)
 *     sub_18010B3B4 @ 0x18010B3B4 (sub_18010B3B4.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DD144(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int128 v20; // [rsp+30h] [rbp-D0h]
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v27[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+B8h] [rbp-48h]
  __int128 v29; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v32; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v33; // [rsp+100h] [rbp+0h] BYREF
  __int128 v34; // [rsp+110h] [rbp+10h] BYREF
  __int64 v35; // [rsp+120h] [rbp+20h]
  _BYTE v36[8]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v37; // [rsp+130h] [rbp+30h]
  __int128 v38; // [rsp+140h] [rbp+40h] BYREF
  __int128 v39; // [rsp+150h] [rbp+50h] BYREF
  __int128 v40; // [rsp+160h] [rbp+60h] BYREF
  __int64 v41; // [rsp+170h] [rbp+70h] BYREF

  v35 = -2LL;
  v39 = 0uLL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v36);
  v39 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v39 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v9 = v37;
  if ( v37 && _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v7, v6);
  v10 = *(_QWORD *)(a1 + 272);
  v26 = 0LL;
  if ( *((_QWORD *)&v39 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
  v26 = v39;
  (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v10 + 88LL))(v10, &v26, v6);
  v21 = 0LL;
  v11 = a3[1];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = a3[1];
  }
  *(_QWORD *)&v21 = *a3;
  *((_QWORD *)&v21 + 1) = v11;
  v29 = 0LL;
  sub_18010B3B4(*(_QWORD *)(a1 + 272), (unsigned int)&v39, (unsigned int)&v29, (unsigned int)&v21, -1);
  v30 = 0LL;
  sub_1800B0E64(*(_QWORD *)(a1 + 272), (__int64 *)&v30);
  *(_BYTE *)(*(_QWORD *)(a1 + 272) + 465LL) &= 0xF8u;
  v40 = 0uLL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 32LL))(*a2, &v40);
  v31 = v40;
  v40 = 0uLL;
  sub_1800B1094(*(_QWORD *)(a1 + 272), (__int64 *)&v31);
  if ( (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) != 1.0
    || (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) != 1.0 )
  {
    sub_18009EC2C(*a3, &v41);
    *(_QWORD *)&v20 = 0LL;
    DWORD2(v20) = (int)*(float *)&v41;
    HIDWORD(v20) = (int)*((float *)&v41 + 1);
    v38 = v20;
    sub_1800B11FC(*(_QWORD *)(a1 + 272), &v38);
  }
  v22 = 0LL;
  v12 = a3[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a3[1];
  }
  *(_QWORD *)&v22 = *a3;
  *((_QWORD *)&v22 + 1) = v12;
  sub_1800F5E90(*(_QWORD *)(a1 + 416), &qword_18025E368, &v22);
  v23 = 0LL;
  v13 = *(_QWORD *)(a1 + 312);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = *(_QWORD *)(a1 + 312);
  }
  *(_QWORD *)&v23 = *(_QWORD *)(a1 + 304);
  *((_QWORD *)&v23 + 1) = v13;
  sub_1800F610C(*(_QWORD *)(a1 + 416), &qword_18025E368, &v23);
  sub_180090C88(*(_QWORD **)(a1 + 400), *(_DWORD *)(a1 + 448), 0, 2);
  v24 = 0LL;
  v14 = *(_QWORD *)(a1 + 408);
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = *(_QWORD *)(a1 + 408);
  }
  *(_QWORD *)&v24 = *(_QWORD *)(a1 + 400);
  *((_QWORD *)&v24 + 1) = v14;
  sub_18009BA9C(*(_QWORD *)(a1 + 336), &v24);
  v28 = 15LL;
  LOBYTE(v27[0]) = 0;
  v27[2] = 7LL;
  memmove(v27, "Display", 7uLL);
  HIBYTE(v27[0]) = 0;
  (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD *, __int64, _QWORD *))(**(_QWORD **)(a1 + 272) + 208LL))(
    *(_QWORD *)(a1 + 272),
    &v39,
    a2,
    a1 + 336,
    v27);
  if ( v28 >= 0x10 )
  {
    v15 = v27[0];
    if ( v28 + 1 >= 0x1000 )
    {
      v15 = *(_QWORD *)(v27[0] - 8LL);
      if ( (unsigned __int64)(v27[0] - v15 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v15, v28 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v15);
  }
  sub_1800B0A20(*(_QWORD *)(a1 + 272));
  v32 = 0LL;
  sub_1800F5E90(*(_QWORD *)(a1 + 416), &qword_18025E368, &v32);
  v33 = 0LL;
  sub_1800F610C(*(_QWORD *)(a1 + 416), &qword_18025E368, &v33);
  v25 = 0LL;
  v16 = a3[1];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = a3[1];
  }
  *(_QWORD *)&v25 = *a3;
  *((_QWORD *)&v25 + 1) = v16;
  v34 = 0LL;
  result = sub_18010B3B4(*(_QWORD *)(a1 + 272), (unsigned int)&v39, (unsigned int)&v34, (unsigned int)&v25, -1);
  v18 = (volatile signed __int32 *)*((_QWORD *)&v40 + 1);
  if ( *((_QWORD *)&v40 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      result = (unsigned int)_InterlockedDecrement(v18 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v19 = (volatile signed __int32 *)*((_QWORD *)&v39 + 1);
  if ( *((_QWORD *)&v39 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      result = (unsigned int)_InterlockedDecrement(v19 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return result;
}
