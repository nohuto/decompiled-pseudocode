/*
 * XREFs of sub_1800F2E5C @ 0x1800F2E5C
 * Callers:
 *     sub_1800F352C @ 0x1800F352C (sub_1800F352C.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_180091334 @ 0x180091334 (sub_180091334.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F2E5C(__int64 a1, int a2)
{
  __int64 *v3; // r8
  __int64 *v4; // rdx
  __int64 *v6; // rax
  __int64 v7; // [rsp+40h] [rbp-71h] BYREF
  __int64 v8; // [rsp+48h] [rbp-69h] BYREF
  char v9; // [rsp+50h] [rbp-61h] BYREF
  _OWORD v10[4]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v11; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v12[5]; // [rsp+A0h] [rbp-11h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+C8h] [rbp+17h] BYREF

  v11 = -2LL;
  v7 = a1;
  if ( a2 < 0 )
  {
LABEL_16:
    sub_18000E4E8(v10);
    v6 = sub_18000E4E8(v12);
    sub_180027880(pExceptionObject, v6, 95, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a2 <= 2 )
  {
    LODWORD(v7) = 0;
    v3 = (__int64 *)((char *)&v7 + 4);
    v4 = &v7;
    goto LABEL_14;
  }
  if ( a2 == 3 )
  {
    v7 = 0LL;
    v3 = &v8;
    v4 = &v7;
    goto LABEL_14;
  }
  if ( a2 == 4 )
  {
    v7 = 0LL;
    LODWORD(v8) = 0;
    v3 = (__int64 *)((char *)&v8 + 4);
    v4 = &v7;
    goto LABEL_14;
  }
  if ( a2 <= 6 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v3 = (__int64 *)&v9;
    v4 = &v7;
    goto LABEL_14;
  }
  if ( a2 == 7 )
  {
    v10[0] = xmmword_18025EFE0;
    v10[1] = xmmword_18025EFF0;
    v10[2] = xmmword_18025F000;
    v10[3] = xmmword_18025F010;
    v3 = &v11;
    v4 = (__int64 *)v10;
LABEL_14:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
    sub_180091334((void **)a1, v4, (__int64)v3);
    return a1;
  }
  if ( a2 != 8 )
    goto LABEL_16;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return a1;
}
