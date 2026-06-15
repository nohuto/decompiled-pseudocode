/*
 * XREFs of ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x140001670
 * Callers:
 *     ?SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x140001590 (-SerializeForRPC@CCrossProcessServerMemory@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400018D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140028114 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseMemory::SerializeForRPC(
        CCrossProcessBaseMemory *this,
        struct STANDARD_CROSSPROCESS_MEMORY *a2)
{
  unsigned int v4; // esi
  void *v5; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  const char *v8; // r9
  HANDLE v9; // rax
  char *v10; // rcx
  unsigned int LastError; // eax
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 2) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v4 = 0;
    *(_QWORD *)a2 = 0LL;
    TargetHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TargetHandle,
      0LL);
    v5 = (void *)*((_QWORD *)this + 2);
    CurrentProcess = GetCurrentProcess();
    v7 = GetCurrentProcess();
    if ( DuplicateHandle(v7, v5, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    {
      v9 = TargetHandle;
      v10 = 0LL;
      TargetHandle = 0LL;
      *(_QWORD *)a2 = v9;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x27,
                    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
                    v8);
      v10 = (char *)TargetHandle;
      v4 = LastError;
    }
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v10);
    return v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpbasememory.cpp",
      (const char *)0x80004005LL,
      dwDesiredAccess);
    return 2147500037LL;
  }
}
