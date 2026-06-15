/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180049D14
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180049E38 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180048200 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18004A220 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800AE3F8 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *v8; // rcx
  bool v9; // r8
  _WORD *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  wil::details *v13; // rbp
  wil::details *v14; // rsi
  void *v15; // rdx
  _WORD *v16; // rax
  int v18[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
  v10 = (_WORD *)v7;
  if ( v7 )
  {
    *(_OWORD *)v18 = 0LL;
    if ( (v7 & 3) != 0 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v8);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v18,
            a1,
            v9,
            v7 >> 2);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x140,
        (unsigned int)"wil",
        (const char *)(unsigned int)v11,
        v18[0]);
      v13 = *(wil::details **)&v18[2];
      v14 = *(wil::details **)v18;
    }
    else
    {
      *(_DWORD *)v10 = 1;
      v13 = 0LL;
      *((_QWORD *)v10 + 1) = *a2;
      *a2 = 0LL;
      v14 = 0LL;
      *((_QWORD *)v10 + 2) = *(_QWORD *)v18;
      *(_QWORD *)v18 = 0LL;
      *((_QWORD *)v10 + 3) = *(_QWORD *)&v18[2];
      *(_QWORD *)&v18[2] = 0LL;
      memset_0(v10 + 16, 0, 0x58uLL);
      v10[16] = 88;
      *((_DWORD *)v10 + 9) = 1;
      memset_0(v10 + 20, 0, 0x50uLL);
      v16 = v10;
      v10 = 0LL;
      v12 = 0;
      *a3 = v16;
    }
    if ( v13 )
      wil::details::CloseHandle(v13, v15);
    if ( v14 )
      wil::details::CloseHandle(v14, v15);
    if ( v10 )
      operator delete(v10);
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x13D, (unsigned int)"wil", (const char *)0x8007000ELL, v18[0]);
  }
  return v12;
}
