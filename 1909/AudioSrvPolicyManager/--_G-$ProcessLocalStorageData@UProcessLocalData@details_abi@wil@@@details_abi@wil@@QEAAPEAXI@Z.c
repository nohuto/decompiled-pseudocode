/*
 * XREFs of ??_G?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x180003CC4
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180003B18 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002D38 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1ThreadLocalData@details_abi@wil@@QEAA@XZ @ 0x18000316C (--1ThreadLocalData@details_abi@wil@@QEAA@XZ.c)
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
  __int64 v8; // r8
  const char *v9; // r9
  void *v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  void *v13; // rcx
  __int64 v14; // r8
  const char *v15; // r9
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
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v8, v9);
    __debugbreak();
  }
  v10 = (void *)a1[2];
  if ( v10 && !CloseHandle(v10) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v11, v12);
    JUMPOUT(0x180003DA9LL);
  }
  v13 = (void *)a1[1];
  if ( v13 && !CloseHandle(v13) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8F0, v14, v15);
    __debugbreak();
  }
  return a1;
}
