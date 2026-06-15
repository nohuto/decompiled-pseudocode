/*
 * XREFs of ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1800159D4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_def7c7ce47039446187daa2faf99ada6___::Run @ 0x1800685C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_def7c7ce47039446187daa2faf99ada6___--Run.c)
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180013A30 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18002D194 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x1800549F8 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _lambda_d16d110d62607e9e7a123dfd70e3b2fb_::_lambda_d16d110d62607e9e7a123dfd70e3b2fb_ @ 0x18006532C (_lambda_d16d110d62607e9e7a123dfd70e3b2fb_--_lambda_d16d110d62607e9e7a123dfd70e3b2fb_.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3a6a9ae2d1ede84324f1e385780d9b63___ @ 0x1800675A8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--Pack.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_d16d110d62607e9e7a123dfd70e3b2fb___ @ 0x180067600 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_180067600.c)
 *     ??1?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180067AB8 (--1-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BBCA8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AtmosCheck::RegisterAppDeploymentNotifications(AtmosCheck *this)
{
  HSTRING v2; // rbx
  AtmosCheck *v3; // rcx
  int ActivationFactory; // ebx
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  AtmosCheck *v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-20h] BYREF

  v17 = -2LL;
  v13 = 0LL;
  v12 = this;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef(&v12);
  if ( WindowsCreateStringReference(L"Windows.ApplicationModel.PackageCatalog", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_5cc754cf_f82f_471b_ba04_1783588b7144, &v13);
  if ( ActivationFactory >= 0 )
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 32, v15);
    v5 = v13;
    v6 = (_QWORD *)((char *)this + 24);
    v7 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 48LL))(v5, (char *)this + 24);
    if ( ActivationFactory >= 0 )
    {
      v8 = lambda_d16d110d62607e9e7a123dfd70e3b2fb_::_lambda_d16d110d62607e9e7a123dfd70e3b2fb_(&v11, &v12);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageInstallingEventArgs_____ptr64___lambda_3a6a9ae2d1ede84324f1e385780d9b63___(
        &v14,
        v8);
      Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::~ComPtr<IDeviceGraphObjectsStore>(&v11);
      v9 = lambda_d16d110d62607e9e7a123dfd70e3b2fb_::_lambda_d16d110d62607e9e7a123dfd70e3b2fb_(v16, &v12);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_d16d110d62607e9e7a123dfd70e3b2fb___(
        &v11,
        v9);
      Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::~ComPtr<IDeviceGraphObjectsStore>(v16);
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v6 + 64LL))(
                            *v6,
                            v14,
                            (char *)this + 120);
      if ( ActivationFactory >= 0 )
      {
        ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v6 + 96LL))(
                              *v6,
                              v11,
                              (char *)this + 128);
        Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v11);
        Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v14);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)v15);
        goto LABEL_11;
      }
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v11);
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v14);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)v15);
  }
LABEL_11:
  AtmosCheck::Trace(v3, "RegAppDepNotification result", ActivationFactory);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
  return (unsigned int)ActivationFactory;
}
