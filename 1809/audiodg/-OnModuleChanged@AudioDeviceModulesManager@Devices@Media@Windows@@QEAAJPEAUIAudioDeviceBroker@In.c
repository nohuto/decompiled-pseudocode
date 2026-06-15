/*
 * XREFs of ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004C690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x140046030 (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140046240 (--$ActivateInstance@V-$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_f767560c0c974952e07d01e413afc9d2___ @ 0x140046B78 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Media--Devices--Aud.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140046C40 (--$GetActivationFactory@V-$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@.c)
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x1400470D0 (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140049944 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x140049C74 (-FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPE.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14004B974 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004D8E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14004D8E0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        struct Windows::Media::Devices::Internal::IAudioDeviceBroker *a2,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *a3)
{
  struct Windows::Media::Devices::IAudioDeviceModule *v5; // rbx
  int AllByIdAndInstance; // edi
  const unsigned __int16 *v7; // rdx
  LPVOID v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  struct Windows::Media::Devices::IAudioDeviceModule **v13; // rax
  struct Windows::Media::Devices::IAudioDeviceModule *v14; // rdi
  __int64 v15; // rcx
  unsigned int cb; // [rsp+28h] [rbp-69h] BYREF
  int cb_4; // [rsp+2Ch] [rbp-65h] BYREF
  struct Windows::Media::Devices::IAudioDeviceModule *v19; // [rsp+30h] [rbp-61h] BYREF
  __int64 v20; // [rsp+38h] [rbp-59h] BYREF
  __int64 v21; // [rsp+40h] [rbp-51h] BYREF
  struct Windows::Media::Devices::IAudioDeviceModule *v22; // [rsp+48h] [rbp-49h] BYREF
  void *v23; // [rsp+50h] [rbp-41h] BYREF
  __int64 v24; // [rsp+58h] [rbp-39h] BYREF
  __int64 v25; // [rsp+60h] [rbp-31h] BYREF
  __int64 v26[2]; // [rsp+68h] [rbp-29h] BYREF
  __int128 v27; // [rsp+78h] [rbp-19h] BYREF
  HSTRING v28[2]; // [rsp+88h] [rbp-9h] BYREF
  HSTRING_HEADER string; // [rsp+98h] [rbp+7h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+1Fh]

  v28[1] = (HSTRING)-2LL;
  v26[0] = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  cb_4 = 0;
  v5 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  AllByIdAndInstance = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *, __int64 *))(*(_QWORD *)a3 + 48LL))(
                         a3,
                         &v21);
  if ( AllByIdAndInstance >= 0 )
  {
    AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 56LL))(v21, &cb);
    if ( AllByIdAndInstance >= 0 && cb >= 0x28 )
    {
      v8 = CoTaskMemAlloc(cb);
      if ( !v8 )
      {
        AllByIdAndInstance = -2147024882;
        goto LABEL_26;
      }
      v9 = (__int64 *)Windows::Internal::StringReference::StringReference(
                        (HSTRING *)&string,
                        (const unsigned __int16 (*)[35])v7);
      AllByIdAndInstance = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataReaderStatics>>(
                             *v9,
                             v26);
      if ( AllByIdAndInstance < 0 )
        goto LABEL_25;
      v10 = v26[0];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 48LL))(
                             v10,
                             v21,
                             &v25);
      if ( AllByIdAndInstance < 0 )
        goto LABEL_25;
      AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID))(*(_QWORD *)v25 + 112LL))(v25, cb, v8);
      if ( AllByIdAndInstance < 0 )
        goto LABEL_25;
      *(_OWORD *)&string.Reserved.Reserved1 = *((_OWORD *)v8 + 1);
      AllByIdAndInstance = GuidToHString((struct _GUID *)&string, v28);
      if ( AllByIdAndInstance < 0 )
        goto LABEL_25;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      AllByIdAndInstance = Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
                             (__int64)this,
                             v28[0],
                             *((_DWORD *)v8 + 8),
                             (__int64)&v20);
      if ( AllByIdAndInstance < 0 )
        goto LABEL_25;
      AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &cb_4);
      if ( AllByIdAndInstance < 0 )
        goto LABEL_25;
      if ( cb_4 == 1 )
      {
        v11 = v20;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Media::Devices::IAudioDeviceModule **))(*(_QWORD *)v11 + 48LL))(
                               v11,
                               0LL,
                               &v19);
        if ( AllByIdAndInstance < 0 )
          goto LABEL_25;
        if ( v19 )
        {
          v30 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &string,
            L"Windows.Storage.Streams.DataWriter",
            0x23u,
            0x22u);
          AllByIdAndInstance = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataWriter>>(
                                 v30,
                                 &v24);
          if ( AllByIdAndInstance >= 0 )
          {
            if ( !v24
              || (AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v24 + 96LL))(
                                         v24,
                                         cb - 40,
                                         (__int64)v8 + 40),
                  AllByIdAndInstance >= 0)
              && (v12 = v24,
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23),
                  AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 248LL))(v12, &v23),
                  AllByIdAndInstance >= 0) )
            {
              string.Reserved.Reserved1 = v23;
              v22 = v19;
              v13 = (struct Windows::Media::Devices::IAudioDeviceModule **)Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,Windows::Media::Devices::IAudioDeviceModule *,Windows::Storage::Streams::IBuffer *>(
                                                                             (__int64 *)&v27,
                                                                             &v22,
                                                                             (struct Windows::Storage::Streams::IBuffer **)&string);
              v14 = 0LL;
              v5 = 0LL;
              if ( &v22 != v13 )
              {
                v5 = *v13;
                v14 = *v13;
                *v13 = 0LL;
              }
              v15 = v27;
              if ( (_QWORD)v27 )
              {
                *(_QWORD *)&v27 = 0LL;
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(v15);
              }
              string.Reserved.Reserved1 = v14;
              v22 = this;
              *(_QWORD *)&v27 = &v22;
              *((_QWORD *)&v27 + 1) = &string;
              AllByIdAndInstance = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_f767560c0c974952e07d01e413afc9d2___(
                                     (RTL_SRWLOCK *)this + 9,
                                     &v27);
            }
          }
          goto LABEL_25;
        }
      }
      AllByIdAndInstance = -2147467259;
LABEL_25:
      CoTaskMemFree(v8);
    }
  }
LABEL_26:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(v5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
  return (unsigned int)AllByIdAndInstance;
}
