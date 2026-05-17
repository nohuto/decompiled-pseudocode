/*
 * XREFs of LdrProtectMrdata @ 0x180035F18
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x180020D8C (RtlInsertInvertedFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180065170 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x180065490 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180065670 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180065BC0 (RtlAddFunctionTable.c)
 *     LdrpGetShimEngineInterface @ 0x180069660 (LdrpGetShimEngineInterface.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1800704E0 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlInitializeHistoryTable @ 0x180078164 (RtlInitializeHistoryTable.c)
 *     RtlpCallVectoredHandlers @ 0x180078F20 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x18007F730 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x18007FF70 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180081560 (RtlpRemoveVectoredHandler.c)
 *     LdrpLoadWow64 @ 0x1800822AC (LdrpLoadWow64.c)
 *     RtlInitializeNtUserPfn @ 0x18008CBA0 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18008CCC0 (RtlResetNtUserPfn.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800DFC84 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     RtlpProtectInvertedFunctionTable @ 0x180104560 (RtlpProtectInvertedFunctionTable.c)
 * Callees:
 *     LdrpChangeMrdataProtection @ 0x180032A38 (LdrpChangeMrdataProtection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrProtectMrdata(int a1)
{
  int v2; // edi

  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v2 = LdrpMrdataUnprotected;
  if ( !a1 )
  {
    if ( !LdrpMrdataUnprotected )
      LdrpChangeMrdataProtection(4u);
    if ( v2 != -1 )
    {
      LdrpMrdataUnprotected = v2 + 1;
      return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
LABEL_10:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !LdrpMrdataUnprotected )
    goto LABEL_10;
  --LdrpMrdataUnprotected;
  if ( v2 == 1 )
    LdrpChangeMrdataProtection(2u);
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
