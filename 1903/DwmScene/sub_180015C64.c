/*
 * XREFs of sub_180015C64 @ 0x180015C64
 * Callers:
 *     sub_180018480 @ 0x180018480 (sub_180018480.c)
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     sub_180099C60 @ 0x180099C60 (sub_180099C60.c)
 *     sub_1800FBCBC @ 0x1800FBCBC (sub_1800FBCBC.c)
 *     sub_1800FBE78 @ 0x1800FBE78 (sub_1800FBE78.c)
 * Callees:
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_180016F48 @ 0x180016F48 (sub_180016F48.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18007632C @ 0x18007632C (sub_18007632C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180015C64(_QWORD *a1, _QWORD *a2, unsigned int a3)
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
  sub_180016F48(a2);
  v15 = 0LL;
  v16 = 0LL;
  sub_1800631C0(a1 + 101, &v15);
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
    sub_18000DD90(a1 + 108, v8, &v11);
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
    sub_180063668(v15);
  sub_18007632C(a1, *a2, a3);
  return a2;
}
