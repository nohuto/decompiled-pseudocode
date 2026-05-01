/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800282B0
 * Callers:
 *     _lambda_d724fd238306415e4865b10bdd74c2f1_::operator() @ 0x18001D890 (_lambda_d724fd238306415e4865b10bdd74c2f1_--operator().c)
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800424C0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180051060 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1800654C0 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x1800659E0 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18006E31C (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x180155340 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     _lambda_513e2cae72e786c9ce7e8c131594408f_::operator() @ 0x180155444 (_lambda_513e2cae72e786c9ce7e8c131594408f_--operator().c)
 *     _lambda_ad49911410aee6c70adeeb780ccd34e3_::operator() @ 0x180155544 (_lambda_ad49911410aee6c70adeeb780ccd34e3_--operator().c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x1801565E0 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180156B10 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x180157038 (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x180157AF0 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18015EA9C (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x18015ED40 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180027B60 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180027F40 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x180028CFC (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800293E0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180049B5C (-LockExclusive@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTa.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006250C (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC28 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801180C4 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801549E4 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x180154FC8 (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::RaiseApplicationViewChanged(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  int v9; // edi
  __int64 v10; // rdi
  unsigned __int64 CurrentThreadId; // rbx
  signed __int64 *v12; // rdi
  signed __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // r8
  char *v16; // rbx
  char *v17; // rdi
  char *v18; // rsi
  char v19; // bl
  __int64 v20; // r8
  volatile signed __int32 *v21; // rdx
  struct IObjectArray *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // si
  volatile signed __int32 *v26; // rcx
  RTL_SRWLOCK *v27; // rbx
  int v29; // eax
  HANDLE ProcessHeap; // rax
  _DWORD *v31; // rax
  signed __int64 v32; // rax
  HANDLE v33; // rax
  void *v34; // rsi
  void *v35; // rbx
  int v36; // eax
  __int64 v37; // rdx
  void *v38; // rbx
  HANDLE v39; // rax
  HANDLE v40; // rax
  void *v41; // r15
  int v42; // eax
  __int64 v43; // rdx
  void *v44; // rbx
  HANDLE v45; // rax
  HANDLE v46; // rax
  int v47[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v48; // [rsp+28h] [rbp-D8h] BYREF
  WINBOOL fPending; // [rsp+2Ch] [rbp-D4h] BYREF
  int v50; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v51; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  struct IObjectArray *v53; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v54; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-B0h] BYREF
  void **v56; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v57[3]; // [rsp+68h] [rbp-98h] BYREF
  int v58; // [rsp+80h] [rbp-80h]
  int *v59; // [rsp+88h] [rbp-78h]
  int *v60; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+98h] [rbp-68h] BYREF
  char v62; // [rsp+9Ch] [rbp-64h]
  _OWORD v63[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v64; // [rsp+C0h] [rbp-40h] BYREF
  const char *v65; // [rsp+C8h] [rbp-38h]
  LPVOID v66; // [rsp+D0h] [rbp-30h]
  char v67; // [rsp+D8h] [rbp-28h]
  __int64 v68; // [rsp+E0h] [rbp-20h]
  _BYTE v69[144]; // [rsp+E8h] [rbp-18h] BYREF
  LPVOID v70; // [rsp+178h] [rbp+78h]
  __int64 v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  void *v73; // [rsp+190h] [rbp+90h] BYREF
  void (__fastcall ***v74)(_QWORD, GUID *, __int64 *); // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v75; // [rsp+1A8h] [rbp+A8h]
  __int64 v76; // [rsp+1B0h] [rbp+B0h]
  struct IObjectArray *v77; // [rsp+1B8h] [rbp+B8h]
  void **v78; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v79[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v80; // [rsp+1D8h] [rbp+D8h]
  DWORD v81; // [rsp+1E0h] [rbp+E0h]
  int *v82; // [rsp+1E8h] [rbp+E8h]
  int *v83; // [rsp+1F0h] [rbp+F0h]
  int v84; // [rsp+1F8h] [rbp+F8h] BYREF
  char v85; // [rsp+1FCh] [rbp+FCh]
  char v86[32]; // [rsp+200h] [rbp+100h] BYREF
  int v87; // [rsp+220h] [rbp+120h]
  __int64 v88; // [rsp+228h] [rbp+128h]
  LPVOID v89; // [rsp+230h] [rbp+130h]
  char v90; // [rsp+238h] [rbp+138h]
  __int64 v91; // [rsp+240h] [rbp+140h]
  char v92[144]; // [rsp+248h] [rbp+148h] BYREF
  LPVOID lpMem; // [rsp+2D8h] [rbp+1D8h]
  __int64 v94; // [rsp+2E0h] [rbp+1E0h]
  __int64 v95; // [rsp+2E8h] [rbp+1E8h]
  void *v96[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v57[0] = 0LL;
  v57[1] = &v56;
  v57[2] = 0LL;
  v58 = 0;
  v59 = &v64;
  v60 = &v61;
  v61 = 0;
  v62 = 0;
  v67 = 0;
  v64 = 0;
  v65 = "RaiseApplicationViewChange";
  v66 = 0LL;
  v68 = 1LL;
  v70 = 0LL;
  memset_0(v69, 0, sizeof(v69));
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v56 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
    (__int64)&v56,
    a2,
    a3,
    a4);
  v53 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 104), &v53);
  v9 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26B,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)CallbackArray,
      v47[0]);
    goto LABEL_44;
  }
  if ( a3 == 7 )
  {
    *(_QWORD *)v47 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v47);
    if ( ((int (__fastcall *)(_QWORD, GUID *, int *))**a2)(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, v47) >= 0 )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v47 + 40LL))(*(_QWORD *)v47, 0LL);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x273,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v29,
          v47[0]);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v47);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 600) + 40LL))(*(_QWORD *)(a1 + 600), a2, a3);
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( a2 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[1])(a2);
  v74 = a2;
  v75 = a3;
  v76 = a4;
  v77 = v53;
  if ( v53 )
    ((void (__fastcall *)(struct IObjectArray *))v53->lpVtbl->AddRef)(v53);
  v78 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v79[0] = 0LL;
  v79[1] = &v78;
  v80 = 0LL;
  v81 = 0;
  v82 = 0LL;
  v10 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_72;
  CurrentThreadId = GetCurrentThreadId();
  v12 = (signed __int64 *)(v10 + 8 * (CurrentThreadId % 0xA));
  v13 = *v12;
  if ( !*v12 )
  {
LABEL_68:
    ProcessHeap = GetProcessHeap();
    v31 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v13 = (signed __int64)v31;
    if ( v31 )
    {
      *(_QWORD *)v31 = 0LL;
      v31[2] = CurrentThreadId;
      *((_QWORD *)v31 + 2) = 0LL;
      _m_prefetchw(v12);
      do
      {
        v32 = *v12;
        *(_QWORD *)(v13 + 16) = *v12;
      }
      while ( v32 != _InterlockedCompareExchange64(v12, v13, v32) );
      goto LABEL_14;
    }
LABEL_72:
    v13 = 0LL;
    goto LABEL_14;
  }
  while ( *(_DWORD *)(v13 + 8) != (_DWORD)CurrentThreadId )
  {
    v13 = *(_QWORD *)(v13 + 16);
    if ( !v13 )
      goto LABEL_68;
  }
LABEL_14:
  v79[0] = v13;
  if ( v13 )
  {
    v80 = *(_QWORD *)v13;
    *(_QWORD *)v13 = v79;
    v81 = GetCurrentThreadId();
  }
  v83 = &v84;
  v84 = 0;
  v85 = 0;
  v90 = 0;
  v87 = 0;
  v88 = 0LL;
  v89 = 0LL;
  v91 = 1LL;
  lpMem = 0LL;
  memset_0(v92, 0, sizeof(v92));
  v94 = 0LL;
  v95 = 0LL;
  v96[0] = 0LL;
  if ( v81 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v79);
  if ( v73 )
  {
    v83 = v60;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v96,
      &v73);
  }
  else
  {
    v14 = (char *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v14;
    if ( v14 )
    {
      *(_DWORD *)v14 = 1;
      v17 = v14 + 8;
      *((_DWORD *)v14 + 2) = 0;
      v14[12] = 0;
      *((_DWORD *)v14 + 2) = v61;
      v14[12] = v62;
      *((_OWORD *)v14 + 1) = v63[0];
      *((_OWORD *)v14 + 2) = v63[1];
      v61 = 0;
      v62 = 0;
      v18 = v14 + 48;
      memset_0(v14 + 48, 0, 0x20uLL);
      *(_DWORD *)v18 = v64;
      *((_QWORD *)v18 + 1) = v65;
      if ( v18[24] )
      {
        v33 = GetProcessHeap();
        HeapFree(v33, 0, *((LPVOID *)v18 + 2));
        v18[24] = 0;
      }
      *((_QWORD *)v18 + 2) = 0LL;
      *((_QWORD *)v18 + 2) = v66;
      v66 = 0LL;
      v18[24] = v67;
      v67 = 0;
      *((_QWORD *)v17 + 9) = v68;
      wil::StoredFailureInfo::StoredFailureInfo(v17 + 80, v69);
      *((_QWORD *)v17 + 30) = 0LL;
      if ( v96[0] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v96[0], 0xFFFFFFFF) == 1 )
        {
          v34 = v96[0];
          if ( v96[0] )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v96[0] + 8);
            operator delete(v34, (const struct std::nothrow_t *)0x100);
          }
        }
      }
      v96[0] = v16;
      v83 = (int *)v17;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v73, 0xFFFFFFFF) == 1 )
        {
          v35 = v73;
          if ( v73 )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v73 + 8);
            operator delete(v35, (const struct std::nothrow_t *)0x100);
          }
        }
        v16 = (char *)v96[0];
      }
      v73 = v16;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)v16);
      v60 = v83;
      v59 = v83 + 10;
    }
  }
  v82 = v83 + 10;
  v78 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v9 = NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___(
         *(NotificationDispatcher **)(a1 + 672),
         (__int64 *)&v74,
         v15);
  v78 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v19 = 1;
  v20 = 2147942974LL;
  v21 = (volatile signed __int32 *)v96[0];
  if ( v96[0] )
  {
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      &v78,
      SRWLock,
      2147942974LL);
    v21 = (volatile signed __int32 *)v96[0];
    if ( !v96[0] || *(_DWORD *)v96[0] != 1 )
    {
      v19 = 0;
      wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v96);
      v21 = (volatile signed __int32 *)v96[0];
    }
    if ( SRWLock[0] )
    {
      ReleaseSRWLockExclusive(SRWLock[0]);
      v21 = (volatile signed __int32 *)v96[0];
    }
    if ( !v19 )
      goto LABEL_29;
    v20 = 2147942974LL;
  }
  if ( *v83 == 1 )
  {
    v36 = v83[21];
    v48 = v36;
    v37 = 2147942974LL;
    if ( v36 < 0 )
      v37 = (unsigned int)v36;
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v83,
      v37,
      &v48);
    ((void (__fastcall *)(void ***))v78[1])(&v78);
    v21 = (volatile signed __int32 *)v96[0];
  }
LABEL_29:
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21, 0xFFFFFFFF) == 1 )
    {
      v38 = v96[0];
      if ( v96[0] )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v96[0] + 8);
        operator delete(v38, (const struct std::nothrow_t *)0x100);
      }
    }
    v96[0] = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v39 = GetProcessHeap();
      HeapFree(v39, 0, lpMem);
    }
    lpMem = 0LL;
    v94 = 0LL;
  }
  if ( v90 )
  {
    v40 = GetProcessHeap();
    HeapFree(v40, 0, v89);
    v90 = 0;
  }
  v89 = 0LL;
  if ( v84 == 1 )
  {
    v84 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180599BF8;
      qword_180599BF8[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599C10 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599BF8, qword_180599C10);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180599BF8);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v86);
  }
  v84 = 3;
  if ( v81 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v79);
  v22 = v77;
  if ( v77 )
  {
    v77 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *, volatile signed __int32 *, __int64))v22->lpVtbl->Release)(
      v22,
      v21,
      v20);
  }
  v23 = v76;
  if ( v76 )
  {
    v76 = 0LL;
    (*(void (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 16LL))(v23, v21, v20);
  }
  v24 = (__int64)v74;
  if ( v74 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)v24 + 16LL))(v24, v21, v20);
  }
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9,
      v47[0]);
  else
    v9 = 0;
LABEL_44:
  if ( v53 )
    ((void (__fastcall *)(struct IObjectArray *, volatile signed __int32 *, __int64))v53->lpVtbl->Release)(
      v53,
      v21,
      v20);
  v56 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v25 = 1;
  v26 = (volatile signed __int32 *)v73;
  if ( !v73 )
    goto LABEL_106;
  v27 = (RTL_SRWLOCK *)((char *)v73 + 248);
  AcquireSRWLockExclusive((PSRWLOCK)v73 + 31);
  v26 = (volatile signed __int32 *)v73;
  if ( !v73 || *(_DWORD *)v73 != 1 )
  {
    v25 = 0;
    if ( v73 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v73, 0xFFFFFFFF) == 1 )
      {
        v41 = v73;
        if ( v73 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v73 + 8);
          operator delete(v41, (const struct std::nothrow_t *)0x100);
        }
      }
      v26 = 0LL;
      v73 = 0LL;
    }
  }
  if ( v27 )
  {
    ReleaseSRWLockExclusive(v27);
    v26 = (volatile signed __int32 *)v73;
  }
  if ( v25 )
  {
LABEL_106:
    if ( *v60 == 1 )
    {
      v42 = v60[21];
      v50 = v42;
      v43 = 2147942974LL;
      if ( v42 < 0 )
        v43 = (unsigned int)v42;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v60,
        v43,
        &v50);
      ((void (__fastcall *)(void ***))v56[1])(&v56);
      v26 = (volatile signed __int32 *)v73;
    }
  }
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26, 0xFFFFFFFF) == 1 )
    {
      v44 = v73;
      if ( v73 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v73 + 8);
        operator delete(v44, (const struct std::nothrow_t *)0x100);
      }
    }
    v73 = 0LL;
  }
  if ( v70 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v70, 0xFFFFFFFF) == 1 )
    {
      v45 = GetProcessHeap();
      HeapFree(v45, 0, v70);
    }
    v70 = 0LL;
    v71 = 0LL;
  }
  if ( v67 )
  {
    v46 = GetProcessHeap();
    HeapFree(v46, 0, v66);
    v67 = 0;
  }
  v66 = 0LL;
  if ( v61 == 1 )
  {
    v61 = 2;
    v54 = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v51, &v54) && v51 )
    {
      v54 = qword_180599BF8;
      qword_180599BF8[0] = &ShellScreenClippingLogging::`vftable';
      qword_180599C10 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599BF8, qword_180599C10);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180599BF8);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v54 + 1), v63);
  }
  v61 = 3;
  if ( v58 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v57);
  return (unsigned int)v9;
}
