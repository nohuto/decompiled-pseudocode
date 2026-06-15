/*
 * XREFs of ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005E378
 * Callers:
 *     ??$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x18005E314 (--$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18002D46C (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@XZ @ 0x18005EA74 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$alloc.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x18005EAB4 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x18005EBE4 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005EC24 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
CPowerReferenceManager *__fastcall CPowerReferenceManager::CPowerReferenceManager(CPowerReferenceManager *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v6; // [rsp+28h] [rbp-30h] BYREF
  void *v7; // [rsp+30h] [rbp-28h]
  CPowerReferenceManager *v8; // [rsp+38h] [rbp-20h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 32), 2);
  v6 = 1;
  v7 = &CPdcActivationClient::PdcTimerActivatorCallback;
  v8 = this;
  v2 = Pdcv2ActivationClientRegister(40LL, &v6, this) | 0x10000000;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CPdcActivationClient::CPdcActivationClient", 18, v2);
  *((_DWORD *)this + 28) = 0;
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 120), 2);
  *((_BYTE *)this + 200) = -1;
  *((_QWORD *)this + 26) = CreateThreadpoolTimer(
                             (PTP_TIMER_CALLBACK)lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_,
                             (char *)this + 112,
                             0LL);
  CSebNotifier::PublishSebEvent((CPowerReferenceManager *)((char *)this + 112), 0);
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 216), 2);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 37) = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buyheadnode(v3);
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPowerReferenceManager *)((char *)this + 216));
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 312), 2);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 49) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Buyheadnode(v4);
  CCaptureNotifier::PublishCaptureAudioStatus((CPowerReferenceManager *)((char *)this + 312));
  return this;
}
