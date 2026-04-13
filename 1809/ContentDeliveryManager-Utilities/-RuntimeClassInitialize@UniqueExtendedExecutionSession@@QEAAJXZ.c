/*
 * XREFs of ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18007C03C
 * Callers:
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18007C79C (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x18007B9A8 (--1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18007BB04 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18007C548 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007D110 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18007DB68 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@Applicati.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UniqueExtendedExecutionSession::RuntimeClassInitialize(UniqueExtendedExecutionSession *this)
{
  HRESULT v2; // eax
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  HRESULT v10; // eax
  _DWORD *v11; // rbx
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbx
  int v20; // eax
  __int64 v22; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C8h]
  _BYTE v26[24]; // [rsp+50h] [rbp-B8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-90h] BYREF
  HSTRING string; // [rsp+90h] [rbp-78h] BYREF
  HSTRING_HEADER v31; // [rsp+98h] [rbp-70h] BYREF
  HSTRING v32; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v33[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v34; // [rsp+D8h] [rbp-30h]
  int *v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h] BYREF
  char v38; // [rsp+F4h] [rbp-14h]
  int v39; // [rsp+118h] [rbp+10h] BYREF
  const char *v40; // [rsp+120h] [rbp+18h]
  __int64 v41; // [rsp+128h] [rbp+20h]
  char v42; // [rsp+130h] [rbp+28h]
  __int64 v43; // [rsp+138h] [rbp+30h]
  _BYTE v44[144]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v45; // [rsp+1D0h] [rbp+C8h]
  __int64 v46; // [rsp+1D8h] [rbp+D0h]
  __int64 v47; // [rsp+1E0h] [rbp+D8h]
  __int64 v48; // [rsp+1E8h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v27 = -2LL;
  v33[1] = 0LL;
  v33[2] = v33;
  v33[3] = 0LL;
  v34 = 0;
  v35 = &v39;
  v36 = &v37;
  v37 = 0;
  v38 = 0;
  v42 = 0;
  v39 = 0;
  v40 = "ExtendedExecutionRequested";
  v41 = 0LL;
  v43 = 1LL;
  v45 = 0LL;
  memset_0(v44, 0, sizeof(v44));
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v33[0] = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v33);
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession",
         0x43u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
    goto LABEL_39;
  v3 = (_QWORD *)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *v3 = 0LL;
  v5 = RoActivateInstance(string, &v23);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)&GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v3 = v23;
    }
    else
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v23)(
             v23,
             &GUID_af908a2d_118b_48f1_9308_0c4fc41e200f,
             (char *)this + 64);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  string = 0LL;
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 126LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)v6);
    goto LABEL_37;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 56LL))(*v3, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 127LL;
LABEL_16:
    v6 = (unsigned int)v8;
    goto LABEL_17;
  }
  v9 = *v3;
  v32 = 0LL;
  v10 = WindowsCreateStringReference(L"UnlockActionHelper", 0x12u, &v31, &v32);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    JUMPOUT(0x18007C453LL);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v9 + 72LL))(v9, v32);
  v5 = v8;
  v32 = 0LL;
  if ( v8 < 0 )
  {
    v7 = 128LL;
    goto LABEL_16;
  }
  *(_QWORD *)&v25 = UniqueExtendedExecutionSession::OnSessionRevoked;
  DWORD2(v25) = 0;
  *(_QWORD *)v26 = this;
  *(_OWORD *)&v26[8] = v25;
  v11 = 0LL;
  v28 = 0LL;
  v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = 0LL;
  if ( v12 )
  {
    *(_QWORD *)v12 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    v12[3] = 1;
    *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *((_OWORD *)v12 + 1) = *(_OWORD *)v26;
    *((_QWORD *)v12 + 4) = *(_QWORD *)&v26[16];
    *(_QWORD *)v12 = off_1800E0B28;
    v13 = v12;
    v11 = v12;
  }
  *(_QWORD *)&v25 = v11;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, char *))(*(_QWORD *)*v3 + 96LL))(*v3, v13, (char *)this + 72);
  v5 = v14;
  if ( v14 >= 0 )
  {
    v15 = *v3;
    v24 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 112LL))(v15, &v24);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = (unsigned int)v16;
      v18 = 134LL;
      goto LABEL_31;
    }
    v19 = v24;
    v20 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> *>(v24);
    if ( v20 >= 0 )
      v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 64LL))(v19, &v22);
    if ( v20 >= 0 )
    {
      if ( !(_DWORD)v22 )
      {
        wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v33);
        v5 = 0;
LABEL_33:
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        goto LABEL_35;
      }
      UniqueExtendedExecutionSession::CloseSession(this, 0);
      v5 = -2147418113;
      v17 = 2147549183LL;
      v18 = 139LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)v17);
      goto LABEL_33;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x643,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v20);
LABEL_39:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
    (const char *)(unsigned int)v14);
LABEL_35:
  if ( v13 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_37:
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v33);
  return (unsigned int)v5;
}
