/*
 * XREFs of sub_1800634AC @ 0x1800634AC
 * Callers:
 *     sub_1800231AC @ 0x1800231AC (sub_1800231AC.c)
 *     sub_1800249C0 @ 0x1800249C0 (sub_1800249C0.c)
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_180063428 @ 0x180063428 (sub_180063428.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_18006D310 @ 0x18006D310 (sub_18006D310.c)
 *     sub_18006D4B0 @ 0x18006D4B0 (sub_18006D4B0.c)
 *     sub_18006EF74 @ 0x18006EF74 (sub_18006EF74.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_180079100 @ 0x180079100 (sub_180079100.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     sub_180089B4C @ 0x180089B4C (sub_180089B4C.c)
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 *     sub_18008A5C0 @ 0x18008A5C0 (sub_18008A5C0.c)
 *     sub_18008ABA8 @ 0x18008ABA8 (sub_18008ABA8.c)
 *     sub_18008B6F8 @ 0x18008B6F8 (sub_18008B6F8.c)
 *     sub_18008BF48 @ 0x18008BF48 (sub_18008BF48.c)
 *     sub_18008CAC8 @ 0x18008CAC8 (sub_18008CAC8.c)
 *     sub_18008D054 @ 0x18008D054 (sub_18008D054.c)
 *     sub_180090190 @ 0x180090190 (sub_180090190.c)
 *     sub_1800989B0 @ 0x1800989B0 (sub_1800989B0.c)
 *     sub_1800A8090 @ 0x1800A8090 (sub_1800A8090.c)
 *     sub_1800A88B0 @ 0x1800A88B0 (sub_1800A88B0.c)
 *     sub_1800AC9E0 @ 0x1800AC9E0 (sub_1800AC9E0.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800BB0EC @ 0x1800BB0EC (sub_1800BB0EC.c)
 *     sub_1800F4F20 @ 0x1800F4F20 (sub_1800F4F20.c)
 *     sub_1800F74A8 @ 0x1800F74A8 (sub_1800F74A8.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180062F54 @ 0x180062F54 (sub_180062F54.c)
 *     sub_180063624 @ 0x180063624 (sub_180063624.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800634AC(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    LOBYTE(a2) = 1;
    if ( !(unsigned __int8)sub_180063624(a1, a2) )
    {
      sub_18000E498(v4);
      v2 = sub_18000E498(v3);
      sub_180062F54(pExceptionObject, v2, 279, (__int64)v4, 0);
      throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
    }
  }
}
