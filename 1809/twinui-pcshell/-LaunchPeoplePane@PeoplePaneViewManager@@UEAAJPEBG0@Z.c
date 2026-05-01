/*
 * XREFs of ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801CA4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800F9A44 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18016195C (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_18016195C.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180161A10 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_180161A10.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801647D4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6_____lambda_ebd42d67d4ed24c24d65003e6952ebf6___ @ 0x1801C5E14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___--CTaskW.c)
 *     ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1801C646C (--$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1801C6514 (--$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___ @ 0x1801C66B0 (Windows--Internal--ComTaskPool--QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x1801C6E08 (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA?AV?$shared_ptr@UPeoplePaneViewInfo@@@0@AEAPEBG$$QEAW4ViewType@@AEBUtagSIZE@@@Z @ 0x1801C70B4 (--$make_shared@UPeoplePaneViewInfo@@AEAPEBGW4ViewType@@AEBUtagSIZE@@@std@@YA-AV-$shared_ptr@UPeo.c)
 *     _lambda_3debc4ca9d8e656fb3713c45e37949b6_::_lambda_3debc4ca9d8e656fb3713c45e37949b6_ @ 0x1801C7170 (_lambda_3debc4ca9d8e656fb3713c45e37949b6_--_lambda_3debc4ca9d8e656fb3713c45e37949b6_.c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_ @ 0x1801C76C8 (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--__lambda_ebd42d67d4ed24c24d65003e6952ebf6_.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801C786C (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C8AA0 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1801CB328 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1801CB720 (-Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x1801CB790 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x1801CB888 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PeoplePaneViewManager::LaunchPeoplePane(
        PeoplePaneViewManager *this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  std::_Ref_count_base *v5; // rbx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PeoplePaneViewInfo **v12; // rcx
  HWND WindowW; // rax
  const char *v14; // r9
  int v15; // eax
  PeoplePaneViewInfo *v16; // rbx
  __int64 v17; // rdx
  std::_Ref_count_base *v18; // rbx
  int v19; // eax
  int v20; // eax
  LPVOID v21; // rax
  PeoplePaneViewInfo *v22; // rax
  unsigned int v23; // ebx
  void *v24; // rax
  __int64 v25; // rdi
  unsigned __int16 *v27; // [rsp+38h] [rbp-D0h] BYREF
  PeoplePaneViewInfo *v28; // [rsp+40h] [rbp-C8h] BYREF
  std::_Ref_count_base *v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  __int64 v31; // [rsp+58h] [rbp-B0h]
  LPVOID v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h]
  __int64 v35; // [rsp+78h] [rbp-90h]
  char *v36; // [rsp+80h] [rbp-88h] BYREF
  std::_Ref_count_base *v37[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h]
  _QWORD v39[4]; // [rsp+A8h] [rbp-60h] BYREF
  char v40; // [rsp+C8h] [rbp-40h]
  PeoplePaneViewInfo *v41; // [rsp+D0h] [rbp-38h]
  std::_Ref_count_base *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+E0h] [rbp-28h]
  char v44; // [rsp+E8h] [rbp-20h]
  void **v45; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v46[40]; // [rsp+228h] [rbp+120h] BYREF
  int v47[80]; // [rsp+368h] [rbp+260h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F0h] [rbp+3E8h]

  v38 = -2LL;
  v27 = a2;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v46,
    (__int64)"PeoplePaneAppLaunch");
  v46[0] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  CommonPeopleTelemetry::PeoplePaneAppLaunch::StartActivity((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v46, v27);
  *(_OWORD *)v37 = 0LL;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((RTL_SRWLOCK *)this - 11, v27, v37) < 0 )
  {
    LODWORD(v36) = 0;
    std::make_shared<PeoplePaneViewInfo,unsigned short const * &,enum ViewType,tagSIZE const &>(
      &v28,
      &v27,
      (unsigned int *)&v36);
    v16 = v28;
    PeoplePaneViewInfo::StartTelemetryShowTimer(v28);
    AcquireSRWLockExclusive((PSRWLOCK)this + 5);
    v36 = (char *)this + 40;
    v17 = *((_QWORD *)this + 7);
    if ( *((_QWORD *)this + 8) == v17 )
    {
      std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
        (char **)this + 6,
        (char *)v17,
        &v28);
      v18 = v29;
    }
    else
    {
      *(_QWORD *)v17 = v16;
      *(_QWORD *)(v17 + 8) = v29;
      v18 = 0LL;
      *((_QWORD *)this + 7) += 16LL;
    }
    if ( this != (PeoplePaneViewManager *)-40LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 5);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneNewView<unsigned short const * &>(
      (__int64)v46,
      (LPCWSTR *)&v27);
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    LOBYTE(v35) = 0;
    v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            &v32,
            (__int64)v27,
            0xFFFFFFFFFFFFFFFFuLL);
    v7 = v19;
    if ( v19 >= 0 )
    {
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      LOBYTE(v31) = 0;
      v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (LPVOID *)&v28,
              (__int64)a3,
              0xFFFFFFFFFFFFFFFFuLL);
      v7 = v20;
      if ( v20 >= 0 )
      {
        CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(v46, v47);
        v39[0] = (char *)this - 88;
        v39[2] = v33;
        v39[3] = v34;
        v21 = v32;
        v32 = 0LL;
        v34 = 0LL;
        v33 = 0LL;
        v39[1] = v21;
        v40 = 0;
        LOBYTE(v35) = 1;
        v42 = v29;
        v43 = v30;
        v22 = v28;
        v28 = 0LL;
        v30 = 0LL;
        v29 = 0LL;
        v41 = v22;
        v44 = 0;
        LOBYTE(v31) = 1;
        wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
          (struct wil::details::IFailureCallback *)&v45,
          (__int64)v47);
        v45 = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
        v23 = *((_DWORD *)this + 103);
        v24 = operator new(0x190uLL, (const struct std::nothrow_t *)&std::nothrow);
        v25 = 0LL;
        if ( v24 )
          v25 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6___::CTaskWrapper__lambda_ebd42d67d4ed24c24d65003e6952ebf6_____lambda_ebd42d67d4ed24c24d65003e6952ebf6___(
                  (__int64)v24,
                  (__int64)v39);
        v7 = SHTaskPoolQueueTask(0LL, 2LL, v23, 0LL, v25, 0LL);
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_((__int64)v39);
        if ( v7 >= 0 )
        {
          CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v47);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
          v12 = (PeoplePaneViewInfo **)&v32;
LABEL_37:
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v12);
          goto LABEL_38;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE6,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v7);
        CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v47);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD4,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v20);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v19);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
    PeoplePaneViewManager::RemovePaneViewInfoForContactId((PeoplePaneViewManager *)((char *)this - 88), v27);
    goto LABEL_39;
  }
  v5 = v37[0];
  if ( *((_QWORD *)v37[0] + 4) )
  {
    CommonPeopleTelemetry::PeoplePaneAppLaunch::PeoplePaneSwitchToView<unsigned short const * &>(
      (__int64)v46,
      (LPCWSTR *)&v27);
    if ( !a3 )
    {
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      if ( !SetForegroundWindow(WindowW) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xB7,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          v14);
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 4) + 56LL))(*((_QWORD *)v5 + 4));
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          184LL,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v15);
      goto LABEL_38;
    }
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    LOBYTE(v31) = 0;
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (LPVOID *)&v28,
           (__int64)v27,
           0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_11:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v28);
      goto LABEL_39;
    }
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    LOBYTE(v35) = 0;
    v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           &v32,
           (__int64)a3,
           0xFFFFFFFFFFFFFFFFuLL);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_10:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
      goto LABEL_11;
    }
    CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(v46, v47);
    v9 = lambda_3debc4ca9d8e656fb3713c45e37949b6_::_lambda_3debc4ca9d8e656fb3713c45e37949b6_(
           (__int64)v39,
           (__int64)this - 88,
           (__int64 *)&v28,
           (__int64 *)&v32,
           (__int64)v47);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___(
           v11,
           v10,
           *((_DWORD *)this + 103),
           v9);
    lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_((__int64)v39);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
      CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v47);
      goto LABEL_10;
    }
    CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v47);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
    v12 = &v28;
    goto LABEL_37;
  }
LABEL_38:
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v46,
    0);
  v7 = 0;
LABEL_39:
  if ( v37[1] )
    std::_Ref_count_base::_Decref(v37[1]);
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)v46);
  return (unsigned int)v7;
}
