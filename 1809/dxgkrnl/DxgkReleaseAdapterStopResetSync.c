/*
 * XREFs of DxgkReleaseAdapterStopResetSync @ 0x1C01C84E8
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C02685B0 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C026877C (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkReleaseAdapterStopResetSync(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx

  if ( a1 )
  {
    v3 = a1 + 120;
    *(_QWORD *)(v3 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v1 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v1 + 24) = 226LL;
    WdLogEvent5_WdError(v1);
    return 3221225485LL;
  }
}
