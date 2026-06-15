/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x140046E90
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_f767560c0c974952e07d01e413afc9d2___ @ 0x140046B78 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Media--Devices--Aud.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D7F4 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x14004851C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14004DA84 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _QWORD *i; // rsi
  unsigned int v9; // eax
  int MatchingRestrictedErrorInfo; // ebx
  unsigned int v11; // eax
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v13[2] = -2LL;
  v5 = 0;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v13);
  v6 = v13[0];
  v7 = *(_QWORD **)(v13[0] + 32LL);
  for ( i = *(_QWORD **)(v13[0] + 16LL); i != *(_QWORD **)(v6 + 24); ++i )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    v5 = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 || v9 == -2147418105 || v9 == -2147418094 )
    {
      RoTransformError(v9, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v13[1] = *v7;
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        v11 = 0;
        if ( MatchingRestrictedErrorInfo < 0 )
          v11 = v5;
        v5 = v11;
        v6 = v13[0];
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
      v5 = 0;
    }
    ++v7;
  }
  if ( !(unsigned int)ATL::SafeDecrementReferenceMultiThread((int *)(v6 + 12)) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v5;
}
