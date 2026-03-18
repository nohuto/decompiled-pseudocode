/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C0128240
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C01112B0 (RIMAbConfigureDeviceArbitration.c)
 *     rimIsCSWakeablePointerDevice @ 0x1C011CAFC (rimIsCSWakeablePointerDevice.c)
 *     ?DropPointerInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0127BAC (-DropPointerInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C0164424 (ApiSetIsPTPInputEnabled.c)
 *     ApiSetProcessHidRawInput @ 0x1C01648E0 (ApiSetProcessHidRawInput.c)
 */

void __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  int HasMonitor; // eax

  v5 = *(unsigned int *)gpsi;
  if ( (v5 & 0x2000) == 0
    && ((v5 & 0x4000) == 0
     || (*(_DWORD *)(a2 + 200) & 0x80u) != 0 && (unsigned int)rimIsCSWakeablePointerDevice(a2, v5, a3))
    && (*(_DWORD *)gpsi & 0x2000) == 0 )
  {
    v6 = *(_QWORD *)(a2 + 480);
    if ( (int)IsEnsurePointerDeviceHasMonitorSupported() < 0 )
      HasMonitor = 0;
    else
      HasMonitor = EnsurePointerDeviceHasMonitor(v6);
    if ( HasMonitor )
    {
      if ( *(_DWORD *)(v6 + 24) != 7 || (unsigned int)ApiSetIsPTPInputEnabled() )
      {
        if ( (unsigned int)(*(_DWORD *)(v6 + 24) - 1) > 3 || RawInputManagerObject::bTouchInputAllowed )
        {
          if ( *(_DWORD *)(v6 + 156) )
          {
            if ( !*(_DWORD *)(a1 + 464) )
              RIMAbConfigureDeviceArbitration();
            rimDoProcessAnyPointerDeviceInput(a1, a2);
            goto LABEL_23;
          }
          WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0xDu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
        }
        else
        {
          WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0xCu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
        }
      }
      else
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0xBu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
      }
    }
    else
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0xAu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
    }
    InputTraceLogging::RIM::DropPointerInput();
LABEL_23:
    if ( (*(_DWORD *)(a2 + 184) & 0x8000) != 0 )
    {
      ApiSetProcessHidRawInput(a2);
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_InputVirtualization__private_propertyCache,
        0xF89686u,
        (__int64)&unk_1C01933C8,
        0,
        3u);
    }
  }
}
