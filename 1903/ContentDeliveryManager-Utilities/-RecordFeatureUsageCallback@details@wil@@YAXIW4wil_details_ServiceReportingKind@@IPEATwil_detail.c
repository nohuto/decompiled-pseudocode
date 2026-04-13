/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18000A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180009834 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        union wil_details_FeaturePropertyCache *a4,
        _DWORD *a5)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  void (*v8)(unsigned int, unsigned int, unsigned int, const char *); // rax
  void (*v9)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  __int64 v10; // rdx
  void (*v11)(unsigned int, unsigned int, unsigned int, const char *); // rax

  v6 = a1;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
      g_wil_details_RecordSRUMFeatureUsage(a1, a2, a3);
    if ( *a5 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
        v6,
        a4);
    v7 = (unsigned int)a5[1];
    if ( (_DWORD)v7 )
    {
      v8 = g_wil_details_internalRecordFeatureUsage;
      if ( g_wil_details_internalRecordFeatureUsage || (v8 = g_wil_details_apiRecordFeatureUsage) != 0LL )
        ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v8)(v6, (unsigned int)a5[2], v7, 0LL);
    }
    if ( !a5[4] && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_18018F858);
      if ( !*((_QWORD *)&xmmword_18018F870 + 1) )
      {
        *((_QWORD *)&xmmword_18018F870 + 1) = 0LL;
        v9 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v9 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(char *, __int64 (__fastcall *)(), __int64))v9)(
            (char *)&xmmword_18018F870 + 8,
            lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
            -1LL);
        }
      }
      ReleaseSRWLockExclusive(&stru_18018F858);
    }
  }
  else
  {
    v10 = (unsigned int)a5[2];
    LODWORD(v10) = v10 | 0x80000000;
    if ( !a5[5] )
      v10 = (unsigned int)a5[2];
    v11 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage || (v11 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v11)(a1, v10, 0LL, 0LL);
  }
}
