/*
 * XREFs of ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800238D0
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x1800259A4 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DoLaunchBackgroundTask(
        struct CApplication *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  int v7; // r14d
  struct _RTL_CRITICAL_SECTION *v8; // r15
  int v9; // eax
  int v10; // ebx
  RPC_STATUS v11; // eax
  HANDLE CurrentThread; // rax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // ebx
  struct TSSession *v15; // rdi
  _QWORD *v16; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v18; // rax
  char *v20; // rbx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+70h] [rbp-90h] BYREF
  void *TokenHandle; // [rsp+78h] [rbp-88h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp-80h] BYREF
  struct TSSession *v25; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+A0h] [rbp-60h]
  _QWORD TokenInformation[12]; // [rsp+B0h] [rbp-50h] BYREF

  v27 = -2LL;
  v26 = a4;
  v22 = 0;
  v25 = 0LL;
  TokenHandle = 0LL;
  v7 = 0;
  ReturnLength = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v28 = v8;
  v9 = TsSessionFromSessionId(*((_DWORD *)a1 + 53), 0, 0LL, &v25);
  if ( v9 )
  {
    v10 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      v10 = v9;
  }
  else
  {
    v11 = RpcImpersonateClient(0LL);
    if ( !v11 || v11 == 1725 )
    {
      v7 = 1;
      CurrentThread = GetCurrentThread();
      v13 = NtOpenThreadToken(CurrentThread, 8u, 1u, &TokenHandle);
      if ( v13 >= 0 || (v10 = v13 | 0x10000000, v10 >= 0) )
      {
        v14 = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
        if ( v14 >= 0 || (v10 = v14 | 0x10000000, v10 >= 0) )
        {
          RpcRevertToSelf();
          v7 = 0;
          v15 = v25;
          v16 = (_QWORD *)((char *)v25 + 264);
          if ( *((_QWORD *)v25 + 33) || (v10 = CreateOnDemandBrokerClient(L"AudioSrv", (char *)v25 + 264), v10 >= 0) )
          {
            if ( !*((_QWORD *)v15 + 34) )
            {
              ProcessHeap = GetProcessHeap();
              v18 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
              if ( !v18 )
              {
                v10 = -2147024882;
                goto LABEL_20;
              }
              v18[3] = 0;
              v18[2] = 1;
              *(_QWORD *)v18 = &CBackgroundSessionCallbacks::`vftable'{for `CUnknown'};
              *((_QWORD *)v18 + 2) = &CBackgroundSessionCallbacks::`vftable'{for `IBackgroundSessionCallbacks'};
              v20 = (char *)(v18 + 4);
              v21 = *((_QWORD *)v15 + 34);
              if ( v21 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              *((_QWORD *)v15 + 34) = v20;
            }
            v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v16 + 24LL))(
                    *v16,
                    TokenInformation[0],
                    702LL,
                    *((_QWORD *)v15 + 34),
                    &v22);
            if ( v10 >= 0 )
              v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, const unsigned __int16 *, const unsigned __int16 *, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, struct _GUID *))(*(_QWORD *)*v16 + 56LL))(
                      *v16,
                      TokenInformation[0],
                      0LL,
                      v22,
                      a2,
                      a3,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      v26);
          }
        }
      }
    }
    else
    {
      v10 = (unsigned __int16)v11 | 0x80070000;
      if ( v11 <= 0 )
        v10 = v11;
    }
  }
LABEL_20:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v7 )
    RpcRevertToSelf();
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v10;
}
