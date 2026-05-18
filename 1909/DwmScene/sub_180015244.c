/*
 * XREFs of sub_180015244 @ 0x180015244
 * Callers:
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 * Callees:
 *     sub_180014D28 @ 0x180014D28 (sub_180014D28.c)
 *     sub_180017800 @ 0x180017800 (sub_180017800.c)
 *     sub_18007DD08 @ 0x18007DD08 (sub_18007DD08.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180015244(__int64 *a1, _OWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int128 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v14; // [rsp+50h] [rbp-B0h]
  __int128 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  _QWORD *v17; // [rsp+70h] [rbp-90h]
  _OWORD v18[6]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[40]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v20[136]; // [rsp+108h] [rbp+8h] BYREF

  v16 = -2LL;
  v14 = a3;
  v17 = a4;
  v18[0] = *a2;
  v18[1] = a2[1];
  v18[2] = a2[2];
  v18[3] = a2[3];
  v18[4] = a2[4];
  v18[5] = a2[5];
  sub_18007DD08(v19, v18);
  v12 = 0LL;
  v7 = a4[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a4[1];
  }
  *(_QWORD *)&v12 = *a4;
  *((_QWORD *)&v12 + 1) = v7;
  v13 = 0LL;
  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a3[1];
  }
  *(_QWORD *)&v13 = *a3;
  *((_QWORD *)&v13 + 1) = v8;
  v15 = 0LL;
  sub_180014D28(a1, (__int64)v19, &v15, &v13, &v12);
  sub_180017800(v20);
  v9 = (volatile signed __int32 *)a3[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a1;
}
