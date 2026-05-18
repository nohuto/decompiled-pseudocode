/*
 * XREFs of sub_180097930 @ 0x180097930
 * Callers:
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180096618 @ 0x180096618 (sub_180096618.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_180095130 @ 0x180095130 (sub_180095130.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180097930(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 *v4; // rax
  _QWORD v5[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v6[4]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E4E8(v6);
    v4 = sub_18000E4E8(v5);
    sub_18006586C(pExceptionObject, v4, 681LL, (__int64)v6, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_18000E4E8(v5);
    v3 = sub_18000E4E8(v6);
    sub_180095130(pExceptionObject, v3, 686, (__int64)v5, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  return sub_180097A00(a1, a2, *(unsigned int *)(a1 + 120));
}
