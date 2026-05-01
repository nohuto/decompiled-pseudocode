/*
 * XREFs of ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x18026E3A0
 * Callers:
 *     ??$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180267448 (--$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180086D88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180086DF0 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180116064 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180267564 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x18026C500 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18026E0FC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4Reporti.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180408E08 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::RuntimeClassInitialize(ViewEventDispatcher *this, __int64 a2, __int64 a3)
{
  CCriticalFailureHandler *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v8; // rsi
  CCriticalFailureHandler *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 *v12; // [rsp+20h] [rbp-10h]
  unsigned __int64 *v13; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct ViewEventDispatcher *v15; // [rsp+48h] [rbp+18h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsageToService((__int64)this, a2, a3);
  if ( dword_18059B6EC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18059B6EC);
    if ( dword_18059B6EC == -1 )
    {
      qword_18059B140 = 0LL;
      xmmword_18059B130 = SID_ViewEventDispatcher;
      qword_18059B148 = 0LL;
      qword_18059B160 = 0LL;
      qword_18059B168 = 0LL;
      xmmword_18059B150 = xmmword_1804F4E98;
      qword_18059B180 = 0LL;
      qword_18059B188 = 0LL;
      xmmword_18059B170 = (__int128)SID_ForegroundViewManager;
      Init_thread_footer(&dword_18059B6EC);
    }
  }
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (ViewEventDispatcher *)((char *)this + 120),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_18059B130,
         3LL);
  LODWORD(v15) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v15);
    v5 = (int)v15;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        (int *)&v15,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x3Eu,
        v12,
        v13);
      v5 = (int)v15;
    }
    if ( v5 < 0 )
    {
      v6 = 63LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  v8 = (_QWORD *)((char *)this + 496);
  v15 = this;
  Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease((__int64 *)this + 62);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher *>(
         (ViewManagerBridge **)this + 62,
         &v15);
  LODWORD(v15) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v15);
    v5 = (int)v15;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        (int *)&v15,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x44u,
        v12,
        v13);
      v5 = (int)v15;
    }
    if ( v5 < 0 )
    {
      v6 = 69LL;
      goto LABEL_12;
    }
  }
  v10 = *v8;
  if ( *v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*v8);
  v11 = *((_QWORD *)this + 63);
  *((_QWORD *)this + 63) = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
