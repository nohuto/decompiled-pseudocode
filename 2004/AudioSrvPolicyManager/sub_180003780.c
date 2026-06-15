/*
 * XREFs of sub_180003780 @ 0x180003780
 * Callers:
 *     sub_1800038BC @ 0x1800038BC (sub_1800038BC.c)
 *     sub_18000390C @ 0x18000390C (sub_18000390C.c)
 *     sub_1800039E0 @ 0x1800039E0 (sub_1800039E0.c)
 *     sub_18000A5AC @ 0x18000A5AC (sub_18000A5AC.c)
 *     sub_18000F960 @ 0x18000F960 (sub_18000F960.c)
 *     sub_1800214DC @ 0x1800214DC (sub_1800214DC.c)
 *     sub_18002E450 @ 0x18002E450 (sub_18002E450.c)
 * Callees:
 *     __castguard_check_failure_user_handled_wrapper @ 0x18000317C (__castguard_check_failure_user_handled_wrapper.c)
 *     __castguard_check_failure_user_handled_wrapper_0 @ 0x1800031A0 (__castguard_check_failure_user_handled_wrapper_0.c)
 *     sub_180003428 @ 0x180003428 (sub_180003428.c)
 *     sub_1800036E4 @ 0x1800036E4 (sub_1800036E4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18003ADA0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180003780(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        _WORD *a9,
        char a10)
{
  bool v10; // di
  int v11; // [rsp+48h] [rbp-14F0h]
  int v12; // [rsp+58h] [rbp-14E0h]
  int v13; // [rsp+68h] [rbp-14D0h]
  __int64 v14[18]; // [rsp+80h] [rbp-14B8h] BYREF
  __int64 v15[128]; // [rsp+110h] [rbp-1428h] BYREF
  char OutputString[4096]; // [rsp+510h] [rbp-1028h] BYREF

  v10 = !a7 && (a10 & 4) == 0 && qword_18004FD38;
  sub_180003428(a1, a2, a3, a4, a5, a6, a7, a8, a9, v11, OutputString, v12, v15, v13, (__int64)v14);
  if ( (a10 & 2) == 0 )
  {
    if ( a7 == 3 )
      sub_1800036E4((__int64)v14);
    if ( !a7 )
    {
      if ( v10 )
        ((void (__fastcall *)(__int64 *, char *))qword_18004FD38)(v14, OutputString);
      if ( (a10 & 4) != 0 )
        _castguard_check_failure_user_handled_wrapper();
      _castguard_check_failure_user_handled_wrapper_0();
      sub_1800036E4((__int64)v14);
    }
  }
}
