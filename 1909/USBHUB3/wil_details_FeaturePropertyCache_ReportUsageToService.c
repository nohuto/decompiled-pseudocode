/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00134EC
 * Callers:
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0017E20 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C00779E0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0013238 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v2; // ebx
  int v3; // r8d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1;
  if ( (_DWORD)a2 )
  {
    switch ( (_DWORD)a2 )
    {
      case 1:
        v3 = (_DWORD)a1 == 0 ? 4 : 0;
        goto LABEL_17;
      case 2:
        v3 = (_DWORD)a1 != 0 ? 1 : 5;
        goto LABEL_17;
      case 3:
        v3 = (_DWORD)a1 != 0 ? 2 : 6;
        goto LABEL_17;
      case 4:
        v3 = (_DWORD)a1 != 0 ? 3 : 7;
        goto LABEL_17;
      case 5:
        v3 = (_DWORD)a1 != 0 ? 8 : 10;
        goto LABEL_17;
      case 6:
        v3 = (_DWORD)a1 != 0 ? 9 : 11;
        goto LABEL_17;
    }
    LOBYTE(a2) = a2 - 100;
    if ( (unsigned __int8)a2 <= 0x31u )
    {
      v3 = (unsigned __int8)a2 + ((_DWORD)a1 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v3 = 255;
LABEL_17:
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     v3);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(15299626LL, &Feature_UsbHubDripsWatchdogSurpriseRemove_logged_traits, 0LL, v2, &v5, 0LL, 0, 1LL);
  }
  return result;
}
