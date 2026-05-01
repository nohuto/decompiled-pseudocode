/*
 * XREFs of ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003C140
 * Callers:
 *     ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18000C250 (-SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800517A0 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     _lambda_d724fd238306415e4865b10bdd74c2f1_::operator() @ 0x18005E000 (_lambda_d724fd238306415e4865b10bdd74c2f1_--operator().c)
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180060BD0 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180066C60 (-SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x18012BCEC (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 *     _lambda_53fed4f660adfa7f8b558332501fe89f_::operator() @ 0x18012BDF0 (_lambda_53fed4f660adfa7f8b558332501fe89f_--operator().c)
 *     _lambda_640f543beacc901c3d56ba6a0c7fcd87_::operator() @ 0x18012BEF0 (_lambda_640f543beacc901c3d56ba6a0c7fcd87_--operator().c)
 *     ?HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z @ 0x18012CF50 (-HandleWindowReplaced@CApplicationViewManager@@UEAAJPEAUHWND__@@0@Z.c)
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18012D480 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x18012D9C4 (-SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z.c)
 *     ?WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18012E490 (-WindowShowEnterpriseIndicatorChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18013509C (-SetCanTab@CApplicationViewBase@@IEAAJHAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180135340 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B0A8 (-LockExclusive@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Pa.c)
 *     ?StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003BA00 (-StartActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x18003BDE0 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18003CB8C (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2F0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18005EC94 (-reset@-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Para.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800EFCD4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18012B444 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x18012BA20 (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
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
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  char *v16; // rax
  __int64 v17; // r8
  char *v18; // rbx
  char *v19; // rdi
  char *v20; // rsi
  char v21; // bl
  __int64 v22; // r8
  volatile signed __int32 *v23; // rdx
  struct IObjectArray *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // si
  volatile signed __int32 *v28; // rcx
  RTL_SRWLOCK *v29; // rbx
  int v31; // eax
  HANDLE ProcessHeap; // rax
  _DWORD *v33; // rax
  signed __int64 v34; // rax
  HANDLE v35; // rax
  void *v36; // rsi
  void *v37; // rbx
  int v38; // eax
  __int64 v39; // rdx
  void *v40; // rbx
  HANDLE v41; // rax
  HANDLE v42; // rax
  void *v43; // r15
  int v44; // eax
  __int64 v45; // rdx
  void *v46; // rbx
  HANDLE v47; // rax
  HANDLE v48; // rax
  int v49[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v50; // [rsp+28h] [rbp-D8h] BYREF
  WINBOOL fPending; // [rsp+2Ch] [rbp-D4h] BYREF
  int v52; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v53; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  struct IObjectArray *v55; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v56; // [rsp+48h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v58)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  struct IObjectArray *v61; // [rsp+78h] [rbp-88h]
  void **v62; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v63[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v64; // [rsp+98h] [rbp-68h]
  DWORD v65; // [rsp+A0h] [rbp-60h]
  int *v66; // [rsp+A8h] [rbp-58h]
  int *v67; // [rsp+B0h] [rbp-50h]
  int v68; // [rsp+B8h] [rbp-48h] BYREF
  char v69; // [rsp+BCh] [rbp-44h]
  char v70[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  LPVOID v73; // [rsp+F0h] [rbp-10h]
  char v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]
  char v76[144]; // [rsp+108h] [rbp+8h] BYREF
  LPVOID lpMem; // [rsp+198h] [rbp+98h]
  __int64 v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  void *v80[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  void **v81; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v82[3]; // [rsp+1C8h] [rbp+C8h] BYREF
  int v83; // [rsp+1E0h] [rbp+E0h]
  int *v84; // [rsp+1E8h] [rbp+E8h]
  int *v85; // [rsp+1F0h] [rbp+F0h]
  int v86; // [rsp+1F8h] [rbp+F8h] BYREF
  char v87; // [rsp+1FCh] [rbp+FCh]
  _OWORD v88[2]; // [rsp+200h] [rbp+100h] BYREF
  int v89; // [rsp+220h] [rbp+120h] BYREF
  const char *v90; // [rsp+228h] [rbp+128h]
  LPVOID v91; // [rsp+230h] [rbp+130h]
  char v92; // [rsp+238h] [rbp+138h]
  __int64 v93; // [rsp+240h] [rbp+140h]
  _BYTE v94[144]; // [rsp+248h] [rbp+148h] BYREF
  LPVOID v95; // [rsp+2D8h] [rbp+1D8h]
  __int64 v96; // [rsp+2E0h] [rbp+1E0h]
  __int64 v97; // [rsp+2E8h] [rbp+1E8h]
  void *v98; // [rsp+2F0h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+258h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v82[0] = 0LL;
  v82[1] = &v81;
  v82[2] = 0LL;
  v83 = 0;
  v84 = &v89;
  v85 = &v86;
  v86 = 0;
  v87 = 0;
  v92 = 0;
  v89 = 0;
  v90 = "RaiseApplicationViewChange";
  v91 = 0LL;
  v93 = 1LL;
  v95 = 0LL;
  memset_0(v94, 0, sizeof(v94));
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v81 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity(
    (__int64)&v81,
    a2,
    a3,
    a4);
  v55 = 0LL;
  CallbackArray = AgileRegistrationList::GetCallbackArray((AgileRegistrationList *)(a1 + 104), &v55);
  v9 = CallbackArray;
  if ( CallbackArray < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26B,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)CallbackArray,
      v49[0]);
    goto LABEL_50;
  }
  if ( a3 == 7 )
  {
    *(_QWORD *)v49 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
    if ( ((int (__fastcall *)(_QWORD, GUID *, int *))**a2)(a2, &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, v49) >= 0 )
    {
      v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v49 + 40LL))(*(_QWORD *)v49, 0LL);
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x273,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v31,
          v49[0]);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v49);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 576) + 40LL))(*(_QWORD *)(a1 + 576), a2, a3);
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( a2 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a2)[1])(a2);
  v58 = a2;
  v59 = a3;
  v60 = a4;
  v61 = v55;
  if ( v55 )
    ((void (__fastcall *)(struct IObjectArray *))v55->lpVtbl->AddRef)(v55);
  v62 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v63[0] = 0LL;
  v63[1] = &v62;
  v64 = 0LL;
  v65 = 0;
  v66 = 0LL;
  v10 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_78;
  CurrentThreadId = GetCurrentThreadId();
  v12 = (signed __int64 *)(v10 + 8 * (CurrentThreadId % 0xA));
  v13 = *v12;
  if ( !*v12 )
  {
LABEL_74:
    ProcessHeap = GetProcessHeap();
    v33 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v13 = (signed __int64)v33;
    if ( v33 )
    {
      *(_QWORD *)v33 = 0LL;
      v33[2] = CurrentThreadId;
      *((_QWORD *)v33 + 2) = 0LL;
      _m_prefetchw(v12);
      do
      {
        v34 = *v12;
        *(_QWORD *)(v13 + 16) = *v12;
      }
      while ( v34 != _InterlockedCompareExchange64(v12, v13, v34) );
      goto LABEL_14;
    }
LABEL_78:
    v13 = 0LL;
    goto LABEL_14;
  }
  while ( *(_DWORD *)(v13 + 8) != (_DWORD)CurrentThreadId )
  {
    v13 = *(_QWORD *)(v13 + 16);
    if ( !v13 )
      goto LABEL_74;
  }
LABEL_14:
  v63[0] = v13;
  if ( v13 )
  {
    v64 = *(_QWORD *)v13;
    *(_QWORD *)v13 = v63;
    v65 = GetCurrentThreadId();
  }
  v67 = &v68;
  v68 = 0;
  v69 = 0;
  v74 = 0;
  v71 = 0;
  v72 = 0LL;
  v73 = 0LL;
  v75 = 1LL;
  lpMem = 0LL;
  memset_0(v76, 0, sizeof(v76));
  v78 = 0LL;
  v79 = 0LL;
  v80[0] = 0LL;
  if ( v65 )
  {
    if ( v65 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
        (const char *)0x8007029CLL,
        v49[0]);
    v65 = 0;
    v14 = (_QWORD *)v63[0];
    if ( *(_QWORD *)v63[0] )
    {
      v15 = *(_QWORD **)v63[0];
      while ( v15 != v63 )
      {
        v14 = v15 + 2;
        v63[0] = v15 + 2;
        v15 = (_QWORD *)v15[2];
        if ( !v15 )
          goto LABEL_23;
      }
      *v14 = v64;
    }
LABEL_23:
    v63[0] = 0LL;
  }
  if ( v98 )
  {
    v67 = v85;
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      v80,
      &v98);
  }
  else
  {
    v16 = (char *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v16;
    if ( v16 )
    {
      *(_DWORD *)v16 = 1;
      v19 = v16 + 8;
      *((_DWORD *)v16 + 2) = 0;
      v16[12] = 0;
      *((_DWORD *)v16 + 2) = v86;
      v16[12] = v87;
      *((_OWORD *)v16 + 1) = v88[0];
      *((_OWORD *)v16 + 2) = v88[1];
      v86 = 0;
      v87 = 0;
      v20 = v16 + 48;
      memset_0(v16 + 48, 0, 0x20uLL);
      *(_DWORD *)v20 = v89;
      *((_QWORD *)v20 + 1) = v90;
      if ( v20[24] )
      {
        v35 = GetProcessHeap();
        HeapFree(v35, 0, *((LPVOID *)v20 + 2));
        v20[24] = 0;
      }
      *((_QWORD *)v20 + 2) = 0LL;
      *((_QWORD *)v20 + 2) = v91;
      v91 = 0LL;
      v20[24] = v92;
      v92 = 0;
      *((_QWORD *)v19 + 9) = v93;
      wil::StoredFailureInfo::StoredFailureInfo(v19 + 80, v94);
      *((_QWORD *)v19 + 30) = 0LL;
      if ( v80[0] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v80[0], 0xFFFFFFFF) == 1 )
        {
          v36 = v80[0];
          if ( v80[0] )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v80[0] + 8);
            operator delete(v36, (const struct std::nothrow_t *)0x100);
          }
        }
      }
      v80[0] = v18;
      v67 = (int *)v19;
      if ( v98 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v98, 0xFFFFFFFF) == 1 )
        {
          v37 = v98;
          if ( v98 )
          {
            wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v98 + 8);
            operator delete(v37, (const struct std::nothrow_t *)0x100);
          }
        }
        v18 = (char *)v80[0];
      }
      v98 = v18;
      if ( v18 )
        _InterlockedIncrement((volatile signed __int32 *)v18);
      v85 = v67;
      v84 = v67 + 10;
    }
  }
  v66 = v67 + 10;
  v62 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v9 = NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___(
         *(NotificationDispatcher **)(a1 + 648),
         (__int64 *)&v58,
         v17);
  v62 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v21 = 1;
  v22 = 2147942974LL;
  v23 = (volatile signed __int32 *)v80[0];
  if ( v80[0] )
  {
    wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v62,
      SRWLock);
    v23 = (volatile signed __int32 *)v80[0];
    if ( !v80[0] || *(_DWORD *)v80[0] != 1 )
    {
      v21 = 0;
      wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v80);
      v23 = (volatile signed __int32 *)v80[0];
    }
    if ( SRWLock[0] )
    {
      ReleaseSRWLockExclusive(SRWLock[0]);
      v23 = (volatile signed __int32 *)v80[0];
    }
    if ( !v21 )
      goto LABEL_35;
    v22 = 2147942974LL;
  }
  if ( *v67 == 1 )
  {
    v38 = v67[21];
    v50 = v38;
    v39 = 2147942974LL;
    if ( v38 < 0 )
      v39 = (unsigned int)v38;
    wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
      v67,
      v39,
      &v50);
    ((void (__fastcall *)(void ***))v62[1])(&v62);
    v23 = (volatile signed __int32 *)v80[0];
  }
LABEL_35:
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) == 1 )
    {
      v40 = v80[0];
      if ( v80[0] )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v80[0] + 8);
        operator delete(v40, (const struct std::nothrow_t *)0x100);
      }
    }
    v80[0] = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v41 = GetProcessHeap();
      HeapFree(v41, 0, lpMem);
    }
    lpMem = 0LL;
    v78 = 0LL;
  }
  if ( v74 )
  {
    v42 = GetProcessHeap();
    HeapFree(v42, 0, v73);
    v74 = 0;
  }
  v73 = 0LL;
  if ( v68 == 1 )
  {
    v68 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_18050F870;
      qword_18050F870[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F888 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F870, qword_18050F888);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_18050F870);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v70);
  }
  v68 = 3;
  if ( v65 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v63);
  v24 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *, volatile signed __int32 *, __int64))v24->lpVtbl->Release)(
      v24,
      v23,
      v22);
  }
  v25 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 16LL))(v25, v23, v22);
  }
  v26 = (__int64)v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64, volatile signed __int32 *, __int64))(*(_QWORD *)v26 + 16LL))(v26, v23, v22);
  }
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v9,
      v49[0]);
  else
    v9 = 0;
LABEL_50:
  if ( v55 )
    ((void (__fastcall *)(struct IObjectArray *, volatile signed __int32 *, __int64))v55->lpVtbl->Release)(
      v55,
      v23,
      v22);
  v81 = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v27 = 1;
  v28 = (volatile signed __int32 *)v98;
  if ( !v98 )
    goto LABEL_114;
  v29 = (RTL_SRWLOCK *)((char *)v98 + 248);
  AcquireSRWLockExclusive((PSRWLOCK)v98 + 31);
  v28 = (volatile signed __int32 *)v98;
  if ( !v98 || *(_DWORD *)v98 != 1 )
  {
    v27 = 0;
    if ( v98 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v98, 0xFFFFFFFF) == 1 )
      {
        v43 = v98;
        if ( v98 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v98 + 8);
          operator delete(v43, (const struct std::nothrow_t *)0x100);
        }
      }
      v28 = 0LL;
      v98 = 0LL;
    }
  }
  if ( v29 )
  {
    ReleaseSRWLockExclusive(v29);
    v28 = (volatile signed __int32 *)v98;
  }
  if ( v27 )
  {
LABEL_114:
    if ( *v85 == 1 )
    {
      v44 = v85[21];
      v52 = v44;
      v45 = 2147942974LL;
      if ( v44 < 0 )
        v45 = (unsigned int)v44;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v85,
        v45,
        &v52);
      ((void (__fastcall *)(void ***))v81[1])(&v81);
      v28 = (volatile signed __int32 *)v98;
    }
  }
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd(v28, 0xFFFFFFFF) == 1 )
    {
      v46 = v98;
      if ( v98 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v98 + 8);
        operator delete(v46, (const struct std::nothrow_t *)0x100);
      }
    }
    v98 = 0LL;
  }
  if ( v95 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v95, 0xFFFFFFFF) == 1 )
    {
      v47 = GetProcessHeap();
      HeapFree(v47, 0, v95);
    }
    v95 = 0LL;
    v96 = 0LL;
  }
  if ( v92 )
  {
    v48 = GetProcessHeap();
    HeapFree(v48, 0, v91);
    v92 = 0;
  }
  v91 = 0LL;
  if ( v86 == 1 )
  {
    v86 = 2;
    v56 = 0LL;
    if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v53, &v56) && v53 )
    {
      v56 = qword_18050F870;
      qword_18050F870[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F888 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F870, qword_18050F888);
      InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_18050F870);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v56 + 1), v88);
  }
  v86 = 3;
  if ( v83 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v82);
  return (unsigned int)v9;
}
