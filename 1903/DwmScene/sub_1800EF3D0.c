/*
 * XREFs of sub_1800EF3D0 @ 0x1800EF3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800919D8 @ 0x1800919D8 (sub_1800919D8.c)
 *     sub_180092E40 @ 0x180092E40 (sub_180092E40.c)
 *     sub_180093634 @ 0x180093634 (sub_180093634.c)
 *     sub_180093DA8 @ 0x180093DA8 (sub_180093DA8.c)
 *     sub_180093EDC @ 0x180093EDC (sub_180093EDC.c)
 */

__int64 __fastcall sub_1800EF3D0(__int64 a1, __int64 a2)
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
  sub_1800919D8(a2, &v15);
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
  sub_180092E40(a2, &v16);
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
  sub_180093634(a2, &v17);
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
  sub_180093EDC(a2, &v18);
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
  return sub_180093DA8(a2, &v19);
}
