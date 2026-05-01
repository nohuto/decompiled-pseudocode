/*
 * XREFs of wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::_lambda_call__lambda_73bbafb99778084dc859f66a1360e626___ @ 0x18018E6C0
 * Callers:
 *     _CPeopleBarFlyoutExperienceManager::OnViewShowing_::_1_::dtor$1 @ 0x1801904B1 (_CPeopleBarFlyoutExperienceManager--OnViewShowing_--_1_--dtor$1.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::_lambda_call__lambda_73bbafb99778084dc859f66a1360e626___(
        __int64 *a1)
{
  __int64 v1; // rcx

  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    v1 = *a1;
    if ( *(_DWORD *)(v1 + 32) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(v1 + 8));
  }
}
