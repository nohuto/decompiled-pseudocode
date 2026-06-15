/*
 * XREFs of ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800BE320
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18005BB20 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x1800633B4 (--1-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@std@@.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800C1920 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18002A5DC (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x18005A5A4 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005A914 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1800FBC50 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800FBF38 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UE.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@0@Z @ 0x1800FC294 (-erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBK.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPowerReferenceManager::~CPowerReferenceManager(CPowerReferenceManager *this)
{
  char *v2; // rdi
  char *v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  void *v6; // rcx
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 312;
  CCaptureNotifier::PublishCaptureAudioStatus((CPowerReferenceManager *)((char *)this + 312));
  std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::erase(
    v2 + 80,
    &v7,
    **((_QWORD **)v2 + 10));
  std::_Deallocate<16,0>(*((void **)v2 + 10), (const struct std::nothrow_t *)0x30);
  _Mtx_destroy_in_situ((_Mtx_t)v2);
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPowerReferenceManager *)((char *)this + 216));
  v3 = (char *)this + 296;
  v4 = *((_QWORD *)this + 37);
  std::_Tree<std::_Tmap_traits<std::wstring,ENDPOINT_REF_DATA,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,ENDPOINT_REF_DATA>>,0>>::_Erase(
    (char *)this + 296,
    *(_QWORD *)(v4 + 8));
  *(_QWORD *)(*(_QWORD *)v3 + 8LL) = v4;
  **(_QWORD **)v3 = v4;
  *(_QWORD *)(*(_QWORD *)v3 + 16LL) = v4;
  *((_QWORD *)this + 38) = 0LL;
  std::_Deallocate<16,0>(*((void **)this + 37), (const struct std::nothrow_t *)0x48);
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 216));
  if ( *((_QWORD *)this + 26) )
  {
    CSebNotifier::CancelDeferredSebReferenceRelease((CPowerReferenceManager *)((char *)this + 112));
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
  }
  CSebNotifier::PublishSebEvent((CPowerReferenceManager *)((char *)this + 112), 0);
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 120));
  if ( *(_QWORD *)this )
  {
    v5 = Pdcv2ActivationClientUnregister(*(_QWORD *)this) | 0x10000000;
    if ( v5 < 0 )
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::~CPdcActivationClient", 26, v5);
    *(_QWORD *)this = 0LL;
  }
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 32));
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 3) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
