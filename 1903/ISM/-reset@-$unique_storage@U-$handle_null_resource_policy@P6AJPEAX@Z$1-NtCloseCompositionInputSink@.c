/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180067150
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CC40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ?Initialize@InputRedirectionTarget@@IEAAJXZ @ 0x180107750 (-Initialize@InputRedirectionTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    NtCloseCompositionInputSink(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
