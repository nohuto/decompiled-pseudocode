/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180048340
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18004828C (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s @ 0x180048684 (memcpy_s.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180062CA0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18006323C (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(
        wil::details *a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        _DWORD *a5)
{
  unsigned int v6; // esi
  _DWORD *v7; // rbx
  unsigned int v8; // r8d
  void *v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  rsize_t v12; // rdx
  struct _TP_TIMER *v13; // rcx
  unsigned __int64 v14; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  void (*v16)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  unsigned int v17; // edx
  const char *Source[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FILETIME pftDueTime; // [rsp+58h] [rbp+20h] BYREF

  v6 = (unsigned int)a1;
  if ( a4 )
  {
    if ( g_wil_details_RecordSRUMFeatureUsage && (a2 - 100 <= 0x31 || !a2) )
      g_wil_details_RecordSRUMFeatureUsage((unsigned int)a1, a2, a3);
    v7 = a5;
    if ( !*a5
      || !wil::details::g_enabledStateManager
      || wil::details::g_processShutdownInProgress
      || wil::details::g_pfnRtlDllShutdownInProgress && wil::details::g_pfnRtlDllShutdownInProgress() )
    {
      goto LABEL_6;
    }
    AcquireSRWLockExclusive(&stru_1801B8398);
    v9 = (void *)*(&xmmword_1801B83C0 + 1);
    v10 = xmmword_1801B83D0;
    v11 = xmmword_1801B83D0 - xmmword_1801B83C0;
    LODWORD(Source[0]) = v6;
    Source[1] = a4;
    if ( (unsigned __int64)(*(&xmmword_1801B83C0 + 1) - xmmword_1801B83C0 + 16LL) >= (_QWORD)xmmword_1801B83D0
                                                                                   - xmmword_1801B83C0 )
    {
      v14 = 2 * v11;
      if ( (unsigned __int64)(2 * v11) <= 0x10 )
        v14 = 16LL;
      if ( !wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)&xmmword_1801B83C0, v14) )
        goto LABEL_21;
      v10 = xmmword_1801B83D0;
      v9 = (void *)*(&xmmword_1801B83C0 + 1);
    }
    if ( (unsigned __int64)v9 >= v10 )
      v12 = 0LL;
    else
      v12 = v10 - (_QWORD)v9;
    memcpy_s(v9, v12, Source, 0x10uLL);
    *(&xmmword_1801B83C0 + 1) += 16LL;
LABEL_21:
    if ( !byte_1801B83A8 )
    {
      v13 = qword_1801B83A0;
      if ( qword_1801B83A0
        || (ThreadpoolTimer = CreateThreadpoolTimer(
                                (PTP_TIMER_CALLBACK)lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                &wil::details::g_enabledStateManager,
                                0LL),
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
              &qword_1801B83A0,
              ThreadpoolTimer),
            (v13 = qword_1801B83A0) != 0LL) )
      {
        pftDueTime = (struct _FILETIME)-3000000000LL;
        SetThreadpoolTimer(v13, &pftDueTime, 0, 0x124F8u);
        byte_1801B83A8 = 1;
      }
    }
    ReleaseSRWLockExclusive(&stru_1801B8398);
LABEL_6:
    v8 = v7[1];
    if ( v8 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, v7[2], v8, (unsigned int)a4, Source[0]);
    if ( !v7[4] && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&stru_1801B8398);
      if ( !qword_1801B83B8 )
      {
        v16 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        qword_1801B83B8 = 0LL;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v16 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))v16)(
            &qword_1801B83B8,
            lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_,
            -1LL);
        }
      }
      ReleaseSRWLockExclusive(&stru_1801B8398);
    }
    return;
  }
  v17 = a5[2] | 0x80000000;
  if ( !a5[5] )
    v17 = a5[2];
  wil::details::WilApi_RecordFeatureUsage(a1, v17, 0, 0, Source[0]);
}
