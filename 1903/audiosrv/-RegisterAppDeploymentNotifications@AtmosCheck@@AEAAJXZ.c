/*
 * XREFs of ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1800510D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___::Run @ 0x18004FB90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a465a537957875493a7f1285b2ffbd___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180004FE0 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180051388 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180062A8C (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_54bc6dde1f28aafe8f150296654e3c03___ @ 0x180069864 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--Pack.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_07ea8ee8549f00f16399909de546051c___ @ 0x1800698BC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_1800698BC.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_a70780d56f8e66bb41551630c0bd5b4d___ @ 0x180069914 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_180069914.c)
 *     _lambda_a70780d56f8e66bb41551630c0bd5b4d_::_lambda_a70780d56f8e66bb41551630c0bd5b4d_ @ 0x180069DDC (_lambda_a70780d56f8e66bb41551630c0bd5b4d_--_lambda_a70780d56f8e66bb41551630c0bd5b4d_.c)
 *     ??1?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ @ 0x180069FD8 (--1-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AtmosCheck::RegisterAppDeploymentNotifications(AtmosCheck *this)
{
  HSTRING v2; // rbx
  AtmosCheck *v3; // rcx
  int ActivationFactory; // r15d
  struct _RTL_CRITICAL_SECTION *v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  AtmosCheck *v13; // rdi
  __int64 v14; // rax
  char *v15; // r8
  AtmosCheck *v16; // rsi
  AtmosCheck *v18; // [rsp+28h] [rbp-39h] BYREF
  AtmosCheck *v19; // [rsp+30h] [rbp-31h] BYREF
  __int64 v20; // [rsp+38h] [rbp-29h] BYREF
  AtmosCheck *v21; // [rsp+40h] [rbp-21h] BYREF
  char v22[8]; // [rsp+48h] [rbp-19h] BYREF
  char v23[8]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-9h] BYREF
  HSTRING string; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF

  v24[1] = -2LL;
  v20 = 0LL;
  v19 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v19);
  if ( WindowsCreateStringReference(L"Windows.ApplicationModel.PackageCatalog", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_5cc754cf_f82f_471b_ba04_1783588b7144, &v20);
  if ( ActivationFactory >= 0 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v24[2] = (char *)this + 56;
    v6 = v20;
    v7 = (_QWORD *)((char *)this + 48);
    v8 = *((_QWORD *)this + 6);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 48);
    if ( ActivationFactory < 0 )
      goto LABEL_23;
    v18 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v18);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_54bc6dde1f28aafe8f150296654e3c03___(
      v24,
      &v18);
    Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>(&v18);
    v9 = lambda_a70780d56f8e66bb41551630c0bd5b4d_::_lambda_a70780d56f8e66bb41551630c0bd5b4d_(v22, &v19);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_07ea8ee8549f00f16399909de546051c___(
      &v21,
      v9);
    Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>(v22);
    v10 = lambda_a70780d56f8e66bb41551630c0bd5b4d_::_lambda_a70780d56f8e66bb41551630c0bd5b4d_(v23, &v19);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_a70780d56f8e66bb41551630c0bd5b4d___(
      &v18,
      v10);
    Microsoft::WRL::ComPtr<AtmosCheck>::~ComPtr<AtmosCheck>(v23);
    v11 = v24[0];
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v7 + 64LL))(
                          *v7,
                          v24[0],
                          (char *)this + 144);
    if ( ActivationFactory < 0 )
    {
      if ( v18 )
        (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)v18 + 16LL))(v18);
      v3 = v21;
      if ( !v21 )
        goto LABEL_21;
      v12 = *(_QWORD *)v21;
      goto LABEL_20;
    }
    v13 = v21;
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, AtmosCheck *, char *))(*(_QWORD *)*v7 + 96LL))(
                          *v7,
                          v21,
                          (char *)this + 152);
    if ( ActivationFactory >= 0 )
    {
      v15 = (char *)this + 160;
      v16 = v18;
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, AtmosCheck *, char *))(*(_QWORD *)*v7 + 80LL))(
                            *v7,
                            v18,
                            v15);
      if ( v16 )
      {
        v14 = *(_QWORD *)v16;
        goto LABEL_17;
      }
    }
    else
    {
      v3 = v18;
      if ( v18 )
      {
        v14 = *(_QWORD *)v18;
LABEL_17:
        (*(void (**)(void))(v14 + 16))();
      }
    }
    if ( !v13 )
      goto LABEL_21;
    v12 = *(_QWORD *)v13;
LABEL_20:
    (*(void (**)(void))(v12 + 16))();
LABEL_21:
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_23:
    if ( v5 )
      LeaveCriticalSection(v5);
  }
  AtmosCheck::Trace(v3, "RegAppDepNotification result", ActivationFactory);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  return (unsigned int)ActivationFactory;
}
