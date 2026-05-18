/*
 * XREFs of sub_18008AE98 @ 0x18008AE98
 * Callers:
 *     sub_18006EF58 @ 0x18006EF58 (sub_18006EF58.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 *     sub_18008AA80 @ 0x18008AA80 (sub_18008AA80.c)
 *     sub_18008ADC0 @ 0x18008ADC0 (sub_18008ADC0.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     sub_18008BD3C @ 0x18008BD3C (sub_18008BD3C.c)
 *     sub_18008C330 @ 0x18008C330 (sub_18008C330.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800C1EE4 @ 0x1800C1EE4 (sub_1800C1EE4.c)
 *     sub_1800C640C @ 0x1800C640C (sub_1800C640C.c)
 *     sub_1801008C0 @ 0x1801008C0 (sub_1801008C0.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180063540 @ 0x180063540 (sub_180063540.c)
 *     sub_18008DE18 @ 0x18008DE18 (sub_18008DE18.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18008AE98(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF

  v18 = -2LL;
  v17 = 0;
  sub_180063540(a1 + 16);
  v19 = 0LL;
  sub_18008DE18(a1 + 88, &v19, a3);
  v6 = v19;
  if ( v19 == *(_QWORD *)(a1 + 88) )
  {
    v16 = 0LL;
    v7 = (__int64 *)&v16;
    v8 = 5;
    v9 = v15;
  }
  else
  {
    v9 = *(_QWORD *)(v19 + 72);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(v6 + 72);
    }
    v14 = *(_QWORD *)(v6 + 64);
    v15 = v9;
    v7 = &v14;
    v8 = 6;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = v7[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v9 = v15;
  }
  *a2 = *v7;
  a2[1] = v10;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      {
        v11 = v15;
        (**(void (__fastcall ***)(__int64))v15)(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD, __int64))&v16 + 1))(*((_QWORD *)&v16 + 1), v9);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  unknown_libname_116(a3);
  return a2;
}
