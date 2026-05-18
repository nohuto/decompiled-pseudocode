/*
 * XREFs of sub_1800F2DBC @ 0x1800F2DBC
 * Callers:
 *     sub_1800F397C @ 0x1800F397C (sub_1800F397C.c)
 *     sub_1800F5C1C @ 0x1800F5C1C (sub_1800F5C1C.c)
 *     sub_1800F5C84 @ 0x1800F5C84 (sub_1800F5C84.c)
 *     sub_1800F5D44 @ 0x1800F5D44 (sub_1800F5D44.c)
 *     sub_1800F5DAC @ 0x1800F5DAC (sub_1800F5DAC.c)
 *     sub_1800F5DE0 @ 0x1800F5DE0 (sub_1800F5DE0.c)
 *     sub_1800F5E1C @ 0x1800F5E1C (sub_1800F5E1C.c)
 *     sub_1800F5E90 @ 0x1800F5E90 (sub_1800F5E90.c)
 *     sub_1800F638C @ 0x1800F638C (sub_1800F638C.c)
 *     sub_1800F63C0 @ 0x1800F63C0 (sub_1800F63C0.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_18009FC40 @ 0x18009FC40 (sub_18009FC40.c)
 *     sub_1800F2D88 @ 0x1800F2D88 (sub_1800F2D88.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F2DBC(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  const void **v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-A8h] BYREF
  const void *Src; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v9[32]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-48h] BYREF

  result = sub_1800F2D88(a1, (__int64)a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_18009FC40(
           &Src,
           "ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_18002C088((__int64)v9, v4, "\"");
    v6 = sub_18000E4E8(v7);
    sub_180027880(pExceptionObject, v6, 268, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
