/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180006FC0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_s @ 0x18001E168 (memcpy_s.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001E1F4 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x18002AB5C (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18002AE60 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180052608 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        _DWORD *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // r8d
  void *v8; // r10
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  rsize_t v12; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  void (*v14)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  unsigned int v15; // edx
  const char *Source[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (unsigned int)a1;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (a2 - 100 <= 0x31 || !a2) )
      g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, a3);
    if ( !*a5
      || !wil::details::g_enabledStateManager
      || wil::details::g_processShutdownInProgress
      || wil::details::g_pfnRtlDllShutdownInProgress && wil::details::g_pfnRtlDllShutdownInProgress() )
    {
      goto LABEL_6;
    }
    AcquireSRWLockExclusive(&SRWLock);
    v8 = (void *)*(&xmmword_1801E0DC0 + 1);
    v9 = xmmword_1801E0DD0;
    v10 = xmmword_1801E0DD0 - xmmword_1801E0DC0;
    LODWORD(Source[0]) = v6;
    Source[1] = a4;
    if ( (unsigned __int64)(*(&xmmword_1801E0DC0 + 1) - xmmword_1801E0DC0 + 16LL) >= (_QWORD)xmmword_1801E0DD0
                                                                                   - xmmword_1801E0DC0 )
    {
      v11 = 16LL;
      if ( (unsigned __int64)(2 * v10) > 0x10 )
        v11 = 2 * v10;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_1801E0DC0, v11) )
        goto LABEL_22;
      v9 = xmmword_1801E0DD0;
      v8 = (void *)*(&xmmword_1801E0DC0 + 1);
    }
    if ( (unsigned __int64)v8 >= v9 )
      v12 = 0LL;
    else
      v12 = v9 - (_QWORD)v8;
    memcpy_s(v8, v12, Source, 0x10uLL);
    *(&xmmword_1801E0DC0 + 1) += 16LL;
LABEL_22:
    if ( !byte_1801E0DA8 )
    {
      if ( !qword_1801E0DA0 )
      {
        ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                            &wil::details::g_enabledStateManager,
                            0LL);
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
          &qword_1801E0DA0,
          ThreadpoolTimer);
      }
      wil::details::EnsureCoalescedTimer_SetTimer(&qword_1801E0DA0, &byte_1801E0DA8, 300000LL);
    }
    ReleaseSRWLockExclusive(&SRWLock);
LABEL_6:
    v7 = a5[1];
    if ( v7 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, a5[2], v7, (unsigned int)a4, Source[0]);
    if ( !a5[4] && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !qword_1801E0DB8 )
      {
        v14 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        qword_1801E0DB8 = 0LL;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v14 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v14)(
            &qword_1801E0DB8,
            lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
            -1LL);
        }
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    return;
  }
  v15 = a5[2] | 0x80000000;
  if ( !a5[5] )
    v15 = a5[2];
  wil::details::WilApi_RecordFeatureUsage(a1, v15, 0, 0, Source[0]);
}
