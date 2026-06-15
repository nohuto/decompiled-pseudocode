/*
 * XREFs of ??1CPdcActivationClient@@QEAA@XZ @ 0x1800EEED4
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$0 @ 0x18006F388 (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$0.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     Pdcv2ActivationClientUnregister @ 0x18013396C (Pdcv2ActivationClientUnregister.c)
 */

void __fastcall CPdcActivationClient::~CPdcActivationClient(CPdcActivationClient *this)
{
  void *v2; // rcx
  int v3; // eax
  void *v4; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    v3 = Pdcv2ActivationClientUnregister(v2) | 0x10000000;
    if ( v3 < 0 )
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::~CPdcActivationClient", 26, v3);
    *(_QWORD *)this = 0LL;
  }
  _Mtx_destroy_in_situ((CPdcActivationClient *)((char *)this + 32));
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 3) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
