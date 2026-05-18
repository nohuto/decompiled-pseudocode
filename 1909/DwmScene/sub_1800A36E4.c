/*
 * XREFs of sub_1800A36E4 @ 0x1800A36E4
 * Callers:
 *     sub_1800F1F44 @ 0x1800F1F44 (sub_1800F1F44.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180011764 @ 0x180011764 (sub_180011764.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800A21FC @ 0x1800A21FC (sub_1800A21FC.c)
 *     sub_1800A4114 @ 0x1800A4114 (sub_1800A4114.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A36E4(__int64 a1, size_t *a2)
{
  __int64 v4; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rax
  _QWORD v8[3]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v10[5]; // [rsp+70h] [rbp-21h] BYREF
  _QWORD pExceptionObject[10]; // [rsp+98h] [rbp+7h] BYREF

  v8[2] = -2LL;
  if ( !a2[2] )
  {
    sub_18000E4E8(v10);
    v6 = sub_18000E4E8(v9);
    sub_180027880(pExceptionObject, v6, 478, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOWORD(v4) = sub_1800A4114();
  if ( (_WORD)v4 == 511 )
  {
    v4 = *(int *)(a1 + 18488);
    if ( (int)v4 >= 512 )
    {
      sub_18000E4E8(v9);
      v7 = sub_18000E4E8(v10);
      sub_180027880(pExceptionObject, v7, 492, (__int64)v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 18488) = v4 + 1;
    sub_1800A21FC((__int64 *)(a1 + 2088), (__int64)v8, a2);
    *(_WORD *)(v8[0] + 64LL) = v4;
    sub_180011764((__int64 *)(32 * v4 + a1 + 2104), (__int64 *)a2);
  }
  return (unsigned __int16)v4;
}
