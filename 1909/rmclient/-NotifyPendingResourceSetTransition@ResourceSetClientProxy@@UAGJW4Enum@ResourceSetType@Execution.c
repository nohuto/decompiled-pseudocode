/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UAGJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x100148F0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __stdcall ResourceSetClientProxy::NotifyPendingResourceSetTransition(int a1, int a2)
{
  HANDLE CurrentProcess; // eax
  _DWORD v4[20]; // [esp+4h] [ebp-320h] BYREF
  CONTEXT ContextRecord; // [esp+54h] [ebp-2D0h] BYREF
  _UNKNOWN *retaddr; // [esp+328h] [ebp+4h]

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  memset(v4, 0, sizeof(v4));
  v4[3] = retaddr;
  v4[0] = -1073741637;
  v4[1] = 1;
  RtlReportException(v4, &ContextRecord, 8);
  CurrentProcess = GetCurrentProcess();
  NtTerminateProcess(CurrentProcess, -1073741637);
  return -2147467263;
}
