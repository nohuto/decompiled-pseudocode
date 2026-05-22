/*
 * XREFs of ?InitializeWaitHandle@AlpcPort@@AEAAJXZ @ 0x1800A1288
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18009FD40 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 */

__int64 __fastcall AlpcPort::InitializeWaitHandle(AlpcPort *this)
{
  HANDLE *v1; // rsi
  char *v3; // rdi
  DWORD LastError; // ebx
  void *v5; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  __int64 v8; // rdx
  wil::details::in1diag0 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v1 = (HANDLE *)((char *)this + 16);
  v3 = (char *)*((_QWORD *)this + 2);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v3);
    SetLastError(LastError);
  }
  *v1 = 0LL;
  v5 = (void *)*((_QWORD *)this + 1);
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, v5, CurrentProcess, v1, 0x100000u, 0, 0) )
    return 0LL;
  else
    return wil::details::in1diag0::Return_GetLastError(v9, v8, v10, v11);
}
