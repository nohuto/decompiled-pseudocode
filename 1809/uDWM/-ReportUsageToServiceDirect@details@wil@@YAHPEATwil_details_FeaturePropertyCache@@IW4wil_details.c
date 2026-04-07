/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18004D788
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180033D30 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x1800341AC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x18003426C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  void (*v9)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v10)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF

  v7 = wil_details_RecordUsageInPropertyCache((__int64)&v15, a1, a3, a4);
  v8 = 0;
  v14 = *(_QWORD *)(v7 + 16);
  v13 = *(_OWORD *)v7;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a3 || a3 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a3, 1u);
  if ( (_DWORD)v13 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      a1);
  if ( DWORD1(v13) )
  {
    v9 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v9 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v9)(a2, DWORD2(v13), DWORD1(v13), 0LL);
  }
  if ( !(_DWORD)v14 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_);
  if ( (*(_DWORD *)a1 & 0x30) == 0x20 )
  {
    v10 = g_wil_details_internalRecordFeatureUsage;
    v11 = a3;
    LODWORD(v11) = a3 | 0x80000000;
    if ( (*(_DWORD *)a1 & 4) == 0 )
      v11 = a3;
    if ( g_wil_details_internalRecordFeatureUsage || (v10 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v10)(a2, v11, 0LL, 0LL);
  }
  LOBYTE(v8) = (_DWORD)v14 == 0;
  return v8;
}
