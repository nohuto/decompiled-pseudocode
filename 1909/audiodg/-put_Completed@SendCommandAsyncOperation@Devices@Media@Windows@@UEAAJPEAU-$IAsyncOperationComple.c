/*
 * XREFs of ?put_Completed@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14004C840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::put_Completed(__int64 a1, __int64 a2)
{
  return Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
           a1 + 16,
           a2);
}
