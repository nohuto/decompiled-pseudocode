/*
 * XREFs of LdrpLoadDll @ 0x180023190
 * Callers:
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180084E3C (LdrpInitializeImportRedirection.c)
 *     LdrpLoadWow64 @ 0x1800869A0 (LdrpLoadWow64.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D28CC (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DC17C (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     LdrpPreprocessDllName @ 0x180025FA8 (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrpLoadDllInternal @ 0x180026788 (LdrpLoadDllInternal.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, int a2, int a3, __int64 a4)
{
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v11; // [rsp+58h] [rbp-A8h]
  _WORD v12[128]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = a3;
  LdrpLogDllState(0LL, a1, 5288LL);
  v10 = 0x1000000;
  v11 = v12;
  v12[0] = 0;
  v9 = LdrpPreprocessDllName(a1, &v10, 0LL, &v8);
  if ( v9 >= 0 )
    LdrpLoadDllInternal((unsigned int)&v10, a2, v8, 4, 0LL, 0LL, a4, (__int64)&v9);
  if ( v12 != v11 )
    NtdllpFreeStringRoutine((__int64)v11);
  v10 = 0x1000000;
  v11 = v12;
  v12[0] = 0;
  LdrpLogDllState(0LL, a1, 5289LL);
  return (unsigned int)v9;
}
