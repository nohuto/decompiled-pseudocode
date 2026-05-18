/*
 * XREFs of sub_180094A70 @ 0x180094A70
 * Callers:
 *     sub_180094CE0 @ 0x180094CE0 (sub_180094CE0.c)
 *     sub_180094DB8 @ 0x180094DB8 (sub_180094DB8.c)
 *     sub_180094E90 @ 0x180094E90 (sub_180094E90.c)
 *     sub_180097678 @ 0x180097678 (sub_180097678.c)
 * Callees:
 *     sub_18000DDE0 @ 0x18000DDE0 (sub_18000DDE0.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_180095084 @ 0x180095084 (sub_180095084.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_180094A70(_QWORD *a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  __int64 *v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-18h]

  v14 = -2LL;
  v15 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_180095084(a2, a4);
  v16 = 0LL;
  v17 = 0LL;
  sub_1800632D0((__int64)(a1 + 101), &v16);
  v7 = a2[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
    v7 = a2[1];
  }
  v8 = *a2;
  v12 = *a2;
  v13 = v7;
  v9 = (__int64 *)a1[109];
  if ( (__int64 *)a1[110] == v9 )
  {
    sub_18000DDE0(a1 + 108, v9, &v12);
    v10 = v13;
  }
  else
  {
    *v9 = v8;
    v9[1] = v7;
    v10 = 0LL;
    v13 = 0LL;
    a1[109] += 16LL;
  }
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  if ( (_BYTE)v17 )
    sub_180063778(v16);
  sub_18007643C((__int64)a1, *a2, a3);
  return a2;
}
