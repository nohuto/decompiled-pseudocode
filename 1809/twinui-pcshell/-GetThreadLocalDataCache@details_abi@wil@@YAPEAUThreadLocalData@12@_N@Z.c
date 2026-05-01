/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800599A0
 * Callers:
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18001B6F4 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800565A0 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppId.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     _lambda_5628bd74a8815c20418001cca1cbd131_::operator() @ 0x18005EF04 (_lambda_5628bd74a8815c20418001cca1cbd131_--operator().c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800DE818 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  __int64 v1; // rdi
  char v2; // r14
  signed __int64 i; // rbx
  __int64 v4; // rdi
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v6; // rsi
  HANDLE ProcessHeap; // rax
  void *v8; // rax
  signed __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = wil::details_abi::g_pProcessLocalData;
  v2 = (char)this;
  i = 0LL;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    if ( !*(_QWORD *)(wil::details_abi::g_pProcessLocalData + 8) )
    {
      v11 = *(_QWORD *)wil::details_abi::g_pProcessLocalData;
      v12 = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(v11, &v12) >= 0
        && !*(_QWORD *)(v1 + 8) )
      {
        *(_QWORD *)(v1 + 8) = v12;
      }
    }
    v4 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v4 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = CurrentThreadId % 0xAuLL;
      for ( i = *(_QWORD *)(v4 + 8 * v6 + 8); i; i = *(_QWORD *)(i + 48) )
      {
        if ( *(_DWORD *)(i + 40) == CurrentThreadId )
          goto LABEL_12;
      }
      if ( v2
        && (ProcessHeap = GetProcessHeap(), v8 = HeapAlloc(ProcessHeap, 0, 0x38uLL), (i = (signed __int64)v8) != 0) )
      {
        memset_0(v8, 0, 0x28uLL);
        *(_WORD *)i = 40;
        *(_DWORD *)(i + 4) = 0;
        *(_QWORD *)(i + 8) = 0LL;
        *(_DWORD *)(i + 16) = 0;
        *(_QWORD *)(i + 24) = 0LL;
        *(_DWORD *)(i + 32) = 0;
        *(_DWORD *)(i + 40) = CurrentThreadId;
        *(_QWORD *)(i + 48) = 0LL;
        _m_prefetchw((const void *)(v4 + 8 * v6 + 8));
        do
        {
          v9 = *(_QWORD *)(v4 + 8 * v6 + 8);
          *(_QWORD *)(i + 48) = v9;
        }
        while ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v6 + 8), i, v9) );
      }
      else
      {
        i = 0LL;
      }
LABEL_12:
      if ( i && !*(_QWORD *)(i + 8) )
        *(_QWORD *)(i + 8) = v4 + 4;
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)i;
}
