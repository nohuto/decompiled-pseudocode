/*
 * XREFs of sub_180089B48 @ 0x180089B48
 * Callers:
 *     sub_180075610 @ 0x180075610 (sub_180075610.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800DE810 @ 0x1800DE810 (sub_1800DE810.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180089934 @ 0x180089934 (sub_180089934.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180089B48(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-39h] BYREF
  __int128 v12; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v13[6]; // [rsp+40h] [rbp-19h] BYREF

  v13[4] = -2LL;
  v13[5] = a4;
  v11 = 0uLL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001115C(v13, (__int64)a4);
  sub_18008B3B0(a1, &v11, v13);
  v12 = 0LL;
  v8 = *((_QWORD *)&v11 + 1);
  if ( *((_QWORD *)&v11 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL));
    v8 = *((_QWORD *)&v11 + 1);
  }
  v12 = v11;
  sub_180089934(a1, a2, a3, &v12);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  unknown_libname_116(a4);
  return a2;
}
