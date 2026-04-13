/*
 * XREFs of _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Services::TargetedContent::TargetedContentSubscription_____ptr64______ptr64__::_2_::CompletionDelegate::Invoke @ 0x180019020
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800037EC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Services::TargetedContent::TargetedContentSubscription_____ptr64______ptr64__::_2_::CompletionDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // r8
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 48) = a3;
  if ( !SetEvent(*(HANDLE *)(a1 + 56)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x904, v3, v4);
    JUMPOUT(0x18001904CLL);
  }
  return 0LL;
}
