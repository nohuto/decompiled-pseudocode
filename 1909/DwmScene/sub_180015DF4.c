/*
 * XREFs of sub_180015DF4 @ 0x180015DF4
 * Callers:
 *     sub_1800186A0 @ 0x1800186A0 (sub_1800186A0.c)
 *     sub_1800ACAF0 @ 0x1800ACAF0 (sub_1800ACAF0.c)
 *     sub_1800B88B0 @ 0x1800B88B0 (sub_1800B88B0.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800D08D8 @ 0x1800D08D8 (sub_1800D08D8.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800FAB30 @ 0x1800FAB30 (sub_1800FAB30.c)
 *     sub_1800FB260 @ 0x1800FB260 (sub_1800FB260.c)
 *     sub_180100440 @ 0x180100440 (sub_180100440.c)
 *     sub_180101170 @ 0x180101170 (sub_180101170.c)
 *     sub_18010FFE4 @ 0x18010FFE4 (sub_18010FFE4.c)
 *     sub_180113740 @ 0x180113740 (sub_180113740.c)
 * Callees:
 *     sub_18000DDE0 @ 0x18000DDE0 (sub_18000DDE0.c)
 *     sub_1800170E4 @ 0x1800170E4 (sub_1800170E4.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180015DF4(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-28h]
  _QWORD *v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v13 = -2LL;
  v14 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800170E4(a2);
  v15 = 0LL;
  v16 = 0LL;
  sub_1800632D0(a1 + 101, &v15);
  v6 = a2[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v6 = a2[1];
  }
  v7 = *a2;
  v11 = *a2;
  v12 = v6;
  v8 = (_QWORD *)a1[109];
  if ( (_QWORD *)a1[110] == v8 )
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
  sub_18007643C(a1, *a2, a3);
  return a2;
}
