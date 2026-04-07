/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180077358
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180041A60 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003D0A0 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004D8C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x180075CC8 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800763D0 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800786E8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  void *v10; // rbx
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi
  int v13; // eax
  void *v14; // rdx
  wil::details *v16[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x130uLL);
  v10 = (void *)v7;
  if ( v7 )
  {
    v12 = v7;
    *(_OWORD *)v16 = 0LL;
    if ( (v7 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
    v13 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(v16, a1, v9, v7 >> 2);
    v11 = v13;
    if ( v13 >= 0 )
    {
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::ProcessLocalStorageData<wil::details_abi::FeatureStateData>(
        (__int64)v10,
        a2,
        v16);
      v10 = 0LL;
      *a3 = v12;
      v11 = 0;
      v12 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x138,
        (unsigned int)"wil",
        (const char *)(unsigned int)v13,
        (int)v16[0]);
    }
    if ( v16[1] )
      wil::details::CloseHandle(v16[1], v14);
    if ( v16[0] )
      wil::details::CloseHandle(v16[0], v14);
    if ( v12 )
      MemoryFree(v10);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (unsigned int)"wil",
      (const char *)0x8007000ELL,
      (int)v16[0]);
  }
  return v11;
}
