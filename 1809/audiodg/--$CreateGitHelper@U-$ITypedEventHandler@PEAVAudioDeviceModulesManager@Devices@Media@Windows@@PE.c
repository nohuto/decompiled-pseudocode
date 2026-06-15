/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@2@PEAPEAU342@@Z @ 0x140046464
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x14004EBE0 (-add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU-$ITyp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140019FB0 (-InternalRelease@-$ComPtr@V-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqual.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x14004768C (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  void *v4; // rax
  __int64 *v5; // rdi
  void *v6; // rbx
  signed int AgileReference; // ebx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x38uLL);
    v5 = (__int64 *)Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>,2>(v6);
  }
  AgileReference = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v8 = v5 + 6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(v5 + 6);
    AgileReference = 0;
    if ( a1 )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v11);
      AgileReference = RoGetAgileReference(0LL, &GUID_b2f6b1fd_7092_5724_b2ce_91b1176e80e1, a1, &v11);
      if ( AgileReference >= 0 )
      {
        v9 = *v8;
        *v8 = v11;
        v11 = v9;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&v11);
    }
    if ( AgileReference >= 0 )
      AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
                         v5,
                         &GUID_b2f6b1fd_7092_5724_b2ce_91b1176e80e1,
                         a2);
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  }
  return (unsigned int)AgileReference;
}
