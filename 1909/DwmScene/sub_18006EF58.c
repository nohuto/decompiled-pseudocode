/*
 * XREFs of sub_18006EF58 @ 0x18006EF58
 * Callers:
 *     sub_18006EDF4 @ 0x18006EDF4 (sub_18006EDF4.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_18006EEA0 @ 0x18006EEA0 (sub_18006EEA0.c)
 *     sub_18008AE98 @ 0x18008AE98 (sub_18008AE98.c)
 *     sub_18008B530 @ 0x18008B530 (sub_18008B530.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006EF58(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  _BYTE v10[8]; // [rsp+20h] [rbp-60h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-58h]
  _QWORD v12[6]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+68h] [rbp-18h]

  v12[4] = -2LL;
  v12[5] = a3;
  v13 = 0LL;
  v14 = 0LL;
  v12[2] = 0LL;
  v12[3] = 0LL;
  sub_18001115C(v12, (__int64)a3);
  sub_18008AE98(a1, &v13, v12);
  v6 = (_QWORD *)sub_18008B530(v13, v10);
  sub_18006EEA0(a1, a2, v6);
  v7 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return unknown_libname_116(a3);
}
