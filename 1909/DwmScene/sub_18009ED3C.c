/*
 * XREFs of sub_18009ED3C @ 0x18009ED3C
 * Callers:
 *     sub_18002EC20 @ 0x18002EC20 (sub_18002EC20.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 *     sub_180065658 @ 0x180065658 (sub_180065658.c)
 *     sub_18009EDE4 @ 0x18009EDE4 (sub_18009EDE4.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009ED3C(__int64 a1, __int64 a2)
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
    sub_18000E4E8(v5);
    v3 = sub_18000E4E8(v4);
    sub_18006586C(pExceptionObject, v3, 1082LL, (__int64)v5, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 152) = a2;
  *(_DWORD *)(a1 + 156) = v2;
}
