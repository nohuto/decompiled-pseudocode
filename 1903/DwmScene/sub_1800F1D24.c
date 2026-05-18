/*
 * XREFs of sub_1800F1D24 @ 0x1800F1D24
 * Callers:
 *     sub_1800F341C @ 0x1800F341C (sub_1800F341C.c)
 *     sub_1800F3778 @ 0x1800F3778 (sub_1800F3778.c)
 *     sub_1800F37A8 @ 0x1800F37A8 (sub_1800F37A8.c)
 *     sub_1800F37E8 @ 0x1800F37E8 (sub_1800F37E8.c)
 *     sub_1800F3814 @ 0x1800F3814 (sub_1800F3814.c)
 *     sub_1800F3844 @ 0x1800F3844 (sub_1800F3844.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18000F794 @ 0x18000F794 (sub_18000F794.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F1D24(__int64 a1, unsigned __int16 a2)
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
    sub_18000E498(v9);
    v8 = sub_18000E498(v10);
    sub_180027770(v11, v8, 404, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v11;
  }
  v3 = *(_WORD *)(a1 + 2LL * a2 + 128);
  if ( v3 == 0xFFFF )
  {
    v5 = sub_18000F794(v10, a2);
    v6 = sub_1800453AC(
           (__int64)v11,
           (__int64)"ShaderPropertyLayout::SetPropertyDefault() -- property layout does not have a property with the specified ID ",
           (__int64)v5);
    v7 = sub_18000E498(v9);
    sub_180027770(pExceptionObject, v7, 407, v6, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 80) + 4LL * *(unsigned int *)(56LL * v3 + *(_QWORD *)(a1 + 56) + 40);
}
