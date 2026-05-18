/*
 * XREFs of sub_1800635BC @ 0x1800635BC
 * Callers:
 *     sub_1800232BC @ 0x1800232BC (sub_1800232BC.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_180033E2C @ 0x180033E2C (sub_180033E2C.c)
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 *     sub_18006CDF8 @ 0x18006CDF8 (sub_18006CDF8.c)
 *     sub_18006D420 @ 0x18006D420 (sub_18006D420.c)
 *     sub_18006D5C0 @ 0x18006D5C0 (sub_18006D5C0.c)
 *     sub_18006F084 @ 0x18006F084 (sub_18006F084.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_180079210 @ 0x180079210 (sub_180079210.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     sub_180089C5C @ 0x180089C5C (sub_180089C5C.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 *     sub_18008A6D0 @ 0x18008A6D0 (sub_18008A6D0.c)
 *     sub_18008ACB8 @ 0x18008ACB8 (sub_18008ACB8.c)
 *     sub_18008B808 @ 0x18008B808 (sub_18008B808.c)
 *     sub_18008C058 @ 0x18008C058 (sub_18008C058.c)
 *     sub_18008CBD8 @ 0x18008CBD8 (sub_18008CBD8.c)
 *     sub_18008D164 @ 0x18008D164 (sub_18008D164.c)
 *     sub_1800902A0 @ 0x1800902A0 (sub_1800902A0.c)
 *     sub_180098AC0 @ 0x180098AC0 (sub_180098AC0.c)
 *     sub_1800A81A0 @ 0x1800A81A0 (sub_1800A81A0.c)
 *     sub_1800A89C0 @ 0x1800A89C0 (sub_1800A89C0.c)
 *     sub_1800ACAF0 @ 0x1800ACAF0 (sub_1800ACAF0.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 *     sub_1800F5030 @ 0x1800F5030 (sub_1800F5030.c)
 *     sub_1800F75B8 @ 0x1800F75B8 (sub_1800F75B8.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180063064 @ 0x180063064 (sub_180063064.c)
 *     sub_180063734 @ 0x180063734 (sub_180063734.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800635BC(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    LOBYTE(a2) = 1;
    if ( !(unsigned __int8)sub_180063734(a1, a2) )
    {
      sub_18000E4E8(v4);
      v2 = sub_18000E4E8(v3);
      sub_180063064(pExceptionObject, v2, 279, (__int64)v4, 0);
      throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
    }
  }
}
