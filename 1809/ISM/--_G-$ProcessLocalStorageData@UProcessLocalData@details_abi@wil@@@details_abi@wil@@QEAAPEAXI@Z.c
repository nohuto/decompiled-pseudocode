/*
 * XREFs of ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800053F0
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x18000529C (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x180003C08 (--1ThreadLocalData@details_abi@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::`scalar deleting destructor'(
        _QWORD *a1)
{
  wil::details_abi::ThreadLocalData **v1; // rdi
  wil::details_abi::ThreadLocalData **v3; // r14
  wil::details_abi::ThreadLocalData *v4; // rbp
  wil::details_abi::ThreadLocalData *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rcx
  const char *v8; // r9
  void *v9; // rcx
  const char *v10; // r9
  void *v11; // rcx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (wil::details_abi::ThreadLocalData **)(a1 + 5);
  v3 = (wil::details_abi::ThreadLocalData **)(a1 + 15);
  while ( v1 != v3 )
  {
    v4 = *v1;
    while ( v4 )
    {
      v5 = v4;
      v4 = (wil::details_abi::ThreadLocalData *)*((_QWORD *)v4 + 6);
      wil::details_abi::ThreadLocalData::~ThreadLocalData(v5);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    *v1++ = 0LL;
  }
  v7 = (void *)a1[3];
  if ( v7 && !CloseHandle(v7) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v8);
    __debugbreak();
  }
  v9 = (void *)a1[2];
  if ( v9 && !CloseHandle(v9) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v10);
    JUMPOUT(0x1800054EALL);
  }
  v11 = (void *)a1[1];
  if ( v11 && !CloseHandle(v11) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v12);
    __debugbreak();
  }
  return a1;
}
