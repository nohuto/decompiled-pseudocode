/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180070988
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18006F8E0 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003B7B4 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004B53C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18006FAF4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180071ED4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        size_t *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // r8
  _WORD *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax
  void *v13; // rdx
  wil::details *v14; // rbp
  wil::details *v15; // rsi
  _WORD *v16; // rax
  wil::details *v18[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v10 = (_WORD *)v7;
  if ( v7 )
  {
    *(_OWORD *)v18 = 0LL;
    if ( (v7 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v8);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(v18, a1, v9, v7 >> 2);
    v11 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v10 = 1;
      v14 = 0LL;
      *((_QWORD *)v10 + 1) = *a2;
      *a2 = 0LL;
      v15 = 0LL;
      *((wil::details **)v10 + 2) = v18[0];
      v18[0] = 0LL;
      *((wil::details **)v10 + 3) = v18[1];
      v18[1] = 0LL;
      memset_0(v10 + 16, 0, 0x58uLL);
      v10[16] = 88;
      *((_DWORD *)v10 + 9) = 1;
      memset_0(v10 + 20, 0, 0x50uLL);
      v16 = v10;
      v10 = 0LL;
      v11 = 0;
      *a3 = v16;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x140,
        (unsigned int)"wil",
        (const char *)(unsigned int)v12,
        (int)v18[0]);
      v14 = v18[1];
      v15 = v18[0];
    }
    if ( v14 )
      wil::details::CloseHandle(v14, v13);
    if ( v15 )
      wil::details::CloseHandle(v15, v13);
    if ( v10 )
      MemoryFree(v10);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (unsigned int)"wil",
      (const char *)0x8007000ELL,
      (int)v18[0]);
  }
  return v11;
}
