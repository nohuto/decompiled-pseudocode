/*
 * XREFs of LdrpInitializeDllPath @ 0x180022848
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x1800221EC (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800228A0 (LdrGetDllHandleEx.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpInitializeImportRedirection @ 0x180084E4C (LdrpInitializeImportRedirection.c)
 *     LdrpLoadWow64 @ 0x1800869B0 (LdrpLoadWow64.c)
 *     LdrLoadEnclaveModule @ 0x1800CEEC0 (LdrLoadEnclaveModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D28CC (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DC17C (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x180054588 (LdrpLogDllStateEx2.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

void *__fastcall LdrpInitializeDllPath(__int64 a1, __int64 a2, __int64 *a3)
{
  void *result; // rax
  __int64 v7; // rcx
  bool v8; // zf

  result = memset(a3, 0, 0x80uLL);
  if ( (a2 & 1) != 0 || !a2 )
  {
    a3[4] = a1;
    *((_DWORD *)a3 + 6) = a2 & 0xFFFFFFFE;
  }
  else
  {
    v8 = (LdrpDebugFlags & 5) == 0;
    *a3 = a2;
    if ( !v8 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        1445,
        (unsigned int)"LdrpInitializeDllPath",
        2,
        "DLL search path passed in externally: %ws\n",
        a2);
    return (void *)LdrpLogDllStateEx2(v7, a1, *a3, 5312LL);
  }
  return result;
}
