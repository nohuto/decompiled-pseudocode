/*
 * XREFs of ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x180217F6C
 * Callers:
 *     ??$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18020FBF8 (--$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _Init_thread_footer @ 0x1800840F0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180084158 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIComponentRelationshipStore@2345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x18020EF74 (--$MakeAndInitialize@VComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIC.c)
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18020FD14 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x180215B20 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180217D6C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CAX_NW4Reporti.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::RuntimeClassInitialize(ViewEventDispatcher *this)
{
  __int64 *v1; // rbx
  __int64 v3; // rdx
  CCriticalFailureHandler *v4; // rcx
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  CCriticalFailureHandler *v9; // rcx
  _QWORD *v10; // rsi
  CCriticalFailureHandler *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 *v14; // [rsp+20h] [rbp-10h]
  unsigned __int64 *v15; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct ViewEventDispatcher *v17; // [rsp+40h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 528);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,>(v1);
  LODWORD(v17) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v17);
    v5 = (int)v17;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        (int *)&v17,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x2Bu,
        v14,
        v15);
      v5 = (int)v17;
    }
    if ( v5 < 0 )
    {
      v7 = 44LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::ReportUsageToService((__int64)v4, v3, v6);
  if ( dword_1805111A8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805111A8);
    if ( dword_1805111A8 == -1 )
    {
      qword_180510C50 = 0LL;
      xmmword_180510C40 = SID_ViewEventDispatcher;
      qword_180510C58 = 0LL;
      qword_180510C70 = 0LL;
      qword_180510C78 = 0LL;
      xmmword_180510C60 = (__int128)GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b;
      qword_180510C90 = 0LL;
      qword_180510C98 = 0LL;
      qword_180510CB0 = 0LL;
      xmmword_180510C80 = xmmword_180478AB8;
      qword_180510CB8 = 0LL;
      xmmword_180510CA0 = (__int128)SID_ForegroundViewManager;
      Init_thread_footer(&dword_1805111A8);
    }
  }
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (ViewEventDispatcher *)((char *)this + 120),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_180510C40,
         4LL);
  LODWORD(v17) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v17);
    v5 = (int)v17;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        (int *)&v17,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x44u,
        v14,
        v15);
      v5 = (int)v17;
    }
    if ( v5 < 0 )
    {
      v7 = 69LL;
      goto LABEL_9;
    }
  }
  v10 = (_QWORD *)((char *)this + 512);
  v17 = this;
  Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease((__int64 *)this + 64);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher *>(
         (ViewManagerBridge **)this + 64,
         &v17);
  LODWORD(v17) = v5;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v11, (int *)&v17);
    v5 = (int)v17;
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( v5 < 0 )
  {
    if ( v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        (int *)&v17,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        0x4Au,
        v14,
        v15);
      v5 = (int)v17;
    }
    if ( v5 < 0 )
    {
      v7 = 75LL;
      goto LABEL_9;
    }
  }
  v12 = *v10;
  if ( *v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*v10);
  v13 = *((_QWORD *)this + 65);
  *((_QWORD *)this + 65) = v12;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}
