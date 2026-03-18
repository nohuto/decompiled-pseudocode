/*
 * XREFs of VfEvtDevicePrepareHardware @ 0x1C00C0720
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C004590C (-PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     McTemplateK0pp @ 0x1C0045BC0 (McTemplateK0pp.c)
 *     VerifyCriticalRegionEntry @ 0x1C0045C2C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0045C58 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0045CB4 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C02E0 (VfWdfObjectGetTypedContext.c)
 */

__int64 __fastcall VfEvtDevicePrepareHardware(
        unsigned __int64 Device,
        WDFCMRESLIST__ *ResourcesRaw,
        WDFCMRESLIST__ *ResourcesTranslated)
{
  unsigned int v6; // esi
  char *TypedContext; // r14
  __int64 (__fastcall *v8)(unsigned __int64, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rbp
  _MCGEN_TRACE_CONTEXT *v9; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-58h] BYREF
  _GUID activityId; // [rsp+38h] [rbp-50h] BYREF

  v6 = 0;
  TypedContext = VfWdfObjectGetTypedContext(Device, &WDF_VF_WDFDEVICECREATE_CONTEXT_TYPE_INFO);
  v8 = (__int64 (__fastcall *)(unsigned __int64, WDFCMRESLIST__ *, WDFCMRESLIST__ *))*((_QWORD *)TypedContext + 6);
  if ( v8 )
  {
    *(_QWORD *)&activityId.Data1 = 0LL;
    *(_QWORD *)activityId.Data4 = 0LL;
    if ( PerfEvtDevicePrepareHardwareStart(Device, &activityId) )
    {
      v6 = v8(Device, ResourcesRaw, ResourcesTranslated);
      if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      {
        v9 = (_MCGEN_TRACE_CONTEXT *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (Device & 1) != 0 )
          v9 = (_MCGEN_TRACE_CONTEXT *)((char *)v9 - LOWORD(v9->RegistrationHandle));
        McTemplateK0pp(
          v9,
          &FX_POWER_HW_PREPARE_STOP,
          &activityId,
          *(const void **)(*(_QWORD *)(v9->MatchAnyKeyword + 72) + 168LL),
          (const void *)Device);
      }
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v6 = v8(Device, ResourcesRaw, ResourcesTranslated);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v8);
    }
  }
  return v6;
}
