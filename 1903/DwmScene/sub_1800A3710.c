/*
 * XREFs of sub_1800A3710 @ 0x1800A3710
 * Callers:
 *     sub_180078344 @ 0x180078344 (sub_180078344.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800A038C @ 0x1800A038C (sub_1800A038C.c)
 *     sub_1800A148C @ 0x1800A148C (sub_1800A148C.c)
 *     sub_1800A248C @ 0x1800A248C (sub_1800A248C.c)
 *     sub_1800A2654 @ 0x1800A2654 (sub_1800A2654.c)
 *     sub_1800A2BC0 @ 0x1800A2BC0 (sub_1800A2BC0.c)
 *     sub_1800A618C @ 0x1800A618C (sub_1800A618C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800A3710(__int64 a1, __int64 *a2, int a3, __int64 *a4)
{
  _QWORD *v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 *v25; // rax
  const void **v26; // rax
  __int64 v27; // rbx
  __int64 *v28; // rax
  _QWORD v29[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v30[5]; // [rsp+50h] [rbp-B0h] BYREF
  const void *Src[7]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+B0h] [rbp-50h] BYREF

  Src[4] = (const void *)-2LL;
  pExceptionObject[8] = a2;
  Src[5] = a4;
  if ( !a2[2] )
  {
    sub_18000E498(v30);
    v25 = sub_18000E498(Src);
    sub_180027770(pExceptionObject, v25, 81, (__int64)v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v7 = (_QWORD *)(a1 + 18576);
  v8 = *(_QWORD *)(a1 + 18576);
  if ( *(_QWORD *)sub_1800A618C(a1 + 18576, v29, a2) != v8 )
  {
    v26 = sub_18009FB30(Src, "ShaderManager::AddShaderProgram() -- shader program for name '", a2);
    v27 = sub_18002BF78((__int64)v29, v26, "' is already added");
    v28 = sub_18000E498(v30);
    sub_180027770(pExceptionObject, v28, 84, v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a4 == a4[1] && *((_DWORD *)a4 + 8) == *((_DWORD *)a4 + 6) )
  {
LABEL_18:
    sub_18000E498(Src);
    v24 = sub_18000E498(v30);
    sub_180027770(pExceptionObject, v24, 87, (__int64)Src, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v9 = sub_1800A248C(v29, a4);
  v10 = sub_1800A2654((__int64)v30, a3, v9);
  v11 = sub_1800A038C(v7, (__int64)a2, v10);
  sub_1800A148C(v7, (__int64)Src, 0, v11 + 4, v11);
  result = sub_1800A2BC0((__int64)v30);
  v13 = a2[3];
  if ( v13 >= 0x10 )
  {
    v14 = *a2;
    v15 = v13 + 1;
    if ( v15 >= 0x1000 )
    {
      v16 = v15 + 39;
      v17 = *(_QWORD *)(v14 - 8);
      v18 = v14 - v17;
      if ( (unsigned __int64)(v18 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v18, v16);
LABEL_17:
        o__invalid_parameter_noinfo_noreturn(v23, v21);
        goto LABEL_18;
      }
      v14 = v17;
    }
    result = j_j__o_free(v14);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  v19 = *a4;
  if ( !*a4 )
    return result;
  v20 = a4[2] - v19;
  if ( v20 >= 0x1000 )
  {
    v21 = v20 + 39;
    v22 = *(_QWORD *)(v19 - 8);
    v23 = v19 - v22;
    if ( (unsigned __int64)(v23 - 8) <= 0x1F )
    {
      v19 = v22;
      goto LABEL_14;
    }
    goto LABEL_17;
  }
LABEL_14:
  result = j_j__o_free(v19);
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = 0LL;
  return result;
}
