/*
 * XREFs of sub_180109400 @ 0x180109400
 * Callers:
 *     sub_1800D572C @ 0x1800D572C (sub_1800D572C.c)
 * Callees:
 *     sub_18006D028 @ 0x18006D028 (sub_18006D028.c)
 *     sub_1800E0E9C @ 0x1800E0E9C (sub_1800E0E9C.c)
 *     sub_1800E0FBC @ 0x1800E0FBC (sub_1800E0FBC.c)
 *     sub_1800E1138 @ 0x1800E1138 (sub_1800E1138.c)
 *     sub_1800E1200 @ 0x1800E1200 (sub_1800E1200.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180109400(__int64 a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  char result; // al
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v11; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v13; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+78h] [rbp-90h] BYREF
  __int64 v16; // [rsp+88h] [rbp-80h]
  _QWORD v17[23]; // [rsp+90h] [rbp-78h] BYREF

  v16 = -2LL;
  v2 = (__int64 *)sub_18006D028(*(_QWORD *)(a1 + 912), (__int64)v17);
  sub_1800E0FBC(a1 + 528, v2);
  sub_1800E0E9C(v17);
  if ( sub_1800E1138() )
  {
    v10 = 0LL;
    v3 = *(_QWORD *)(a1 + 904);
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = *(_QWORD *)(a1 + 904);
    }
    v4 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)&v10 = v4;
    *((_QWORD *)&v10 + 1) = v3;
    v11 = 0LL;
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v4 = *(_QWORD *)(a1 + 896);
      v3 = *(_QWORD *)(a1 + 904);
    }
    *(_QWORD *)&v11 = v4;
    *((_QWORD *)&v11 + 1) = v3;
    sub_1800E1200((_QWORD *)(a1 + 528), &v11, &v10);
  }
  if ( sub_1800E1138() )
  {
    v12 = 0LL;
    v5 = *(_QWORD *)(a1 + 904);
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *(_QWORD *)(a1 + 904);
    }
    v6 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)&v12 = v6;
    *((_QWORD *)&v12 + 1) = v5;
    v13 = 0LL;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v6 = *(_QWORD *)(a1 + 896);
      v5 = *(_QWORD *)(a1 + 904);
    }
    *(_QWORD *)&v13 = v6;
    *((_QWORD *)&v13 + 1) = v5;
    sub_1800E1200((_QWORD *)(a1 + 704), &v13, &v12);
  }
  result = sub_1800E1138();
  if ( result )
  {
    v14 = 0LL;
    v8 = *(_QWORD *)(a1 + 904);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = *(_QWORD *)(a1 + 904);
    }
    v9 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)&v14 = v9;
    *((_QWORD *)&v14 + 1) = v8;
    v15 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v9 = *(_QWORD *)(a1 + 896);
      v8 = *(_QWORD *)(a1 + 904);
    }
    *(_QWORD *)&v15 = v9;
    *((_QWORD *)&v15 + 1) = v8;
    result = sub_1800E1200((_QWORD *)a1, &v15, &v14);
  }
  *(_DWORD *)(a1 + 920) = 2;
  return result;
}
