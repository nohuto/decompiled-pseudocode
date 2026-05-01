/*
 * XREFs of ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003F398
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x18003E6F0 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18003C2A8 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18003C800 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18003D6FC (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18003F9F4 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z @ 0x180040418 (-StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800405E4 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18004083C (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004A8EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180050F24 (-OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800648EC (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18007C29C (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMI@AA @ 0x1800B5B3C (--_9IPropertyValue@Foundation@Windows@@$BMI@AA.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017D12C (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_18017D12C.c)
 *     ??$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Z @ 0x1801CE358 (--$GetViewWrapperAs@UINtUserViewWrapper@@@CortanaDesktopExperienceView@@AEAAJAEAV-$ComPtr@UINtUs.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1801CEB0C (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801CF17C (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CortanaDesktopExperienceView::OnViewEventQueued(
        CortanaDesktopExperienceView *this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  char v6; // r14
  const unsigned __int16 *StringRawBuffer; // rbx
  unsigned __int64 v8; // rax
  HRESULT v9; // eax
  HSTRING v10; // r8
  unsigned __int64 v11; // rax
  HRESULT v12; // eax
  HSTRING v13; // r8
  unsigned __int64 v14; // rax
  HRESULT v15; // eax
  HSTRING v16; // r8
  unsigned __int64 v17; // rax
  HRESULT v18; // eax
  HSTRING v19; // r8
  unsigned __int64 v20; // rax
  HRESULT v21; // eax
  HSTRING v22; // r8
  unsigned __int64 v23; // rax
  HRESULT v24; // eax
  HSTRING v25; // r8
  unsigned __int64 v26; // rax
  HRESULT v27; // eax
  HSTRING v28; // r8
  unsigned __int64 v29; // rax
  HRESULT v30; // eax
  HSTRING v31; // r8
  unsigned __int64 v32; // rax
  HRESULT v33; // eax
  HSTRING v34; // r8
  unsigned __int64 v35; // rax
  HRESULT v36; // eax
  HSTRING v37; // r8
  __int64 v38; // rax
  HSTRING v39; // r8
  __int64 v40; // rax
  HSTRING v41; // r8
  __int64 v42; // rax
  HSTRING v43; // r8
  int v44; // ebx
  char v46; // bl
  void (*v47)(void); // rax
  int v48; // eax
  wil::details::in1diag3 *v49; // rcx
  __int64 v50; // rdx
  int v51; // eax
  unsigned __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r8
  int ViewWrapper; // eax
  __int64 v57; // rdx
  __int64 *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  HSTRING v61; // rbx
  int v62; // eax
  void *v63; // rdi
  HANDLE ProcessHeap; // rax
  unsigned __int8 v65[8]; // [rsp+28h] [rbp-E0h] BYREF
  struct Windows::Foundation::IPropertyValue *v66; // [rsp+30h] [rbp-D8h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v68; // [rsp+40h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v69)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v70; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v72; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+70h] [rbp-98h]
  __int64 v74; // [rsp+78h] [rbp-90h]
  __int128 v75; // [rsp+88h] [rbp-80h] BYREF
  __int128 v76; // [rsp+98h] [rbp-70h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-60h] BYREF
  void **v78; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v79[3]; // [rsp+C0h] [rbp-48h] BYREF
  int v80; // [rsp+D8h] [rbp-30h]
  int *v81; // [rsp+E0h] [rbp-28h]
  int *v82; // [rsp+E8h] [rbp-20h]
  int v83; // [rsp+F0h] [rbp-18h] BYREF
  char v84; // [rsp+F4h] [rbp-14h]
  _BYTE v85[32]; // [rsp+F8h] [rbp-10h] BYREF
  int v86; // [rsp+118h] [rbp+10h] BYREF
  const char *v87; // [rsp+120h] [rbp+18h]
  LPVOID lpMem; // [rsp+128h] [rbp+20h]
  char v89; // [rsp+130h] [rbp+28h]
  __int64 v90; // [rsp+138h] [rbp+30h]
  _BYTE v91[144]; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v92[3]; // [rsp+1D0h] [rbp+C8h] BYREF
  void *v93; // [rsp+1E8h] [rbp+E0h]
  HSTRING_HEADER hstringHeader; // [rsp+1F8h] [rbp+F0h] BYREF
  HSTRING string; // [rsp+210h] [rbp+108h] BYREF
  HSTRING_HEADER v96; // [rsp+218h] [rbp+110h] BYREF
  HSTRING v97; // [rsp+230h] [rbp+128h] BYREF
  HSTRING_HEADER v98; // [rsp+238h] [rbp+130h] BYREF
  HSTRING v99; // [rsp+250h] [rbp+148h] BYREF
  HSTRING_HEADER v100; // [rsp+258h] [rbp+150h] BYREF
  HSTRING v101; // [rsp+270h] [rbp+168h] BYREF
  HSTRING_HEADER v102; // [rsp+278h] [rbp+170h] BYREF
  HSTRING v103; // [rsp+290h] [rbp+188h] BYREF
  HSTRING_HEADER v104; // [rsp+298h] [rbp+190h] BYREF
  HSTRING v105; // [rsp+2B0h] [rbp+1A8h] BYREF
  HSTRING_HEADER v106; // [rsp+2B8h] [rbp+1B0h] BYREF
  HSTRING v107; // [rsp+2D0h] [rbp+1C8h] BYREF
  HSTRING_HEADER v108; // [rsp+2D8h] [rbp+1D0h] BYREF
  HSTRING v109; // [rsp+2F0h] [rbp+1E8h] BYREF
  HSTRING_HEADER v110; // [rsp+2F8h] [rbp+1F0h] BYREF
  HSTRING v111; // [rsp+310h] [rbp+208h] BYREF
  HSTRING_HEADER v112; // [rsp+318h] [rbp+210h] BYREF
  HSTRING v113; // [rsp+330h] [rbp+228h] BYREF
  _BYTE v114[24]; // [rsp+338h] [rbp+230h] BYREF
  __int64 v115; // [rsp+350h] [rbp+248h]
  _BYTE v116[24]; // [rsp+358h] [rbp+250h] BYREF
  __int64 v117; // [rsp+370h] [rbp+268h]
  _BYTE v118[32]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v119[32]; // [rsp+398h] [rbp+290h] BYREF
  _BYTE v120[32]; // [rsp+3B8h] [rbp+2B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+420h] [rbp+318h]

  v74 = -2LL;
  v6 = 0;
  fPending[0] = 0;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  v79[0] = 0LL;
  v79[1] = &v78;
  v79[2] = 0LL;
  v80 = 0;
  v81 = &v86;
  v82 = &v83;
  v83 = 0;
  v84 = 0;
  v89 = 0;
  v86 = 0;
  v87 = "CortanaExperienceManager_OnEventQueued";
  lpMem = 0LL;
  v90 = 1LL;
  v92[0] = 0LL;
  memset_0(v91, 0, sizeof(v91));
  v92[1] = 0LL;
  v92[2] = 0LL;
  v93 = 0LL;
  v78 = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)&v78,
    StringRawBuffer);
  string = 0LL;
  v8 = -1LL;
  do
    ++v8;
  while ( aFocusnavigateu[v8] );
  if ( v8 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBD1ELL);
  }
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBD09LL);
  }
  v9 = WindowsCreateStringReference(L"FocusNavigateUp", v8, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    RaiseException(v9, 1u, 0, 0LL);
    JUMPOUT(0x1800DB6EDLL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, string, v10) )
  {
    v50 = 0LL;
LABEL_90:
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 80LL))(*((_QWORD *)this + 12), v50);
    goto LABEL_64;
  }
  v97 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( aFocusnavigated[v11] );
  if ( v11 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBCF4LL);
  }
  if ( (int)v11 + 1 < (unsigned int)v11 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBCDFLL);
  }
  v12 = WindowsCreateStringReference(L"FocusNavigateDown", v11, &v96, &v97);
  if ( v12 < 0 )
  {
    RaiseException(v12, 1u, 0, 0LL);
    JUMPOUT(0x1800DB703LL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v97, v13) )
  {
    v50 = 1LL;
    goto LABEL_90;
  }
  v99 = 0LL;
  v14 = -1LL;
  do
    ++v14;
  while ( aFocusnavigaten[v14] );
  if ( v14 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBCCALL);
  }
  if ( (int)v14 + 1 < (unsigned int)v14 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBCB5LL);
  }
  v15 = WindowsCreateStringReference(L"FocusNavigateNext", v14, &v98, &v99);
  if ( v15 < 0 )
  {
    RaiseException(v15, 1u, 0, 0LL);
    JUMPOUT(0x1800DB71ALL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v99, v16) )
  {
    v50 = 2LL;
    goto LABEL_90;
  }
  v101 = 0LL;
  v17 = -1LL;
  do
    ++v17;
  while ( aFocusnavigatep[v17] );
  if ( v17 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBCA0LL);
  }
  if ( (int)v17 + 1 < (unsigned int)v17 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBC8BLL);
  }
  v18 = WindowsCreateStringReference(L"FocusNavigatePrev", v17, &v100, &v101);
  if ( v18 < 0 )
  {
    RaiseException(v18, 1u, 0, 0LL);
    JUMPOUT(0x1800DB733LL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v101, v19) )
  {
    v50 = 3LL;
    goto LABEL_90;
  }
  v103 = 0LL;
  v20 = -1LL;
  do
    ++v20;
  while ( aDismiss[v20] );
  if ( v20 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBC76LL);
  }
  if ( (int)v20 + 1 < (unsigned int)v20 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBC61LL);
  }
  v21 = WindowsCreateStringReference(L"Dismiss", v20, &v102, &v103);
  if ( v21 < 0 )
  {
    RaiseException(v21, 1u, 0, 0LL);
    JUMPOUT(0x1800DB761LL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v103, v22) )
  {
    v51 = CortanaDesktopExperienceView::DismissCortanaApp(this);
    v44 = v51;
    if ( v51 >= 0 )
      goto LABEL_64;
    v52 = (unsigned int)v51;
    v53 = 1212LL;
    goto LABEL_99;
  }
  v105 = 0LL;
  v23 = -1LL;
  do
    ++v23;
  while ( aDismissstartan[v23] );
  if ( v23 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBC4CLL);
  }
  if ( (int)v23 + 1 < (unsigned int)v23 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBC37LL);
  }
  v24 = WindowsCreateStringReference(L"DismissStartAndCortana", v23, &v104, &v105);
  if ( v24 < 0 )
  {
    RaiseException(v24, 1u, 0, 0LL);
    JUMPOUT(0x1800DB792LL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v105, v25) )
  {
    CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, 0);
    v47 = *(void (**)(void))(**((_QWORD **)this + 12) + 112LL);
    goto LABEL_79;
  }
  v107 = 0LL;
  v26 = -1LL;
  do
    ++v26;
  while ( aChangeexplicit[v26] );
  if ( v26 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBC22LL);
  }
  if ( (int)v26 + 1 < (unsigned int)v26 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBC0DLL);
  }
  v27 = WindowsCreateStringReference(L"ChangeExplicitDismissMode", v26, &v106, &v107);
  if ( v27 < 0 )
  {
    RaiseException(v27, 1u, 0, 0LL);
    JUMPOUT(0x1800DB7BELL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v107, v28) )
  {
    v69 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v69);
    v54 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v114, &off_180467AF0);
    v44 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
            &v69,
            *(_QWORD *)(v54 + 24),
            v55,
            v65);
    v115 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    if ( v44 >= 0 )
    {
      CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, v65[0]);
      goto LABEL_64;
    }
    v52 = (unsigned int)v44;
    v53 = 1223LL;
LABEL_99:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v53,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)v52,
      *(int *)v65);
    goto LABEL_65;
  }
  v109 = 0LL;
  v29 = -1LL;
  do
    ++v29;
  while ( aRequestapptran[v29] );
  if ( v29 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBBF8LL);
  }
  if ( (int)v29 + 1 < (unsigned int)v29 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBBE3LL);
  }
  v30 = WindowsCreateStringReference(L"RequestAppTransition", v29, &v108, &v109);
  if ( v30 < 0 )
  {
    RaiseException(v30, 1u, 0, 0LL);
    JUMPOUT(0x1800DB851LL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v109, v31) )
  {
    *((_BYTE *)this + 236) = 1;
    v47 = *(void (**)(void))(**((_QWORD **)this + 12) + 40LL);
LABEL_79:
    v47();
    goto LABEL_64;
  }
  v111 = 0LL;
  v32 = -1LL;
  do
    ++v32;
  while ( aApptransitionc[v32] );
  if ( v32 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBBCELL);
  }
  if ( (int)v32 + 1 < (unsigned int)v32 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBBB9LL);
  }
  v33 = WindowsCreateStringReference(L"AppTransitionCompleted", v32, &v110, &v111);
  if ( v33 < 0 )
  {
    RaiseException(v33, 1u, 0, 0LL);
    JUMPOUT(0x1800DB863LL);
  }
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v111, v34) )
  {
    *((_BYTE *)this + 236) = 0;
    v47 = *(void (**)(void))(**((_QWORD **)this + 12) + 48LL);
    goto LABEL_79;
  }
  v113 = 0LL;
  v35 = -1LL;
  do
    ++v35;
  while ( aShowanimationc[v35] );
  if ( v35 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBBA4LL);
  }
  if ( (int)v35 + 1 < (unsigned int)v35 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800DBB8FLL);
  }
  v36 = WindowsCreateStringReference(L"ShowAnimationComplete", v35, &v112, &v113);
  if ( v36 < 0 )
  {
    RaiseException(v36, 1u, 0, 0LL);
    JUMPOUT(0x1800DB88CLL);
  }
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v113, v37) )
  {
    v38 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v118, &off_18042C618);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, *(HSTRING *)(v38 + 24), v39) )
    {
      v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v119, &off_18042C610);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, *(HSTRING *)(v40 + 24), v41) )
      {
        v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v120, &off_18042C620);
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, *(HSTRING *)(v42 + 24), v43) )
          goto LABEL_64;
        v70 = a3;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v70);
        v61 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v116, &off_180467AE8) + 24);
        *((_QWORD *)&v72 + 1) = 0LL;
        v73 = 0LL;
        v77 = 0u;
        v66 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v66);
        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v70,
                    v61,
                    &v66) >= 0 )
        {
          v62 =  Windows::Foundation::IPropertyValue::`vcall'{200,{flat}}(v66, &v77);
          if ( v62 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F,
              (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
              (const char *)(unsigned int)v62,
              *(int *)v65);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v66);
        v117 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v70);
        v76 = v77;
        v48 = CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(this, &v76);
        v49 = retaddr;
        if ( v48 >= 0 )
          goto LABEL_64;
        v60 = 1266LL;
        goto LABEL_121;
      }
      v48 = CortanaDesktopExperienceView::OnWindowSizeChangeHandled(this);
      v49 = retaddr;
      if ( v48 < 0 )
      {
        v60 = 1260LL;
LABEL_121:
        wil::details::in1diag3::_Log_Hr(
          v49,
          (void *)v60,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v48,
          *(int *)v65);
      }
    }
    else
    {
      *((_BYTE *)this + 257) = 0;
      CortanaDesktopExperienceView::ShowBorder(this, 0LL);
    }
LABEL_64:
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v78);
    v44 = 0;
    goto LABEL_65;
  }
  CortanaDesktopExperienceView::ShowBorder(this, 0LL);
  if ( !*((_BYTE *)this + 252)
    || (v6 = 1, v46 = 1, !*(_QWORD *)CortanaDesktopExperienceView::GetViewWrapper(this, &v72)) )
  {
    v46 = 0;
  }
  if ( (v6 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v72);
  if ( !v46 )
    goto LABEL_64;
  *((_BYTE *)this + 252) = 0;
  v68 = 0LL;
  ViewWrapper = CortanaDesktopExperienceView::GetViewWrapperAs<INtUserViewWrapper>(this, &v68);
  v44 = ViewWrapper;
  if ( ViewWrapper >= 0 )
  {
    ViewWrapper = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v68 + 24LL))(v68, 0LL);
    v44 = ViewWrapper;
    if ( ViewWrapper >= 0 )
    {
      if ( *((_DWORD *)this + 62) == 2 )
      {
        v58 = (__int64 *)*((_QWORD *)this + 12);
        v59 = *v58;
        v75 = *(_OWORD *)((char *)this + 196);
        (*(void (__fastcall **)(__int64 *, __int128 *))(v59 + 136))(v58, &v75);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
      goto LABEL_64;
    }
    v57 = 1244LL;
  }
  else
  {
    v57 = 1243LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v57,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)ViewWrapper,
    *(int *)v65);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
LABEL_65:
  v78 = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v78);
  if ( v93 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v93, 0xFFFFFFFF) == 1 )
    {
      v63 = v93;
      if ( v93 )
      {
        wil::ActivityBase<CortanaProactiveLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v93 + 8);
        operator delete(v63, (const struct std::nothrow_t *)0x100);
      }
    }
    v93 = 0LL;
  }
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v92);
  if ( v89 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v89 = 0;
  }
  lpMem = 0LL;
  if ( v83 == 1 )
  {
    v83 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_180599CF8;
      qword_180599CF8[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599D10 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CF8, qword_180599D10);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_180599CF8);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v85);
  }
  v83 = 3;
  if ( v80 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v79);
  return (unsigned int)v44;
}
