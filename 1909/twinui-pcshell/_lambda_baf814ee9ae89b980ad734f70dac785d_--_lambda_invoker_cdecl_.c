/*
 * XREFs of _lambda_baf814ee9ae89b980ad734f70dac785d_::_lambda_invoker_cdecl_ @ 0x1800AE460
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@AEAAJXZ @ 0x1800B22B8 (-Initialize@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@Family.c)
 */

__int64 __fastcall lambda_baf814ee9ae89b980ad734f70dac785d_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  unsigned int v3; // ebx
  signed int v4; // eax

  v3 = 0;
  if ( Context )
    *Context = 0LL;
  v4 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::Initialize(Parameter);
  if ( v4 >= 0 )
    return 1;
  else
    SetLastError(v4);
  return v3;
}
