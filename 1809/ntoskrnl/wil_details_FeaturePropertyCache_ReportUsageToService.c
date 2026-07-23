/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400F2A84
 * Callers:
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     SeQuerySigningPolicyWorker @ 0x14060B60C (SeQuerySigningPolicyWorker.c)
 *     MmCreatePeb @ 0x1406796F0 (MmCreatePeb.c)
 *     CmpHandlePageFileOpenNotification @ 0x14075A7D4 (CmpHandlePageFileOpenNotification.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408783FC (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopInitializePowerButtonHold @ 0x1409B4CBC (PopInitializePowerButtonHold.c)
 *     KiInitializeVelocity @ 0x1409C5FA8 (KiInitializeVelocity.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1400F2B08 (wil_details_FeaturePropertyCache_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  _UNKNOWN **result; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = a2;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v9 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v9 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v9 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v9 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v9 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v9 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v9 = 255LL;
        else
          v9 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        break;
    }
    result = (_UNKNOWN **)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v9);
    if ( (_DWORD)result )
    {
      result = (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook;
      if ( g_wil_details_pfnFeatureLoggingHook )
        return (_UNKNOWN **)g_wil_details_pfnFeatureLoggingHook(v8, a3, 0LL, a4, &a5, 0LL, 0, 1LL);
    }
  }
  return result;
}
