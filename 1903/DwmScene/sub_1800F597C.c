/*
 * XREFs of sub_1800F597C @ 0x1800F597C
 * Callers:
 *     sub_1800F4084 @ 0x1800F4084 (sub_1800F4084.c)
 *     sub_1800F40CC @ 0x1800F40CC (sub_1800F40CC.c)
 *     sub_1800F413C @ 0x1800F413C (sub_1800F413C.c)
 *     sub_1800F4184 @ 0x1800F4184 (sub_1800F4184.c)
 *     sub_1800F41F0 @ 0x1800F41F0 (sub_1800F41F0.c)
 *     sub_1800F5B40 @ 0x1800F5B40 (sub_1800F5B40.c)
 *     sub_1800F5C68 @ 0x1800F5C68 (sub_1800F5C68.c)
 *     sub_1800F5D40 @ 0x1800F5D40 (sub_1800F5D40.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_1800114EC @ 0x1800114EC (sub_1800114EC.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     sub_1800A4414 @ 0x1800A4414 (sub_1800A4414.c)
 *     sub_1800F2F48 @ 0x1800F2F48 (sub_1800F2F48.c)
 *     sub_1800F3024 @ 0x1800F3024 (sub_1800F3024.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800F597C(__int64 a1, unsigned __int16 a2, int a3)
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
  if ( !sub_1800F3024(*(_QWORD *)(a1 + 16), a2) )
  {
    v10 = sub_1800114EC((__int64)v6);
    v11 = sub_1800114EC(v10 + 1152);
    v12 = sub_1800A4414(v11, v17, a2);
    v13 = sub_1800453AC((__int64)v19, (__int64)"Property not found in block: ", (__int64)v12);
    v14 = sub_18000E498(v16);
    sub_180027770(pExceptionObject, v14, 481, v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = (_DWORD *)sub_1800F2F48(*v6, a2);
  if ( v7[9] != a3 )
  {
    sub_18000E498(v17);
    v15 = sub_18000E498(v16);
    sub_180027770(pExceptionObject, v15, 485, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( v7[12] == 2 )
  {
    sub_18000E498(v16);
    v9 = sub_18000E498(v17);
    sub_180027770(pExceptionObject, v9, 494, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 32) + 4LL * (unsigned int)v7[10];
}
