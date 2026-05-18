/*
 * XREFs of sub_1800915F0 @ 0x1800915F0
 * Callers:
 *     sub_180092E40 @ 0x180092E40 (sub_180092E40.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800912BC @ 0x1800912BC (sub_1800912BC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800915F0(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v14; // rax
  float v15; // [rsp+40h] [rbp-61h] BYREF
  __int64 v16; // [rsp+48h] [rbp-59h]
  __int64 v17; // [rsp+50h] [rbp-51h]
  _QWORD v18[4]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v19[4]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+98h] [rbp-9h] BYREF

  v16 = -2LL;
  v17 = a1;
  pExceptionObject[8] = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 1;
  v15 = (float)a4;
  sub_1800912BC((_QWORD *)(a1 + 40), 1uLL, &v15);
  if ( (int)**(float **)(a1 + 40) != a4 )
    goto LABEL_9;
  v7 = a2[3];
  if ( v7 >= 0x10 )
  {
    v8 = v7 + 1;
    v9 = *a2;
    if ( v8 < 0x1000 )
    {
LABEL_6:
      j_j__o_free(v9);
      goto LABEL_7;
    }
    v10 = v8 + 39;
    v11 = *(_QWORD *)(v9 - 8);
    v12 = v9 - v11;
    if ( (unsigned __int64)(v12 - 8) <= 0x1F )
    {
      v9 = v11;
      goto LABEL_6;
    }
    o__invalid_parameter_noinfo_noreturn(v12, v10);
LABEL_9:
    sub_18000E498(v19);
    v14 = sub_18000E498(v18);
    sub_180027770(pExceptionObject, v14, 436, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
LABEL_7:
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
