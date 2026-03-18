/*
 * XREFs of TtmpCalloutWatchdogCallback @ 0x14087DD90
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140812510 (DbgkWerCaptureLiveKernelDump.c)
 *     TtmiLogCalloutWatchdogCrashSkipped @ 0x140882C94 (TtmiLogCalloutWatchdogCrashSkipped.c)
 */

__int64 __fastcall TtmpCalloutWatchdogCallback(
        __int64 a1,
        ULONG a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  int v9; // ecx
  int v11; // [rsp+50h] [rbp-18h] BYREF
  _DWORD v12[2]; // [rsp+58h] [rbp-10h] BYREF

  v12[1] = 0;
  v12[0] = 37;
  if ( NtPowerInformation(SystemPowerStateLogging|0x40, v12, 8u, &v11, 4u) < 0 )
  {
    v9 = -1;
  }
  else
  {
    v9 = v11;
    if ( TtmpDeviceCalloutCrashDumpEnabled && !v11 )
      KeBugCheckEx(a2, a3, a4, BugCheckParameter3, BugCheckParameter4);
  }
  TtmiLogCalloutWatchdogCrashSkipped(v9, a2, a3, a4, BugCheckParameter3, BugCheckParameter4);
  DbgkWerCaptureLiveKernelDump(
    L"TTMDCallout",
    a2,
    a3,
    a4,
    BugCheckParameter3,
    BugCheckParameter4,
    0LL,
    (__int64)PopPowerAggregatorValidateModernStandbyCallback,
    0);
  return 0LL;
}
