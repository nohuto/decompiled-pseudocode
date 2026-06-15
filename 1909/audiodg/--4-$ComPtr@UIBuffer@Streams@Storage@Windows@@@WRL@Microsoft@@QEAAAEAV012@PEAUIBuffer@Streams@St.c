/*
 * XREFs of ??4?$ComPtr@UIBuffer@Streams@Storage@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140045D28
 * Callers:
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x1400451B4 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ??0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x140045348 (--0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123.c)
 *     ??0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x140045430 (--0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@S.c)
 *     ?RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14004B7C0 (-RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceMod.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001368C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1400499F4 (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Storage::Streams::IBuffer>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return a1;
}
