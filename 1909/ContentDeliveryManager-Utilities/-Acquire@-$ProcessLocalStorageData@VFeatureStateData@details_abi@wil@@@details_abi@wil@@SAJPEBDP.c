/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180013708
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180008C78 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800022A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800036FC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000372C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x1800038B8 (-CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180003B64 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180008260 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  wil::details *v6; // rcx
  void *v7; // rdi
  int v8; // esi
  DWORD v10; // eax
  __int64 v11; // rdx
  char *v12; // r9
  void *v13; // r14
  _DWORD *v14; // rbx
  unsigned __int64 v15; // r12
  int ValueInternal; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // r8
  const char *v21; // r9
  HANDLE ProcessHeap; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  int v25; // eax
  __int64 v26; // r8
  const char *v27; // r9
  __int64 v28; // r8
  const char *v29; // r9
  HANDLE v30; // rax
  HANDLE v31; // rax
  unsigned __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE hObject[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-B8h]
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 304, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v7 = Mutex;
  if ( !Mutex )
    return (unsigned int)wil::details::GetLastErrorFailHr(v6);
  v10 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v10 != 258 )
  {
    if ( !v10 )
      goto LABEL_9;
    if ( v10 != 128 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB16,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
        v12);
      __debugbreak();
    }
  }
  if ( (v10 & 0xFFFFFF7F) != 0 )
  {
    v13 = 0LL;
    goto LABEL_10;
  }
LABEL_9:
  v13 = v7;
LABEL_10:
  v14 = 0LL;
  v32 = 0LL;
  v15 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal((char *)Name, v11, &v32, (bool *)v12);
  v8 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v15 = v32;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x59, (__int64)"wil", (const char *)(unsigned int)ValueInternal);
  }
  if ( v8 >= 0 )
  {
    v14 = (_DWORD *)(4 * v15);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x62, (__int64)"wil", (const char *)(unsigned int)v8);
  }
  if ( v8 >= 0 )
  {
    if ( v14 )
    {
      *a2 = v14;
      *(_DWORD *)*a2 = *v14 + 1;
LABEL_20:
      v8 = 0;
      goto LABEL_21;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v23 = HeapAlloc(ProcessHeap, 8u, 0x130uLL);
    v34 = v23;
    v24 = v23;
    if ( v23 )
    {
      *(_OWORD *)hObject = 0LL;
      v25 = wil::details_abi::SemaphoreValue::CreateFromPointer(
              (wil::details_abi::SemaphoreValue *)hObject,
              (char *)Name,
              (unsigned __int64)v23);
      v8 = v25;
      if ( v25 >= 0 )
      {
        v31 = hObject[0];
        *(_DWORD *)v24 = 1;
        v24[1] = v7;
        v24[2] = v31;
        v7 = 0LL;
        v24[3] = hObject[1];
        memset_0(v24 + 4, 0, 0x110uLL);
        v24[4] = 0LL;
        wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)(v24 + 5));
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v24 + 29), 0, 0);
        v24[34] = 0LL;
        v24[35] = 0LL;
        v24[36] = 0LL;
        v24[37] = 0LL;
        v8 = 0;
        *a2 = v24;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x138, (__int64)"wil", (const char *)(unsigned int)v25);
        if ( hObject[1] && !CloseHandle(hObject[1]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v26, v27);
          JUMPOUT(0x180013A79LL);
        }
        if ( hObject[0] && !CloseHandle(hObject[0]) )
        {
          wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v28, v29);
          __debugbreak();
        }
        v30 = GetProcessHeap();
        HeapFree(v30, 0, v24);
      }
      if ( v8 >= 0 )
        goto LABEL_20;
    }
    else
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x135, (__int64)"wil", (const char *)0x8007000ELL);
    }
    v17 = 289LL;
    goto LABEL_37;
  }
  v17 = 281LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v17, (__int64)"wil", (const char *)(unsigned int)v8);
LABEL_21:
  if ( v13 && !ReleaseMutex(v13) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8FA, v18, v19);
    __debugbreak();
  }
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v20, v21);
    __debugbreak();
  }
  return (unsigned int)v8;
}
