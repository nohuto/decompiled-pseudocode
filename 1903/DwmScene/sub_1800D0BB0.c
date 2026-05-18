/*
 * XREFs of sub_1800D0BB0 @ 0x1800D0BB0
 * Callers:
 *     sub_18006D140 @ 0x18006D140 (sub_18006D140.c)
 *     sub_18006DAC0 @ 0x18006DAC0 (sub_18006DAC0.c)
 *     sub_180078BEC @ 0x180078BEC (sub_180078BEC.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D0BB0(__int64 a1, int a2, int a3, int a4)
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
    sub_18000E498(v10);
    v8 = sub_18000E498(v9);
    sub_18006575C(pExceptionObject, v8, 45LL, (__int64)v10, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return v4[2];
}
