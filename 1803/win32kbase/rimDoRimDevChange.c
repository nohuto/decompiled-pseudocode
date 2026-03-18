/*
 * XREFs of rimDoRimDevChange @ 0x1C00FC564
 * Callers:
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C00E0610 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00E2B70 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C00F7964 (RIMFreeSpecificDev.c)
 *     RIMRemoveDevOfInputType @ 0x1C00F822C (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00FCB10 (rimHandleAnyPnpRemovePendingDevices.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00F6718 (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C00F691C (RIMHandleTTMDeviceRemoval.c)
 *     rimDoRimDevChangeCallback @ 0x1C00FC6B8 (rimDoRimDevChangeCallback.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  unsigned int v8; // edi
  int v9; // eax

  result = a3 - 1;
  if ( a3 == 1 )
  {
    LOBYTE(v8) = 1;
    goto LABEL_15;
  }
  if ( a3 != 2 )
  {
    if ( a3 != 3 )
    {
      if ( a3 == 4 )
      {
        if ( *(_BYTE *)(a1 + 74) && (*(_DWORD *)(a2 + 184) & 0x20000000) != 0 )
          rimDoRimDevChangeCallback(a1, a2, 3LL);
      }
      else if ( a3 != 5 )
      {
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    v8 = (*(_DWORD *)(a2 + 184) & 0x20000000u) >> 29;
    result = RIMHandleTTMDeviceRemoval(a2, a2, a3, a4);
    if ( (int)result < 0 )
      result = WPP_RECORDER_SF_D(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 3u,
                 0x15u,
                 0xFu,
                 (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
                 result);
LABEL_15:
    if ( !(_BYTE)v8 )
      goto LABEL_17;
    goto LABEL_16;
  }
  *(_DWORD *)(a2 + 184) |= 0x20000000u;
  v9 = RIMHandleTTMDeviceArrival(a2);
  if ( v9 < 0 )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0xEu,
      (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      v9);
LABEL_16:
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 72LL))(*(_QWORD *)(a2 + 32), a3);
  result = rimDoRimDevChangeCallback(a1, a2, a3);
LABEL_17:
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x20000000u;
  return result;
}
