/*
 * XREFs of RtlReleasePath @ 0x180071700
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x18000922C (LdrpResolveProcedureAddress.c)
 *     LdrpGetDelayloadExportDll @ 0x1800221EC (LdrpGetDelayloadExportDll.c)
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800228A0 (LdrGetDllHandleEx.c)
 *     LdrpCorInitialize @ 0x180054948 (LdrpCorInitialize.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpReleaseDllPath @ 0x1800716E4 (LdrpReleaseDllPath.c)
 *     LdrpInitializeImportRedirection @ 0x180084E3C (LdrpInitializeImportRedirection.c)
 *     LdrpLoadWow64 @ 0x1800869A0 (LdrpLoadWow64.c)
 *     LdrLoadEnclaveModule @ 0x1800CEEC0 (LdrLoadEnclaveModule.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D28CC (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

signed __int64 __fastcall RtlReleasePath(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, a2, a3, a4);
  --*(_QWORD *)(a1 - 32);
  v5 = a1 - 112;
  if ( *(_QWORD *)(a1 - 32) )
    v5 = 0LL;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v5 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return result;
}
