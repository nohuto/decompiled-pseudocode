/*
 * XREFs of ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180070624
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x18006FF40 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUThreadLocalData@23@_N@Z @ 0x1800702FC (-GetLocal@-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUThrea.c)
 *     ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x1800704D0 (-GetShared@-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUPr.c)
 */

struct wil::details_abi::ThreadLocalData *__fastcall wil::details_abi::GetThreadLocalDataCache(wil::details_abi *this)
{
  signed __int64 v1; // rbx
  char v2; // si
  __int64 Shared; // rax
  __int64 v4; // rdi
  signed __int64 Local; // rax

  v1 = 0LL;
  v2 = (char)this;
  if ( wil::details_abi::g_pProcessLocalData )
  {
    Shared = wil::details_abi::ProcessLocalStorage<wil::details_abi::ProcessLocalData>::GetShared(this);
    v4 = Shared;
    if ( Shared )
    {
      Local = wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::GetLocal(Shared + 8, v2);
      v1 = Local;
      if ( Local )
      {
        if ( !*(_QWORD *)(Local + 8) )
          *(_QWORD *)(Local + 8) = v4 + 4;
      }
    }
  }
  return (struct wil::details_abi::ThreadLocalData *)v1;
}
