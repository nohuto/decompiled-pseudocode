/*
 * XREFs of ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UAGJW4Enum@ResourceSetType@ExecutionModel@@PAUIResourceSetCallback@4@PAXPBG2KK_KKPA_NPAUIResourceSet@4@PAPAU64@@Z @ 0x10013DB0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __stdcall ResourceManagerClientProxy::AcquireResourceSetFromSponsorProcess(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  HANDLE CurrentProcess; // eax
  _DWORD v16[20]; // [esp+4h] [ebp-320h] BYREF
  CONTEXT ContextRecord; // [esp+54h] [ebp-2D0h] BYREF
  _UNKNOWN *retaddr; // [esp+328h] [ebp+4h]

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  RtlCaptureContext(&ContextRecord);
  memset(v16, 0, sizeof(v16));
  v16[3] = retaddr;
  v16[0] = -1073741637;
  v16[1] = 1;
  RtlReportException(v16, &ContextRecord, 8);
  CurrentProcess = GetCurrentProcess();
  NtTerminateProcess(CurrentProcess, -1073741637);
  return -2147467259;
}
