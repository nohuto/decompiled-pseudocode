/*
 * XREFs of ?Apply@ResourceSetClientProxy@@UAGJK@Z @ 0x10014180
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0x1000D088 (__SEH_prolog4_GS.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

CLIENT_CALL_RETURN __stdcall ResourceSetClientProxy::Apply(ResourceSetClientProxy *this, unsigned int a2)
{
  HANDLE CurrentProcess; // eax
  CLIENT_CALL_RETURN result; // eax
  _DWORD v4[20]; // [esp+1Ch] [ebp-338h] BYREF
  CONTEXT ContextRecord; // [esp+6Ch] [ebp-2E8h] BYREF
  CPPEH_RECORD ms_exc; // [esp+33Ch] [ebp-18h]
  _UNKNOWN *retaddr; // [esp+358h] [ebp+4h]

  if ( a2 )
  {
    memset(&ContextRecord, 0, sizeof(ContextRecord));
    RtlCaptureContext(&ContextRecord);
    memset(v4, 0, sizeof(v4));
    v4[0] = -1073741637;
    v4[1] = 1;
    v4[3] = retaddr;
    RtlReportException(v4, &ContextRecord, 8);
    CurrentProcess = GetCurrentProcess();
    NtTerminateProcess(CurrentProcess, -1073741637);
    return (CLIENT_CALL_RETURN)-2147467259;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    result.Pointer = _NdrClientCall4(
                       &stru_100016E8,
                       &byte_100037B4,
                       *((_DWORD *)this + 2),
                       *((_DWORD *)this + 4),
                       *((_DWORD *)this + 5)).Pointer;
    ms_exc.registration.TryLevel = -2;
    if ( result.Simple >= 0 )
    {
      *((_DWORD *)this + 102) = 0;
      *((_DWORD *)this + 112) = 1;
    }
  }
  return result;
}
