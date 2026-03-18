/*
 * XREFs of DxgkMiracastQueryMiracastStatus @ 0x1C02A61AC
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02036D0 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF50 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C02A4A1C (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastStatus(const WCHAR *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 DeviceContextFromName; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // r8

  DeviceContextFromName = DpiMiracastGetDeviceContextFromName(a1);
  v9 = DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
    *a2 = *(_DWORD *)(v9 + 408);
    *a3 = *(_DWORD *)(v9 + 416);
    *(_QWORD *)(v9 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v9 + 32);
    DpiMiracastReleaseMiracastDeviceContext((int *)v9, v9, v12);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v10);
    result = 3221226021LL;
    *a3 = -2147483642;
  }
  return result;
}
