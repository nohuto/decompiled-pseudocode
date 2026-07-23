/*
 * XREFs of LdrpLoadDll @ 0x180023190
 * Callers:
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180084E4C (LdrpInitializeImportRedirection.c)
 *     LdrpLoadWow64 @ 0x1800869B0 (LdrpLoadWow64.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D28CC (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DC17C (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     LdrpPreprocessDllName @ 0x180025FA8 (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v9; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v10[128]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = a3;
  LdrpLogDllState(0LL, a1, 5288LL);
  *(_DWORD *)&v9.Length = 0x1000000;
  v9.Buffer = v10;
  v10[0] = 0;
  v8 = LdrpPreprocessDllName(a1, &v9, 0LL, &v7);
  if ( v8 >= 0 )
    LdrpLoadDllInternal(&v9, 0LL, 0LL, a4, (__int64)&v8);
  if ( v10 != v9.Buffer )
    NtdllpFreeStringRoutine(v9.Buffer);
  *(_DWORD *)&v9.Length = 0x1000000;
  v9.Buffer = v10;
  v10[0] = 0;
  LdrpLogDllState(0LL, a1, 5289LL);
  return (unsigned int)v8;
}
