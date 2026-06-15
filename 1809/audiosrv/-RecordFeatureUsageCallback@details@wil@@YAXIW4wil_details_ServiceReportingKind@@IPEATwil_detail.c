/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18000C440
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180063828 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000C384 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000C948 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18005F2B0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        const char *a4,
        struct _FILETIME pftDueTime)
{
  _DWORD *v7; // rbx
  void *v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  rsize_t v11; // rdx
  struct _TP_TIMER *v12; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  unsigned int v14; // r8d
  void (*v15)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  const char *Source[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( g_wil_details_RecordSRUMFeatureUsage && (!a2 || a2 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1u);
  v7 = (_DWORD *)pftDueTime;
  if ( *(_DWORD *)pftDueTime.dwLowDateTime
    && wil::details::g_enabledStateManager
    && !wil::details::g_processShutdownInProgress
    && (!wil::details::g_pfnRtlDllShutdownInProgress || !wil::details::g_pfnRtlDllShutdownInProgress()) )
  {
    AcquireSRWLockExclusive(&stru_1801B3328);
    v8 = (void *)*(&xmmword_1801B3350 + 1);
    v9 = xmmword_1801B3360;
    LODWORD(Source[0]) = a1;
    Source[1] = a4;
    if ( (unsigned __int64)(*(&xmmword_1801B3350 + 1) - xmmword_1801B3350 + 16LL) >= (_QWORD)xmmword_1801B3360
                                                                                   - xmmword_1801B3350 )
    {
      v10 = 16LL;
      if ( (unsigned __int64)(2 * (xmmword_1801B3360 - xmmword_1801B3350)) > 0x10 )
        v10 = 2 * (xmmword_1801B3360 - xmmword_1801B3350);
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_1801B3350, v10) )
        goto LABEL_18;
      v9 = xmmword_1801B3360;
      v8 = (void *)*(&xmmword_1801B3350 + 1);
    }
    v11 = 0LL;
    if ( (unsigned __int64)v8 < v9 )
      v11 = v9 - (_QWORD)v8;
    memcpy_s(v8, v11, Source, 0x10uLL);
    *(&xmmword_1801B3350 + 1) += 16LL;
LABEL_18:
    if ( !byte_1801B3338 )
    {
      v12 = pti;
      if ( pti
        || (ThreadpoolTimer = CreateThreadpoolTimer(
                                lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_,
                                &wil::details::g_enabledStateManager,
                                0LL),
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
              &pti,
              ThreadpoolTimer),
            (v12 = pti) != 0LL) )
      {
        pftDueTime = (struct _FILETIME)-3000000000LL;
        SetThreadpoolTimer(v12, &pftDueTime, 0, 0x124F8u);
        byte_1801B3338 = 1;
      }
    }
    ReleaseSRWLockExclusive(&stru_1801B3328);
  }
  v14 = v7[1];
  if ( v14 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a1, v7[2], v14, 0, Source[0]);
  if ( !v7[4] && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_1801B3328);
    if ( !qword_1801B3348 )
    {
      v15 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
      qword_1801B3348 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v15 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v15)(
          &qword_1801B3348,
          lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
          -1LL);
      }
    }
    ReleaseSRWLockExclusive(&stru_1801B3328);
  }
}
