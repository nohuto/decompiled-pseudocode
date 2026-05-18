/*
 * XREFs of sub_180108E50 @ 0x180108E50
 * Callers:
 *     sub_1800D5204 @ 0x1800D5204 (sub_1800D5204.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18006934C @ 0x18006934C (sub_18006934C.c)
 *     sub_180069DF4 @ 0x180069DF4 (sub_180069DF4.c)
 *     sub_18006D028 @ 0x18006D028 (sub_18006D028.c)
 *     sub_1800E0E9C @ 0x1800E0E9C (sub_1800E0E9C.c)
 *     sub_1800E0FBC @ 0x1800E0FBC (sub_1800E0FBC.c)
 *     sub_1800E1138 @ 0x1800E1138 (sub_1800E1138.c)
 *     sub_1800E114C @ 0x1800E114C (sub_1800E114C.c)
 *     sub_1800E1200 @ 0x1800E1200 (sub_1800E1200.c)
 *     sub_180108D84 @ 0x180108D84 (sub_180108D84.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180108E50(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax
  volatile signed __int32 *v13; // rbx
  signed __int32 v14; // eax
  bool v15; // zf
  __int128 v16; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v20[15]; // [rsp+70h] [rbp-98h] BYREF
  char v21; // [rsp+E8h] [rbp-20h]
  __int64 v22; // [rsp+F0h] [rbp-18h]
  __int128 v23; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v24; // [rsp+108h] [rbp+0h]
  __int64 *v25; // [rsp+110h] [rbp+8h]
  __int64 *v26; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v27[22]; // [rsp+120h] [rbp+18h] BYREF
  _QWORD v28[22]; // [rsp+1D0h] [rbp+C8h] BYREF
  _QWORD v29[23]; // [rsp+280h] [rbp+178h] BYREF

  v24 = -2LL;
  v25 = a3;
  memset(v20, 0, sizeof(v20));
  v21 = 0;
  v22 = 0LL;
  v23 = 0LL;
  *(_QWORD *)&v23 = sub_18006934C();
  sub_180108D84(a1 + 928, (__int64)v20);
  sub_180069DF4((__int64 ***)&v23, &v26, *(__int64 **)v23, (__int64 *)v23);
  j_j__o_free(v23);
  *(_QWORD *)(a1 + 1056) = a2;
  v6 = (__int64 *)sub_18006D028(*(_QWORD *)(a1 + 912), (__int64)v27);
  sub_1800E0FBC(a1, v6);
  sub_1800E0E9C(v27);
  if ( sub_1800E1138() )
  {
    v16 = 0LL;
    v7 = a3[1];
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = a3[1];
    }
    *(_QWORD *)&v16 = *a3;
    *((_QWORD *)&v16 + 1) = v7;
    sub_1800E114C(a1, &v16);
  }
  v8 = (__int64 *)sub_18006D028(*(_QWORD *)(a1 + 912), (__int64)v28);
  sub_1800E0FBC(a1 + 704, v8);
  sub_1800E0E9C(v28);
  if ( sub_1800E1138() )
  {
    v17 = 0LL;
    v9 = a3[1];
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = a3[1];
    }
    *(_QWORD *)&v17 = *a3;
    *((_QWORD *)&v17 + 1) = v9;
    sub_1800E114C(a1 + 704, &v17);
  }
  v10 = (__int64 *)sub_18006D028(*(_QWORD *)(a1 + 912), (__int64)v29);
  sub_1800E0FBC(a1 + 176, v10);
  sub_1800E0E9C(v29);
  if ( sub_1800E1138() )
  {
    v18 = 0LL;
    v11 = a3[1];
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = a3[1];
    }
    *(_QWORD *)&v18 = *a3;
    *((_QWORD *)&v18 + 1) = v11;
    v19 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = a3[1];
    }
    *(_QWORD *)&v19 = *a3;
    *((_QWORD *)&v19 + 1) = v11;
    sub_1800E1200((_QWORD *)(a1 + 176), &v19, &v18);
  }
  *(_DWORD *)(a1 + 920) = 1;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 896), a3);
  v13 = (volatile signed __int32 *)a3[1];
  if ( v13 )
  {
    v14 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
    v15 = v14 == 1;
    result = (unsigned int)(v14 - 1);
    if ( v15 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
