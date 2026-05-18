/*
 * XREFs of sub_1800A4414 @ 0x1800A4414
 * Callers:
 *     sub_1800F5820 @ 0x1800F5820 (sub_1800F5820.c)
 *     sub_1800F597C @ 0x1800F597C (sub_1800F597C.c)
 *     sub_1800F5E20 @ 0x1800F5E20 (sub_1800F5E20.c)
 *     sub_1800F609C @ 0x1800F609C (sub_1800F609C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800A4414(__int64 a1, _QWORD *a2, unsigned __int16 a3)
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
    v5 = sub_18000F794(v10, a3);
    v6 = (_QWORD *)sub_1800453AC((__int64)v11, (__int64)"ShaderManager::GetPropertyName() -- property id ", (__int64)v5);
    v7 = sub_18002BF78((__int64)v12, v6, " is not registered");
    v8 = sub_18000E498(v9);
    sub_180027770(pExceptionObject, v8, 700, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18000F3F4(a2, 32LL * a3 + a1 + 2104);
  return a2;
}
