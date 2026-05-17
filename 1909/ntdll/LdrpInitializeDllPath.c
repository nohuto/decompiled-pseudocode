/*
 * XREFs of LdrpInitializeDllPath @ 0x180021798
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18002113C (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     LdrpMapDllSearchPath @ 0x18002DEC8 (LdrpMapDllSearchPath.c)
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180080C84 (LdrpInitializeImportRedirection.c)
 *     LdrpCorInitialize @ 0x180081710 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     LdrLoadEnclaveModule @ 0x1800CD760 (LdrLoadEnclaveModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D109C (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DA090 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x180032198 (LdrpLogDllStateEx2.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
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
        (__int64)"DLL search path passed in externally: %ws\n",
        a2);
    return (void *)LdrpLogDllStateEx2(v7, a1, *a3, 5312LL);
  }
  return result;
}
