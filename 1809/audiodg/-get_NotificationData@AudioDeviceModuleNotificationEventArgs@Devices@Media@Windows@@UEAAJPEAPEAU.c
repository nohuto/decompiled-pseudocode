/*
 * XREFs of ?get_NotificationData@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x14004EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x14004C1BC (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::get_NotificationData(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        struct Windows::Storage::Streams::IBuffer **a2)
{
  unsigned int v2; // edi
  struct Windows::Storage::Streams::IBuffer **v4; // rbx

  v2 = 0;
  if ( a2 )
  {
    v4 = (struct Windows::Storage::Streams::IBuffer **)((char *)this + 72);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef((__int64 *)this + 9);
    *a2 = *v4;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
