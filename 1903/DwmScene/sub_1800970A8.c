/*
 * XREFs of sub_1800970A8 @ 0x1800970A8
 * Callers:
 *     sub_180096508 @ 0x180096508 (sub_180096508.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_180095020 @ 0x180095020 (sub_180095020.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800970A8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E498(v7);
    v4 = sub_18000E498(v6);
    sub_18006575C(pExceptionObject, v4, 634LL, (__int64)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 || !a3 )
  {
    sub_18000E498(v6);
    v5 = sub_18000E498(v7);
    sub_180095020(pExceptionObject, v5, 639, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_18009717C(a1, a2, a3, *(unsigned int *)(a1 + 120));
}
