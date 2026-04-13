/*
 * XREFs of ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x18000390C
 * Callers:
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180013510 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180013A18 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800037EC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::SemaphoreValue::Destroy(wil::details_abi::SemaphoreValue *this)
{
  void *v1; // rdi
  DWORD LastError; // esi
  __int64 v4; // r8
  const char *v5; // r9
  void *v6; // rdi
  DWORD v7; // esi
  __int64 v8; // r8
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    LastError = GetLastError();
    if ( !CloseHandle(v1) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x90E, v4, v5);
      JUMPOUT(0x1800039A1LL);
    }
    SetLastError(LastError);
  }
  *(_QWORD *)this = 0LL;
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    v7 = GetLastError();
    if ( !CloseHandle(v6) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x90E, v8, v9);
      __debugbreak();
    }
    SetLastError(v7);
  }
  *((_QWORD *)this + 1) = 0LL;
}
