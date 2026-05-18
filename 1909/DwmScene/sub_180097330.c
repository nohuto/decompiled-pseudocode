/*
 * XREFs of sub_180097330 @ 0x180097330
 * Callers:
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_180096618 @ 0x180096618 (sub_180096618.c)
 *     sub_180097AF0 @ 0x180097AF0 (sub_180097AF0.c)
 *     sub_180097B30 @ 0x180097B30 (sub_180097B30.c)
 *     sub_1800FBDCC @ 0x1800FBDCC (sub_1800FBDCC.c)
 *     sub_1800FBF88 @ 0x1800FBF88 (sub_1800FBF88.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_180095130 @ 0x180095130 (sub_180095130.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180097330(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-9h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp+17h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E4E8(v8);
    v6 = sub_18000E4E8(v7);
    sub_18006586C(pExceptionObject, v6, 577LL, (__int64)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( !a2 )
  {
    sub_18000E4E8(v7);
    v5 = sub_18000E4E8(v8);
    sub_180095130(pExceptionObject, v5, 582, (__int64)v7, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  LOBYTE(a4) = a3;
  return sub_180097404(a1, a2, *(unsigned int *)(a1 + 120), a4);
}
