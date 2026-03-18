/*
 * XREFs of DxgkAcquireAdapterStopResetSync @ 0x1C01F6E50
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C029E630 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C029E7DC (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkAcquireAdapterStopResetSync(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx

  if ( a1 )
  {
    v5 = a1 + 120;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    return 0LL;
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v3 + 24) = 261LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
}
