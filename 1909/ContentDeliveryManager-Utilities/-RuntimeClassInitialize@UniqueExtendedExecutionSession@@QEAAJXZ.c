/*
 * XREFs of ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18007DCCC
 * Callers:
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18007E440 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x18007D620 (--1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18007D77C (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18007E1E8 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007EDF8 (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18007F978 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@Applicati.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UniqueExtendedExecutionSession::RuntimeClassInitialize(UniqueExtendedExecutionSession *this)
{
  HRESULT v2; // eax
  __int64 **v3; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 *v9; // rbx
  __int64 (__fastcall *v10)(__int64 *, HSTRING); // rsi
  HRESULT v11; // eax
  _DWORD *v12; // rbx
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v24; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v26; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+40h] [rbp-C8h]
  _BYTE v28[24]; // [rsp+50h] [rbp-B8h]
  __int64 v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-90h] BYREF
  HSTRING string; // [rsp+90h] [rbp-78h] BYREF
  HSTRING_HEADER v33; // [rsp+98h] [rbp-70h] BYREF
  HSTRING v34; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v35[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v36; // [rsp+D8h] [rbp-30h]
  int *v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h] BYREF
  char v40; // [rsp+F4h] [rbp-14h]
  int v41; // [rsp+118h] [rbp+10h] BYREF
  const char *v42; // [rsp+120h] [rbp+18h]
  __int64 v43; // [rsp+128h] [rbp+20h]
  char v44; // [rsp+130h] [rbp+28h]
  __int64 v45; // [rsp+138h] [rbp+30h]
  _BYTE v46[144]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v47; // [rsp+1D0h] [rbp+C8h]
  __int64 v48; // [rsp+1D8h] [rbp+D0h]
  __int64 v49; // [rsp+1E0h] [rbp+D8h]
  __int64 v50; // [rsp+1E8h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v29 = -2LL;
  v35[1] = 0LL;
  v35[2] = v35;
  v35[3] = 0LL;
  v36 = 0;
  v37 = &v41;
  v38 = &v39;
  v39 = 0;
  v40 = 0;
  v44 = 0;
  v41 = 0;
  v42 = "ExtendedExecutionRequested";
  v43 = 0LL;
  v45 = 1LL;
  v47 = 0LL;
  memset_0(v46, 0, sizeof(v46));
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v35[0] = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v35);
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession",
         0x43u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
    goto LABEL_39;
  v3 = (__int64 **)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *v3 = 0LL;
  v5 = RoActivateInstance(string, &v26);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)&GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v3 = v26;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))*v26)(
             v26,
             &GUID_af908a2d_118b_48f1_9308_0c4fc41e200f,
             (char *)this + 64);
      (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
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
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v3 + 56))(*v3, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 127LL;
LABEL_16:
    v6 = (unsigned int)v8;
    goto LABEL_17;
  }
  v9 = *v3;
  v10 = *(__int64 (__fastcall **)(__int64 *, HSTRING))(**v3 + 72);
  v34 = 0LL;
  v11 = WindowsCreateStringReference(L"UnlockActionHelper", 0x12u, &v33, &v34);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    JUMPOUT(0x18007E0EBLL);
  }
  v8 = v10(v9, v34);
  v5 = v8;
  v34 = 0LL;
  if ( v8 < 0 )
  {
    v7 = 128LL;
    goto LABEL_16;
  }
  *(_QWORD *)&v27 = UniqueExtendedExecutionSession::OnSessionRevoked;
  DWORD2(v27) = 0;
  *(_QWORD *)v28 = this;
  *(_OWORD *)&v28[8] = v27;
  v12 = 0LL;
  v30 = 0LL;
  v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = 0LL;
  if ( v13 )
  {
    *(_QWORD *)v13 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    v13[3] = 1;
    *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *((_OWORD *)v13 + 1) = *(_OWORD *)v28;
    *((_QWORD *)v13 + 4) = *(_QWORD *)&v28[16];
    *(_QWORD *)v13 = off_1800E4B98;
    v14 = v13;
    v12 = v13;
  }
  *(_QWORD *)&v27 = v12;
  v15 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(**v3 + 96))(*v3, v14, (char *)this + 72);
  v5 = v15;
  if ( v15 >= 0 )
  {
    v24 = 0LL;
    v16 = *v3;
    v17 = **v3;
    v24 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 112))(v16, &v24);
    v5 = v18;
    if ( v18 < 0 )
    {
      v19 = (unsigned int)v18;
      v20 = 134LL;
      goto LABEL_31;
    }
    v21 = v24;
    v22 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> *>(v24);
    if ( v22 >= 0 )
      v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 64LL))(v21, &v25);
    if ( v22 >= 0 )
    {
      if ( !(_DWORD)v25 )
      {
        wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v35);
        v5 = 0;
LABEL_33:
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        goto LABEL_35;
      }
      UniqueExtendedExecutionSession::CloseSession(this, 0);
      v5 = -2147418113;
      v19 = 2147549183LL;
      v20 = 139LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)v19);
      goto LABEL_33;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x633,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v22);
LABEL_39:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
    (const char *)(unsigned int)v15);
LABEL_35:
  if ( v14 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_37:
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v35);
  return (unsigned int)v5;
}
