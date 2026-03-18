/*
 * XREFs of VfEvtDeviceD0Exit @ 0x1C00C4580
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0044F5C (-PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     McTemplateK0pp @ 0x1C004529C (McTemplateK0pp.c)
 *     VerifyCriticalRegionEntry @ 0x1C0045308 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0045334 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0045390 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C4308 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDeviceD0Exit(unsigned __int64 Device, unsigned int TargetState)
{
  unsigned int v4; // esi
  char *TypedContext; // r14
  __int64 (__fastcall *v6)(unsigned __int64, _QWORD); // rbp
  _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-48h] BYREF
  _GUID activityId; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v6 = (__int64 (__fastcall *)(unsigned __int64, _QWORD))*((_QWORD *)TypedContext + 4);
  if ( v6 )
  {
    *(_QWORD *)&activityId.Data1 = 0LL;
    *(_QWORD *)activityId.Data4 = 0LL;
    if ( PerfEvtDeviceD0ExitStart(Device, &activityId) )
    {
      v4 = v6(Device, TargetState);
      if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      {
        v7 = (_MCGEN_TRACE_CONTEXT *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (Device & 1) != 0 )
          v7 = (_MCGEN_TRACE_CONTEXT *)((char *)v7 - LOWORD(v7->RegistrationHandle));
        McTemplateK0pp(
          v7,
          &FX_POWER_D0_EXIT_STOP,
          &activityId,
          *(const void **)(*(_QWORD *)(v7->MatchAnyKeyword + 72) + 168LL),
          (const void *)Device);
      }
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v4 = v6(Device, TargetState);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v6);
    }
  }
  return v4;
}
