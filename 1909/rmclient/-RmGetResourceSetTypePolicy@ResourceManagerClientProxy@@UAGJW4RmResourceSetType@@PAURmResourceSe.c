/*
 * XREFs of ?RmGetResourceSetTypePolicy@ResourceManagerClientProxy@@UAGJW4RmResourceSetType@@PAURmResourceSetInfo@@@Z @ 0x100143D0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __stdcall ResourceManagerClientProxy::RmGetResourceSetTypePolicy(int a1, int a2, int a3)
{
  HANDLE CurrentProcess; // eax
  _DWORD v5[20]; // [esp+4h] [ebp-320h] BYREF
  CONTEXT ContextRecord; // [esp+54h] [ebp-2D0h] BYREF
  _UNKNOWN *retaddr; // [esp+328h] [ebp+4h]

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  memset(v5, 0, sizeof(v5));
  v5[3] = retaddr;
  v5[0] = -1073741637;
  v5[1] = 1;
  RtlReportException(v5, &ContextRecord, 8);
  CurrentProcess = GetCurrentProcess();
  NtTerminateProcess(CurrentProcess, -1073741637);
  return -2147467259;
}
