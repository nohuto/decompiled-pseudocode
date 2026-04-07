/*
 * XREFs of ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800767A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x1800766DC (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180076E84 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180078210 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 */

void __fastcall wil::details::GetContextAndNotifyFailure(wil::details *this, struct wil::FailureInfo *a2, char *a3)
{
  DWORD CurrentThreadId; // eax
  int v5; // edx
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax

  wil::details::ThreadFailureCallbackHolder::GetContextAndNotifyFailure(this, (char *)a2, (unsigned __int64)a3);
  CurrentThreadId = GetCurrentThreadId();
  if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
  {
    v5 = _InterlockedIncrement(&`wil::SetLastError'::`5'::depth);
    if ( v5 < 4 )
    {
      `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
      ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL, v5);
      if ( ThreadLocalDataCache )
        wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, this);
      `wil::SetLastError'::`2'::lastThread = 0;
    }
    _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
  }
}
