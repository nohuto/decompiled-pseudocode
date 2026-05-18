/*
 * XREFs of sub_1800EF4E0 @ 0x1800EF4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_180093EB8 @ 0x180093EB8 (sub_180093EB8.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 */

__int64 __fastcall sub_1800EF4E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int128 v19; // [rsp+60h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v15 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = *(_QWORD *)(a1 + 64);
  }
  v5 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v15 + 1) = v3;
  *(_QWORD *)&v15 = v5;
  sub_180091AE8(a2, &v15);
  v6 = *(_QWORD *)(a1 + 64);
  v16 = 0LL;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = *(_QWORD *)(a1 + 64);
  }
  v7 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v16 + 1) = v6;
  *(_QWORD *)&v16 = v7;
  sub_180092F50(a2, &v16);
  v8 = *(_QWORD *)(a1 + 64);
  v17 = 0LL;
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(a1 + 64);
  }
  v9 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v17 + 1) = v8;
  *(_QWORD *)&v17 = v9;
  sub_180093744(a2, &v17);
  v10 = *(_QWORD *)(a1 + 64);
  v18 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = *(_QWORD *)(a1 + 64);
  }
  v11 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v18 + 1) = v10;
  *(_QWORD *)&v18 = v11;
  sub_180093FEC(a2, &v18);
  v12 = *(_QWORD *)(a1 + 64);
  v19 = 0LL;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(a1 + 64);
  }
  v13 = *(_QWORD *)(a1 + 56);
  *((_QWORD *)&v19 + 1) = v12;
  *(_QWORD *)&v19 = v13;
  return sub_180093EB8(a2, &v19);
}
