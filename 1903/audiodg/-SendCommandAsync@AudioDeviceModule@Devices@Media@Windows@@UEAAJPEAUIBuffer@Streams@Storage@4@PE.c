/*
 * XREFs of ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14004BC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001357C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@?$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x140043E58 (--$As@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation_ea_140043E58.c)
 *     ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x140044A5C (--$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModu.c)
 *     ?InternalRelease@?$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140049B10 (-InternalRelease@-$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@IEAA.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::SendCommandAsync(
        struct Windows::Media::Devices::AudioDeviceModule *a1,
        struct Windows::Storage::Streams::IBuffer *a2,
        __int64 *a3)
{
  int v4; // ebx
  __int64 v5; // rax
  Windows::Media::Devices::SendCommandAsyncOperation *v7; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Media::Devices::AudioDeviceModule *v8; // [rsp+28h] [rbp-8h] BYREF
  struct Windows::Storage::Streams::IBuffer *v9; // [rsp+48h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF

  v9 = a2;
  v7 = 0LL;
  v10 = 0LL;
  if ( a2 && a3 )
  {
    *a3 = 0LL;
    v8 = a1;
    Microsoft::WRL::ComPtr<Windows::Media::Devices::SendCommandAsyncOperation>::InternalRelease((__int64 *)&v7);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule *,Windows::Storage::Streams::IBuffer * &>(
           &v7,
           &v8,
           &v9);
    if ( v4 >= 0 )
    {
      v4 = Microsoft::WRL::ComPtr<Windows::Media::Devices::SendCommandAsyncOperation>::As<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>(
             (__int64)&v7,
             &v10);
      if ( v4 >= 0 )
      {
        v5 = v10;
        v10 = 0LL;
        *a3 = v5;
      }
    }
  }
  else
  {
    v4 = -2147467261;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<Windows::Media::Devices::SendCommandAsyncOperation>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v4;
}
