/*
 * XREFs of sub_1800A4C50 @ 0x1800A4C50
 * Callers:
 *     sub_1800F74A8 @ 0x1800F74A8 (sub_1800F74A8.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800A618C @ 0x1800A618C (sub_1800A618C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A4C50(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  const void **v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-B8h] BYREF
  const void *Src; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v18[32]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-58h] BYREF

  v15[1] = -2LL;
  pExceptionObject[8] = a2;
  v15[0] = 0LL;
  v3 = (_QWORD *)(a1 + 18576);
  sub_1800A618C(a1 + 18576, v15, a2);
  if ( v15[0] == *v3 )
    goto LABEL_9;
  v4 = v15[0] + 64LL;
  v5 = a2[3];
  if ( v5 >= 0x10 )
  {
    v6 = v5 + 1;
    v7 = *a2;
    if ( v6 < 0x1000 )
    {
LABEL_6:
      j_j__o_free(v7);
      goto LABEL_7;
    }
    v8 = v6 + 39;
    v9 = *(_QWORD *)(v7 - 8);
    v10 = v7 - v9;
    if ( (unsigned __int64)(v10 - 8) <= 0x1F )
    {
      v7 = v9;
      goto LABEL_6;
    }
    o__invalid_parameter_noinfo_noreturn(v10, v8);
LABEL_9:
    v12 = sub_18009FB30(&Src, "ShaderManager::GetShaderProgram() -- shader program for name '", a2);
    v13 = sub_18002BF78((__int64)v18, v12, "' does not exist");
    v14 = sub_18000E498(v16);
    sub_180027770(pExceptionObject, v14, 158, v13, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
LABEL_7:
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return v4;
}
