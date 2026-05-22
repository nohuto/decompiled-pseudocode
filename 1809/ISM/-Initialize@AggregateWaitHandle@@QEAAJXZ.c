/*
 * XREFs of ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x18009F8D0
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAPEAU4@@Z @ 0x1800A1B14 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NP6AXPEAXPEAUISIPCServer@@KK@Z33PEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AggregateWaitHandle::Initialize(HANDLE *this)
{
  HANDLE IoCompletionPort; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v4; // rax
  __int64 result; // rax
  signed int LastError; // ebx
  signed int v7; // ecx

  IoCompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  *this = IoCompletionPort;
  if ( IoCompletionPort )
  {
    CurrentProcess = GetCurrentProcess();
    v4 = GetCurrentProcess();
    if ( DuplicateHandle(v4, *this, CurrentProcess, this + 1, 0x100000u, 0, 0) )
    {
      SetHandleInformation(this[1], 2u, 2u);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      CloseHandle(*this);
      *this = 0LL;
      result = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        return (unsigned int)LastError;
    }
  }
  else
  {
    v7 = GetLastError();
    result = (unsigned __int16)v7 | 0x80070000;
    if ( v7 <= 0 )
      return (unsigned int)v7;
  }
  return result;
}
