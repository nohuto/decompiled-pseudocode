/*
 * XREFs of _lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_ @ 0x1800DD8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1800DF424 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800E0790 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 */

void __fastcall lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi
  wil::details_abi::FeatureStateData *Ptr; // rcx

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 4;
    AcquireSRWLockExclusive(Context + 4);
    BYTE1(Context[8].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)Context);
    Ptr = (wil::details_abi::FeatureStateData *)Context[3].Ptr;
    if ( Ptr )
      wil::details_abi::FeatureStateData::RecordUsage(Ptr);
  }
}
