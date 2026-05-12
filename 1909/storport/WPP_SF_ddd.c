/*
 * XREFs of WPP_SF_ddd @ 0x1C0038CEC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AF0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0001C98 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0001D00 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001E70 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0013398 (RaidBusEnumeratorVisitUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeviceBusy @ 0x1C00348E4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C00349B8 (RaidAdapterDeviceReady.c)
 *     StorPortCompleteRequest @ 0x1C003C3D0 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x1C003C720 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C003ECC8 (StorpLogSystemEvent.c)
 *     RaidUnitRequestTimeout @ 0x1C0048FC8 (RaidUnitRequestTimeout.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_ddd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
