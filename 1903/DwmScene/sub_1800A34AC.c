/*
 * XREFs of sub_1800A34AC @ 0x1800A34AC
 * Callers:
 *     sub_1800A7F30 @ 0x1800A7F30 (sub_1800A7F30.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800A201C @ 0x1800A201C (sub_1800A201C.c)
 *     sub_1800A3FCC @ 0x1800A3FCC (sub_1800A3FCC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A34AC(__int64 a1, size_t *a2)
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
    sub_18000E498(v10);
    v6 = sub_18000E498(v9);
    sub_180027770(pExceptionObject, v6, 419, (__int64)v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LODWORD(v4) = sub_1800A3FCC(a1, a2);
  if ( (_DWORD)v4 == -1 )
  {
    v4 = *(int *)(a1 + 2080);
    if ( (int)v4 >= 64 )
    {
      sub_18000E498(v9);
      v7 = sub_18000E498(v10);
      sub_180027770(pExceptionObject, v7, 433, (__int64)v9, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 2080) = v4 + 1;
    sub_1800A201C((__int64 *)(a1 + 16), (__int64)v8, a2);
    *(_DWORD *)(v8[0] + 64LL) = v4;
    sub_180011714((__int64 *)(a1 + 32 * (v4 + 1)), (__int64 *)a2);
  }
  return (unsigned int)v4;
}
