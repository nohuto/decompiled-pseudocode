/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4
 * Callers:
 *     InputInitialize @ 0x1C0005874 (InputInitialize.c)
 *     InputUnInitialize @ 0x1C00059F8 (InputUnInitialize.c)
 *     xxxUserProcessCallout @ 0x1C002AEF0 (xxxUserProcessCallout.c)
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C004DB18 (rimOnPnpRemoveComplete.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C004EB30 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050200 (RIMDirectStartStopDeviceRead.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C0051134 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerObjectCreate @ 0x1C0051DD0 (RawInputManagerObjectCreate.c)
 *     NtUserInitialize @ 0x1C006B340 (NtUserInitialize.c)
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B00 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B70 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C0094A30 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C0094B00 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C0094F90 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0095780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0102028 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     RIMInjectInput @ 0x1C010EAC0 (RIMInjectInput.c)
 *     rimFakePnpRemoveComplete @ 0x1C01259D0 (rimFakePnpRemoveComplete.c)
 *     rimOnPnpQueryRemove @ 0x1C0125AD8 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C0125BAC (rimOnPnpRemoveCancelled.c)
 *     rimProcessHidInput @ 0x1C012704C (rimProcessHidInput.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0128240 (RIMProcessAnyPointerDeviceInput.c)
 *     ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C012EF3C (-Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0140910 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0141A34 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0146F48 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C00A8534 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1C00A8610 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  _UNKNOWN **result; // rax
  unsigned int v9; // eax
  __int64 v10; // r9
  char v11; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a5 )
  {
    v9 = wil_details_MapReportingKind(a5, a4, a3, a1);
    result = (_UNKNOWN **)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v10, a2, v9);
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
      {
        v11 = 0;
        return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, &a5, 0LL, v11, 1LL);
      }
    }
  }
  return result;
}
