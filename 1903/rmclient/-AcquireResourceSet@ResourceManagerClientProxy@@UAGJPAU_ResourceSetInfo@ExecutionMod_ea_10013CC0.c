/*
 * XREFs of ?AcquireResourceSet@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PBU_GUID@@PA_NPAUIResourceSet@3@PAPAU63@@Z @ 0x10013CC0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __stdcall ResourceManagerClientProxy::AcquireResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        const struct _GUID *a4,
        bool *a5,
        struct ExecutionModel::IResourceSet *a6,
        struct ExecutionModel::IResourceSet **a7)
{
  HANDLE CurrentProcess; // eax
  _DWORD v9[20]; // [esp+4h] [ebp-320h] BYREF
  CONTEXT ContextRecord; // [esp+54h] [ebp-2D0h] BYREF
  _UNKNOWN *retaddr; // [esp+328h] [ebp+4h]

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  memset(v9, 0, sizeof(v9));
  v9[3] = retaddr;
  v9[0] = -1073741637;
  v9[1] = 1;
  RtlReportException(v9, &ContextRecord, 8);
  CurrentProcess = GetCurrentProcess();
  NtTerminateProcess(CurrentProcess, -1073741637);
  return -2147467259;
}
