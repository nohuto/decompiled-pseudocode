/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1800064DC
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006B20 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004670 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800079F0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memset_0 @ 0x1800438DE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x1800439AA (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        unsigned __int16 a3,
        int a4)
{
  _DWORD *Ptr; // rcx
  size_t v10; // r8
  __int64 v11; // rcx
  struct _TP_TIMER **v12; // rdi
  struct _TP_TIMER *v13; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v15; // [rsp+20h] [rbp-28h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( !LOBYTE(pv->Ptr) || wil::details::g_processShutdownInProgress )
    return;
  if ( wil::details::g_pfnRtlDllShutdownInProgress ? wil::details::g_pfnRtlDllShutdownInProgress() : 0 )
    return;
  AcquireSRWLockExclusive(pv + 5);
  HIDWORD(v15) = a3;
  LODWORD(v15) = a2;
  if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[30], 0xCuLL) )
  {
    Ptr = pv[31].Ptr;
    v10 = ((char *)pv[32].Ptr - (char *)Ptr) & -(__int64)(Ptr < pv[32].Ptr);
    if ( Ptr )
    {
      if ( v10 >= 0xC )
      {
        *(_QWORD *)Ptr = v15;
        Ptr[2] = a4;
LABEL_14:
        pv[31].Ptr = (char *)pv[31].Ptr + 12;
        goto LABEL_15;
      }
      memset_0(Ptr, 0, v10);
      *(_DWORD *)_o__errno(v11) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(0LL) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_14;
  }
LABEL_15:
  v12 = (struct _TP_TIMER **)&pv[7];
  if ( !LOBYTE(pv[8].Ptr) )
  {
    v13 = *v12;
    if ( *v12
      || (ThreadpoolTimer = CreateThreadpoolTimer(
                              lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_,
                              pv,
                              0LL),
          wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
            &pv[7],
            ThreadpoolTimer),
          (v13 = *v12) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(v13, &pftDueTime, 0, 0x4E2u);
      LOBYTE(pv[8].Ptr) = 1;
    }
  }
  if ( pv != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(pv + 5);
}
