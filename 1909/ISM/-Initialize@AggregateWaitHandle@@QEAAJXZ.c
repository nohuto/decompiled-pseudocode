/*
 * XREFs of ?Initialize@AggregateWaitHandle@@QEAAJXZ @ 0x18002A4AC
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18001642C (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 * Callees:
 *     <none>
 */

signed int __fastcall AggregateWaitHandle::Initialize(HANDLE *this)
{
  HANDLE IoCompletionPort; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v4; // rax
  signed int result; // eax
  signed int LastError; // eax
  unsigned int v7; // ebx

  IoCompletionPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  *this = IoCompletionPort;
  if ( IoCompletionPort )
  {
    CurrentProcess = GetCurrentProcess();
    v4 = GetCurrentProcess();
    if ( DuplicateHandle(v4, *this, CurrentProcess, this + 1, 0x100000u, 0, 0) )
    {
      SetHandleInformation(this[1], 2u, 2u);
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      CloseHandle(*this);
      *this = 0LL;
      return v7;
    }
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
