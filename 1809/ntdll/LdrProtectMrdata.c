/*
 * XREFs of LdrProtectMrdata @ 0x180060510
 * Callers:
 *     RtlInitializeHistoryTable @ 0x18000329C (RtlInitializeHistoryTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x180027528 (RtlInsertInvertedFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     RtlpCallVectoredHandlers @ 0x18006CC90 (RtlpCallVectoredHandlers.c)
 *     RtlDeleteFunctionTable @ 0x18006EB60 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006ED50 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F2B0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F5E0 (RtlAddFunctionTable.c)
 *     LdrpGetShimEngineInterface @ 0x1800707C8 (LdrpGetShimEngineInterface.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180076C20 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x180083740 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084210 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180085530 (RtlpRemoveVectoredHandler.c)
 *     LdrpLoadWow64 @ 0x1800869B0 (LdrpLoadWow64.c)
 *     RtlInitializeNtUserPfn @ 0x18008FC20 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18008FD40 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E2034 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlpProtectInvertedFunctionTable @ 0x180106E80 (RtlpProtectInvertedFunctionTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x18006058C (LdrpChangeMrdataProtection.c)
 */

void __fastcall LdrProtectMrdata(int a1)
{
  int ScpCfgCheckFunction; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  ScpCfgCheckFunction = LdrSystemDllInitBlock.ScpCfgCheckFunction;
  if ( a1 )
  {
    if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckFunction) )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    --LODWORD(LdrSystemDllInitBlock.ScpCfgCheckFunction);
    if ( ScpCfgCheckFunction == 1 )
      LdrpChangeMrdataProtection(2LL);
  }
  else
  {
    if ( !LODWORD(LdrSystemDllInitBlock.ScpCfgCheckFunction) )
      LdrpChangeMrdataProtection(4LL);
    if ( ScpCfgCheckFunction == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    LODWORD(LdrSystemDllInitBlock.ScpCfgCheckFunction) = ScpCfgCheckFunction + 1;
  }
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
