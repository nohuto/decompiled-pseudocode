/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180003B18
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_processLocalData__ @ 0x180037D60 (wil--details--_dynamic_atexit_destructor_for__g_processLocalData__.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002D38 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002D68 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180003CC4 (--_G-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  void *v2; // rbx
  DWORD v3; // eax
  void *v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  void *v8; // rsi
  DWORD LastError; // ebp
  BOOL v10; // eax
  __int64 v11; // r8
  const char *v12; // r9
  wil::details::in1diag3 *v13; // rcx
  void *v14; // rsi
  DWORD v15; // ebp
  __int64 v16; // r8
  const char *v17; // r9
  DWORD v18; // esi
  __int64 v19; // r8
  const char *v20; // r9
  int v21; // eax
  HANDLE ProcessHeap; // rax
  __int64 v23; // r8
  const char *v24; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (void *)lpMem[1];
  v3 = WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
  if ( v3 != 258 )
  {
    if ( !v3 )
      goto LABEL_6;
    if ( v3 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, v4, v5, v6);
      goto LABEL_26;
    }
  }
  if ( (v3 & 0xFFFFFF7F) != 0 )
    v2 = 0LL;
LABEL_6:
  if ( (*(_DWORD *)lpMem)-- != 1 )
    goto LABEL_21;
  v8 = (void *)lpMem[2];
  if ( v8 )
  {
    LastError = GetLastError();
    v10 = CloseHandle(v8);
    v13 = retaddr;
    if ( v10 )
    {
      SetLastError(LastError);
      goto LABEL_10;
    }
LABEL_26:
    wil::details::in1diag3::_FailFast_GetLastError(v13, (void *)0x8F0, v11, v12);
    __debugbreak();
  }
LABEL_10:
  lpMem[2] = 0LL;
  v14 = (void *)lpMem[3];
  if ( v14 )
  {
    v15 = GetLastError();
    if ( !CloseHandle(v14) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v16, v17);
      __debugbreak();
    }
    SetLastError(v15);
  }
  lpMem[3] = 0LL;
  if ( v2 )
  {
    v18 = GetLastError();
    if ( !ReleaseMutex(v2) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8FA, v19, v20);
      JUMPOUT(0x180003CBBLL);
    }
    SetLastError(v18);
  }
  v2 = 0LL;
  if ( !wil::details::g_processShutdownInProgress )
  {
    v21 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v21 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v21 )
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::`scalar deleting destructor'(lpMem);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
LABEL_21:
  if ( v2 )
  {
    if ( !ReleaseMutex(v2) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8FA, v23, v24);
      __debugbreak();
    }
  }
}
