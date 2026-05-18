/*
 * XREFs of sub_1800F5A8C @ 0x1800F5A8C
 * Callers:
 *     sub_1800F4194 @ 0x1800F4194 (sub_1800F4194.c)
 *     sub_1800F41DC @ 0x1800F41DC (sub_1800F41DC.c)
 *     sub_1800F424C @ 0x1800F424C (sub_1800F424C.c)
 *     sub_1800F4294 @ 0x1800F4294 (sub_1800F4294.c)
 *     sub_1800F4300 @ 0x1800F4300 (sub_1800F4300.c)
 *     sub_1800F5C50 @ 0x1800F5C50 (sub_1800F5C50.c)
 *     sub_1800F5D78 @ 0x1800F5D78 (sub_1800F5D78.c)
 *     sub_1800F5E50 @ 0x1800F5E50 (sub_1800F5E50.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18001153C @ 0x18001153C (sub_18001153C.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     sub_1800A4524 @ 0x1800A4524 (sub_1800A4524.c)
 *     sub_1800F3058 @ 0x1800F3058 (sub_1800F3058.c)
 *     sub_1800F3134 @ 0x1800F3134 (sub_1800F3134.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800F5A8C(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 *v6; // rdi
  _DWORD *v7; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rax
  _QWORD v16[4]; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v17[5]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v19[32]; // [rsp+C8h] [rbp+27h] BYREF

  v17[4] = -2LL;
  v6 = (__int64 *)(a1 + 16);
  if ( !sub_1800F3134(*(_QWORD *)(a1 + 16), a2) )
  {
    v10 = sub_18001153C((__int64)v6);
    v11 = sub_18001153C(v10 + 1152);
    v12 = sub_1800A4524(v11, v17, a2);
    v13 = sub_1800454BC((__int64)v19, (__int64)"Property not found in block: ", (__int64)v12);
    v14 = sub_18000E4E8(v16);
    sub_180027880(pExceptionObject, v14, 481, v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = (_DWORD *)sub_1800F3058(*v6, a2);
  if ( v7[9] != a3 )
  {
    sub_18000E4E8(v17);
    v15 = sub_18000E4E8(v16);
    sub_180027880(pExceptionObject, v15, 485, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v7[12] == 2 )
  {
    sub_18000E4E8(v16);
    v9 = sub_18000E4E8(v17);
    sub_180027880(pExceptionObject, v9, 494, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 32) + 4LL * (unsigned int)v7[10];
}
