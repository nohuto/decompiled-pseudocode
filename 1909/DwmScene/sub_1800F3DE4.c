/*
 * XREFs of sub_1800F3DE4 @ 0x1800F3DE4
 * Callers:
 *     sub_1800F5030 @ 0x1800F5030 (sub_1800F5030.c)
 * Callees:
 *     sub_18000DDE0 @ 0x18000DDE0 (sub_18000DDE0.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     sub_1800F4828 @ 0x1800F4828 (sub_1800F4828.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800F3DE4(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 *v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v13 = -2LL;
  v14 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800F4828(a2);
  v15 = 0LL;
  v16 = 0LL;
  sub_1800632D0((__int64)(a1 + 101), &v15);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a2[1];
  }
  v7 = *a2;
  v11 = *a2;
  v12 = v6;
  v8 = (__int64 *)a1[109];
  if ( (__int64 *)a1[110] == v8 )
  {
    sub_18000DDE0(a1 + 108, v8, &v11);
    v9 = v12;
  }
  else
  {
    *v8 = v7;
    v8[1] = v6;
    v9 = 0LL;
    v12 = 0LL;
    a1[109] += 16LL;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( (_BYTE)v16 )
    sub_180063778(v15);
  sub_18007643C((__int64)a1, *a2, a3);
  return a2;
}
