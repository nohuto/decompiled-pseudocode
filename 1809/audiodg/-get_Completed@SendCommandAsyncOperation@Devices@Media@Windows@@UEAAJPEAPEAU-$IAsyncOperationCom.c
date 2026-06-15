/*
 * XREFs of ?get_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14004ECB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::get_Completed(__int64 a1, _QWORD *a2)
{
  return Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
           a1 + 16,
           a2);
}
