/*
 * XREFs of sub_1800F1E34 @ 0x1800F1E34
 * Callers:
 *     sub_1800F352C @ 0x1800F352C (sub_1800F352C.c)
 *     sub_1800F3888 @ 0x1800F3888 (sub_1800F3888.c)
 *     sub_1800F38B8 @ 0x1800F38B8 (sub_1800F38B8.c)
 *     sub_1800F38F8 @ 0x1800F38F8 (sub_1800F38F8.c)
 *     sub_1800F3924 @ 0x1800F3924 (sub_1800F3924.c)
 *     sub_1800F3954 @ 0x1800F3954 (sub_1800F3954.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000F7E4 @ 0x18000F7E4 (sub_18000F7E4.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F1E34(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v3; // cx
  _QWORD *v5; // r8
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v10[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v11[8]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+C8h] [rbp+17h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000E4E8(v9);
    v8 = sub_18000E4E8(v10);
    sub_180027880(v11, v8, 404, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v11;
  }
  v3 = *(_WORD *)(a1 + 2LL * a2 + 128);
  if ( v3 == 0xFFFF )
  {
    v5 = sub_18000F7E4(v10, a2);
    v6 = sub_1800454BC(
           (__int64)v11,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           (__int64)v5);
    v7 = sub_18000E4E8(v9);
    sub_180027880(pExceptionObject, v7, 407, v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 80) + 4LL * *(unsigned int *)(56LL * v3 + *(_QWORD *)(a1 + 56) + 40);
}
