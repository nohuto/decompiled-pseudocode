/*
 * XREFs of sub_180096BAC @ 0x180096BAC
 * Callers:
 *     sub_180012100 @ 0x180012100 (sub_180012100.c)
 *     sub_180096508 @ 0x180096508 (sub_180096508.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_180095020 @ 0x180095020 (sub_180095020.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180096BAC(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rax
  _QWORD v5[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v6[4]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E498(v6);
    v4 = sub_18000E498(v5);
    sub_18006575C(pExceptionObject, v4, 704LL, (__int64)v6, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_18000E498(v5);
    v3 = sub_18000E498(v6);
    sub_180095020(pExceptionObject, v3, 709, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180096C7C(a1, a2, *(unsigned int *)(a1 + 120));
}
