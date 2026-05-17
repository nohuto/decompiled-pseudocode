/*
 * XREFs of RtlReleasePath @ 0x180032330
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18001B784 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18001BB70 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetDelayloadExportDll @ 0x18002113C (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     LdrpMapDllSearchPath @ 0x18002DEC8 (LdrpMapDllSearchPath.c)
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180080C84 (LdrpInitializeImportRedirection.c)
 *     LdrpCorInitialize @ 0x180081710 (LdrpCorInitialize.c)
 *     LdrpReleaseDllPath @ 0x180081F20 (LdrpReleaseDllPath.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     LdrLoadEnclaveModule @ 0x1800CD760 (LdrLoadEnclaveModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D109C (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlReleasePath(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  --*(_QWORD *)(a1 - 32);
  v2 = a1 - 112;
  if ( *(_QWORD *)(a1 - 32) )
    v2 = 0LL;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v2 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v2);
  return result;
}
