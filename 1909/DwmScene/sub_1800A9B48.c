/*
 * XREFs of sub_1800A9B48 @ 0x1800A9B48
 * Callers:
 *     sub_1800A9A84 @ 0x1800A9A84 (sub_1800A9A84.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A9B48(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( a2 == -1 )
  {
    sub_18000E4E8(v8);
    v6 = sub_18000E4E8(v7);
    sub_180027880(pExceptionObject, v6, 705, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  result = 1LL << a2;
  v5 = (1LL << a2) & *(_QWORD *)(a1 + 64);
  if ( a3 )
    *(_QWORD *)(a1 + 72) |= v5;
  else
    *(_QWORD *)(a1 + 72) &= ~v5;
  return result;
}
