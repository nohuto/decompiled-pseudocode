/*
 * XREFs of sub_180097220 @ 0x180097220
 * Callers:
 *     sub_180012100 @ 0x180012100 (sub_180012100.c)
 *     sub_180096508 @ 0x180096508 (sub_180096508.c)
 *     sub_1800979E0 @ 0x1800979E0 (sub_1800979E0.c)
 *     sub_180097A20 @ 0x180097A20 (sub_180097A20.c)
 *     sub_1800FBCBC @ 0x1800FBCBC (sub_1800FBCBC.c)
 *     sub_1800FBE78 @ 0x1800FBE78 (sub_1800FBE78.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_180095020 @ 0x180095020 (sub_180095020.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180097220(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E498(v8);
    v6 = sub_18000E498(v7);
    sub_18006575C(pExceptionObject, v6, 577LL, (__int64)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_18000E498(v7);
    v5 = sub_18000E498(v8);
    sub_180095020(pExceptionObject, v5, 582, (__int64)v7, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(a4) = a3;
  return sub_1800972F4(a1, a2, *(unsigned int *)(a1 + 120), a4);
}
