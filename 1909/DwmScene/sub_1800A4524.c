/*
 * XREFs of sub_1800A4524 @ 0x1800A4524
 * Callers:
 *     sub_1800F5930 @ 0x1800F5930 (sub_1800F5930.c)
 *     sub_1800F5A8C @ 0x1800F5A8C (sub_1800F5A8C.c)
 *     sub_1800F5F30 @ 0x1800F5F30 (sub_1800F5F30.c)
 *     sub_1800F61AC @ 0x1800F61AC (sub_1800F61AC.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800A4524(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v11[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v12[32]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+C0h] [rbp-48h] BYREF

  if ( a3 == 511 || a3 >= *(int *)(a1 + 18488) )
  {
    v5 = sub_18000F7E4(v10, a3);
    v6 = (_QWORD *)sub_1800454BC((__int64)v11, (__int64)"ShaderManager::GetPropertyName() -- property id ", (__int64)v5);
    v7 = sub_18002C088((__int64)v12, v6, " is not registered");
    v8 = sub_18000E4E8(v9);
    sub_180027880(pExceptionObject, v8, 700, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18000F444(a2, 32LL * a3 + a1 + 2104);
  return a2;
}
