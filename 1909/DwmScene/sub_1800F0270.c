/*
 * XREFs of sub_1800F0270 @ 0x1800F0270
 * Callers:
 *     <none>
 * Callees:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_180093EB8 @ 0x180093EB8 (sub_180093EB8.c)
 */

__int64 __fastcall sub_1800F0270(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v13 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = *(_QWORD *)(a1 + 64);
  }
  v5 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v13 + 1) = v3;
  *(_QWORD *)&v13 = v5;
  sub_180091AE8(a2, &v13);
  v6 = *(_QWORD *)(a1 + 64);
  v14 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = *(_QWORD *)(a1 + 64);
  }
  v7 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v14 + 1) = v6;
  *(_QWORD *)&v14 = v7;
  sub_180092F50(a2, &v14);
  v8 = *(_QWORD *)(a1 + 64);
  v15 = 0LL;
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 64);
  }
  v9 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v15 + 1) = v8;
  *(_QWORD *)&v15 = v9;
  sub_180093744(a2, &v15);
  v10 = *(_QWORD *)(a1 + 64);
  v16 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 64);
  }
  v11 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v16 + 1) = v10;
  *(_QWORD *)&v16 = v11;
  return sub_180093EB8(a2, &v16);
}
