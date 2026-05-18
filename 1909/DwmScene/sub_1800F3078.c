/*
 * XREFs of sub_1800F3078 @ 0x1800F3078
 * Callers:
 *     sub_1800906FC @ 0x1800906FC (sub_1800906FC.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F3078(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // r8
  _QWORD *v4; // r8
  __int64 v5; // rbx
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v9[32]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-48h] BYREF

  v2 = *(_WORD *)(a1 + 2LL * a2 + 128);
  if ( v2 == 0xFFFF )
  {
    v4 = sub_18000F7E4(v8, a2);
    v5 = sub_1800454BC(
           (__int64)v9,
           (__int64)"ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the specified ID ",
           (__int64)v4);
    v6 = sub_18000E4E8(v7);
    sub_180027880(pExceptionObject, v6, 278, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 56) + 56LL * v2;
}
