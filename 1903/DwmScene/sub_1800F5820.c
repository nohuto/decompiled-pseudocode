/*
 * XREFs of sub_1800F5820 @ 0x1800F5820
 * Callers:
 *     sub_18009114C @ 0x18009114C (sub_18009114C.c)
 *     sub_1800DBFD4 @ 0x1800DBFD4 (sub_1800DBFD4.c)
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

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800F5820(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rax
  _QWORD v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v21[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v22[32]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v23[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD pExceptionObject[12]; // [rsp+120h] [rbp+20h] BYREF

  v6 = (__int64 *)(a1 + 16);
  if ( !sub_1800F3024(*(_QWORD *)(a1 + 16), a3) )
  {
    v13 = sub_1800114EC((__int64)v6);
    v14 = sub_1800114EC(v13 + 1152);
    v15 = sub_1800A4414(v14, v21, a3);
    v16 = sub_1800453AC((__int64)v22, (__int64)"Property does not exist: ", (__int64)v15);
    v17 = sub_18000E498(v18);
    sub_180027770(v23, v17, 669, v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v23;
  }
  v7 = sub_1800F2F48(*v6, a3);
  if ( *(_DWORD *)(v7 + 36) != 8 )
  {
    sub_18000E498(v20);
    v12 = sub_18000E498(v19);
    sub_180027770(pExceptionObject, v12, 673, (__int64)v20, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = 5LL * *(unsigned int *)(v7 + 40);
  v9 = *(_QWORD *)(a1 + 56);
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = *(_QWORD *)(v9 + 8 * v8 + 8);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *a2 = *(_QWORD *)(v9 + 8 * v8);
  a2[1] = *(_QWORD *)(v9 + 8 * v8 + 8);
  return a2;
}
