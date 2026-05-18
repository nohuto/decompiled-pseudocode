/*
 * XREFs of sub_18000BF3C @ 0x18000BF3C
 * Callers:
 *     sub_18000C094 @ 0x18000C094 (sub_18000C094.c)
 *     sub_18000C16C @ 0x18000C16C (sub_18000C16C.c)
 *     sub_18000C20C @ 0x18000C20C (sub_18000C20C.c)
 * Callees:
 *     sub_18000B8E0 @ 0x18000B8E0 (sub_18000B8E0.c)
 *     __castguard_check_failure_user_handled_wrapper @ 0x18000C2F0 (__castguard_check_failure_user_handled_wrapper.c)
 *     __castguard_check_failure_user_handled_wrapper_0 @ 0x18000CD64 (__castguard_check_failure_user_handled_wrapper_0.c)
 *     sub_18000D0CC @ 0x18000D0CC (sub_18000D0CC.c)
 *     _alloca_probe @ 0x180126020 (_alloca_probe.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000BF3C(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        char a10)
{
  char v10; // bl
  __int64 v11[18]; // [rsp+80h] [rbp-14B8h] BYREF
  __int64 v12[128]; // [rsp+110h] [rbp-1428h] BYREF
  WCHAR OutputString[2048]; // [rsp+510h] [rbp-1028h] BYREF

  if ( a7 || (a10 & 4) != 0 || !qword_180268B58 || (v10 = 1, byte_180258001 == (_BYTE)a7) && (a10 & 1) == 0 )
    v10 = 0;
  sub_18000B8E0(a1, a2, a3, a4, a5, a6, a7, a8, a9, v10, OutputString, 2048LL, v12, 1024LL, (__int64)v11);
  if ( (a10 & 2) == 0 )
  {
    if ( a7 == 3 )
      sub_18000D0CC(v11);
    if ( !a7 )
    {
      if ( v10 )
        ((void (__fastcall *)(__int64 *, WCHAR *))qword_180268B58)(v11, OutputString);
      if ( (a10 & 4) != 0 )
        _castguard_check_failure_user_handled_wrapper();
      _castguard_check_failure_user_handled_wrapper_0(v11);
      sub_18000D0CC(v11);
    }
  }
}
