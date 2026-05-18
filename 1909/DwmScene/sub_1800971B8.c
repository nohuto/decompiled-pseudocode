/*
 * XREFs of sub_1800971B8 @ 0x1800971B8
 * Callers:
 *     sub_180096618 @ 0x180096618 (sub_180096618.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_180095130 @ 0x180095130 (sub_180095130.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800971B8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E4E8(v7);
    v4 = sub_18000E4E8(v6);
    sub_18006586C(pExceptionObject, v4, 634LL, (__int64)v7, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 || !a3 )
  {
    sub_18000E4E8(v6);
    v5 = sub_18000E4E8(v7);
    sub_180095130(pExceptionObject, v5, 639, (__int64)v6, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_18009728C(a1, a2, a3, *(unsigned int *)(a1 + 120));
}
