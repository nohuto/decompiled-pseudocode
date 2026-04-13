/*
 * XREFs of ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800045B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180003E2C (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004314 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x1800044B0 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::GetContextAndNotifyFailure(wil::details *this, struct wil::FailureInfo *a2, char *a3)
{
  char v3; // bp
  __int64 v4; // rbx
  DWORD CurrentThreadId; // r10d
  __int64 i; // rbx
  struct wil::details::ThreadFailureCallbackHolder **v10; // rbx
  char v11; // al
  DWORD v12; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax

  *(_BYTE *)a2 = 0;
  v3 = 0;
  v4 = wil::details::g_pThreadFailureCallbacks;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    CurrentThreadId = GetCurrentThreadId();
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xAuLL)); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == CurrentThreadId )
        goto LABEL_7;
    }
  }
  i = 0LL;
LABEL_7:
  if ( i && *(_QWORD *)i )
  {
    *(_BYTE *)a2 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(
           this,
           *(struct wil::details::ThreadFailureCallbackHolder ***)i,
           (char *)a2,
           (unsigned __int64)a3) )
    {
      *((_QWORD *)this + 8) = a2;
    }
    v10 = *(struct wil::details::ThreadFailureCallbackHolder ***)i;
    do
    {
      v11 = (**(__int64 (__fastcall ***)(struct wil::details::ThreadFailureCallbackHolder *, wil::details *))v10[1])(
              v10[1],
              this);
      v10 = (struct wil::details::ThreadFailureCallbackHolder **)v10[2];
      v3 |= v11;
    }
    while ( v10 );
  }
  if ( wil::details::g_pfnTelemetryCallback )
    wil::details::g_pfnTelemetryCallback(v3, this);
  v12 = GetCurrentThreadId();
  if ( `wil::SetLastError'::`2'::lastThread != v12 )
  {
    if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
    {
      `wil::SetLastError'::`2'::lastThread = v12;
      ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
      if ( ThreadLocalDataCache )
        wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, this);
      `wil::SetLastError'::`2'::lastThread = 0;
    }
    _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
  }
}
