/*
 * XREFs of sub_1800F2CAC @ 0x1800F2CAC
 * Callers:
 *     sub_1800F386C @ 0x1800F386C (sub_1800F386C.c)
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 *     sub_1800F5B74 @ 0x1800F5B74 (sub_1800F5B74.c)
 *     sub_1800F5C34 @ 0x1800F5C34 (sub_1800F5C34.c)
 *     sub_1800F5C9C @ 0x1800F5C9C (sub_1800F5C9C.c)
 *     sub_1800F5CD0 @ 0x1800F5CD0 (sub_1800F5CD0.c)
 *     sub_1800F5D0C @ 0x1800F5D0C (sub_1800F5D0C.c)
 *     sub_1800F5D80 @ 0x1800F5D80 (sub_1800F5D80.c)
 *     sub_1800F627C @ 0x1800F627C (sub_1800F627C.c)
 *     sub_1800F62B0 @ 0x1800F62B0 (sub_1800F62B0.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800F2C78 @ 0x1800F2C78 (sub_1800F2C78.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F2CAC(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  const void **v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-A8h] BYREF
  const void *Src; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v9[32]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-48h] BYREF

  result = sub_1800F2C78(a1, (__int64)a2);
  if ( (_WORD)result == 511 )
  {
    v4 = sub_18009FB30(
           &Src,
           "ShaderPropertyLayout::GetPropertyName() -- property layout does not have a property with the name \"",
           a2);
    v5 = sub_18002BF78((__int64)v9, v4, "\"");
    v6 = sub_18000E498(v7);
    sub_180027770(pExceptionObject, v6, 268, v5, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return result;
}
