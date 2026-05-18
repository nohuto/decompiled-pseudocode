/*
 * XREFs of sub_1800D0CC0 @ 0x1800D0CC0
 * Callers:
 *     sub_18006D250 @ 0x18006D250 (sub_18006D250.c)
 *     sub_18006DBD0 @ 0x18006DBD0 (sub_18006DBD0.c)
 *     sub_180078CFC @ 0x180078CFC (sub_180078CFC.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D0CC0(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rdx
  int v5; // r9d
  int v6; // r9d
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v10[5]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  v4 = (_QWORD *)(a1 + 32 * (a3 + 5LL * a2));
  if ( !a4 )
    return *v4;
  v5 = a4 - 1;
  if ( !v5 )
    return v4[1];
  v6 = v5 - 1;
  if ( !v6 )
    return v4[3];
  if ( v6 != 1 )
  {
    sub_18000E4E8(v10);
    v8 = sub_18000E4E8(v9);
    sub_18006586C(pExceptionObject, v8, 45LL, (__int64)v10, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return v4[2];
}
