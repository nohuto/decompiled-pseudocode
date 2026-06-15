/*
 * XREFs of ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x14004A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001357C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VModuleCommandResult@Devices@Media@Windows@@@12@$$QEAW4SendCommandStatus@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x140044944 (--$Make@VModuleCommandResult@Devices@Media@Windows@@W4SendCommandStatus@234@PEAUIBuffer@Streams@.c)
 *     ??4?$ComPtr@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x140045D80 (--4-$ComPtr@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAU.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x140047920 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::OnStart(
        Windows::Media::Devices::SendCommandAsyncOperation *this)
{
  __int64 v2; // rbx
  int v3; // esi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  v9[1] = -2LL;
  v11 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Media::Devices::Internal::IAudioDeviceBroker>::operator=(
    &v12,
    *(_QWORD *)(*((_QWORD *)this + 21) + 96LL));
  v2 = v12;
  if ( v12 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v2 + 56LL))(
           v2,
           *((_QWORD *)this + 21),
           *((_QWORD *)this + 22),
           &v11);
    if ( v3 >= 0 )
    {
      v9[0] = v11;
      v10 = 0;
      v4 = Microsoft::WRL::Details::Make<Windows::Media::Devices::ModuleCommandResult,enum Windows::Media::Devices::SendCommandStatus,Windows::Storage::Streams::IBuffer *>(
             &v13,
             &v10,
             v9);
      v5 = *v4;
      *v4 = 0LL;
      v6 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v5;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v7 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v3 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion((__int64)this);
    }
  }
  else
  {
    v3 = -2147467261;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return (unsigned int)v3;
}
