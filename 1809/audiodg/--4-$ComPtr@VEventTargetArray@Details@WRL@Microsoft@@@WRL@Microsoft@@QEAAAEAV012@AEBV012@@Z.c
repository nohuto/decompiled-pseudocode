/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1400484DC
 * Callers:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_d65a1343ddfc987a61a87e0c3596fa56___ @ 0x140046AB0 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Media--Devices--Int.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_f767560c0c974952e07d01e413afc9d2___ @ 0x140046B78 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Media--Devices--Aud.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001AFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioHistoryControl@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1400338A8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioH.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // rcx

  v2 = *a2;
  v4 = *a1;
  if ( v4 != *a2 )
  {
    if ( v2 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICPAudioHistoryControl>::InternalAddRef(
        *a2,
        (volatile int *)a2);
      v4 = *a1;
    }
    *a1 = v2;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  return a1;
}
