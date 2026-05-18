/*
 * XREFs of sub_18009EC2C @ 0x18009EC2C
 * Callers:
 *     sub_18002EB10 @ 0x18002EB10 (sub_18002EB10.c)
 *     sub_180031944 @ 0x180031944 (sub_180031944.c)
 *     sub_180065548 @ 0x180065548 (sub_180065548.c)
 *     sub_18009ECD4 @ 0x18009ECD4 (sub_18009ECD4.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009EC2C(__int64 a1, __int64 a2)
{
  int v2; // xmm0_4
  __int64 *v3; // rax
  _QWORD v4[4]; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v5[5]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v7; // [rsp+C0h] [rbp-18h]

  v7 = a2;
  if ( *(float *)&a2 < 0.0 || (v2 = HIDWORD(v7), *((float *)&v7 + 1) < 0.0) )
  {
    sub_18000E498(v5);
    v3 = sub_18000E498(v4);
    sub_18006575C(pExceptionObject, v3, 1082LL, (__int64)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 152) = a2;
  *(_DWORD *)(a1 + 156) = v2;
}
