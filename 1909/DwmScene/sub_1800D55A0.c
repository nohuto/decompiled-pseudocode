/*
 * XREFs of sub_1800D55A0 @ 0x1800D55A0
 * Callers:
 *     sub_1800D5700 @ 0x1800D5700 (sub_1800D5700.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800D59E0 @ 0x1800D59E0 (sub_1800D59E0.c)
 *     sub_180109218 @ 0x180109218 (sub_180109218.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800D55A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  _QWORD v17[4]; // [rsp+50h] [rbp-20h] BYREF

  sub_1800636EC(a1);
  sub_1800D59E0(a1, v15, a3);
  if ( v15[0] )
  {
    v9 = 2 * (v16 + 4);
    v14 = 0LL;
    v10 = a5[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a5[1];
    }
    *(_QWORD *)&v14 = *a5;
    *((_QWORD *)&v14 + 1) = v10;
    v17[2] = 0LL;
    v17[3] = 0LL;
    sub_18000F444(v17, a4);
    v11 = sub_180109218(*(_QWORD *)(a1 + 8 * v9), v17, &v14);
    v12 = *(volatile signed __int32 **)(a1 + 8 * v9 + 8);
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = *(volatile signed __int32 **)(a1 + 8 * v9 + 8);
    }
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v12 )
      _InterlockedIncrement(v12 + 3);
    *a2 = v11;
    a2[1] = (__int64)v12;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    sub_180063778(a1);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    sub_180063778(a1);
  }
  return a2;
}
