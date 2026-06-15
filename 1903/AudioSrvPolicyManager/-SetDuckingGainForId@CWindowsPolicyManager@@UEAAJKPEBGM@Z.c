/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x1800061A0
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180009080 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D724 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        float a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v7; // ecx
  HANDLE ProcessHeap; // rax
  unsigned __int16 **v9; // rax
  unsigned __int16 **v10; // rbx
  signed int v11; // edi
  LPVOID *v12; // rsi
  unsigned __int16 **v13; // rbp
  LPVOID *v14; // rbx
  __int64 v15; // rdx
  HANDLE v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  HANDLE v19; // rcx
  signed int LastError; // eax
  struct TSSession *v22; // [rsp+20h] [rbp-38h] BYREF
  LPVOID *v23; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v22) )
  {
    if ( a4 <= -6.0 )
    {
      if ( a4 <= -18.0 )
      {
        v7 = 0;
        LOBYTE(v7) = a4 > -96.0;
      }
      else
      {
        v7 = 2;
      }
    }
    else
    {
      v7 = 3;
    }
    *((_DWORD *)v22 + 80) = v7;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  ProcessHeap = GetProcessHeap();
  v9 = (unsigned __int16 **)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 0LL;
    *((float *)v9 + 3) = a4;
    *((_DWORD *)v9 + 2) = a2;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
    v11 = CoAllocString(a3, v10);
  v12 = 0LL;
  v13 = v10;
  if ( v11 < 0 )
  {
    v12 = (LPVOID *)v10;
    v13 = 0LL;
  }
  if ( v12 )
  {
    CoTaskMemFree(*v12);
    *v12 = 0LL;
    operator delete(v12, (const struct std::nothrow_t *)0x10);
  }
  v14 = (LPVOID *)v13;
  v23 = (LPVOID *)v13;
  if ( v11 < 0 )
  {
    v15 = 416LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_39;
  }
  v16 = GetProcessHeap();
  v17 = HeapAlloc(v16, 0, 0x18uLL);
  v18 = v17;
  if ( v17 )
  {
    *v17 = &CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)g_ApplicationManager + 2);
    v14 = v23;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v19 = g_WorkerEventPort;
    v18[1] = CApplicationManager::HandleDuckingIdGainChanged;
    v18[2] = v13;
    if ( PostQueuedCompletionStatus(v19, 0, (ULONG_PTR)v18, 0LL) )
    {
      v11 = 0;
    }
    else
    {
      LastError = GetLastError();
      v11 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v11 = LastError;
    }
    if ( v11 >= 0 )
      v18 = 0LL;
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v18 + 8LL))(v18, 1LL);
  if ( v11 < 0 )
  {
    v15 = 418LL;
    goto LABEL_37;
  }
  v14 = 0LL;
  v11 = 0;
LABEL_39:
  if ( v14 )
  {
    CoTaskMemFree(*v14);
    *v14 = 0LL;
    operator delete(v14, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v11;
}
