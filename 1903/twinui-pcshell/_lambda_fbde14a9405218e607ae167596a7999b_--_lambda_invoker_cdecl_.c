/*
 * XREFs of _lambda_fbde14a9405218e607ae167596a7999b_::_lambda_invoker_cdecl_ @ 0x1801FB670
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x180201004 (-Initialize@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern.c)
 */

__int64 __fastcall lambda_fbde14a9405218e607ae167596a7999b_::_lambda_invoker_cdecl_(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  unsigned int v3; // ebx
  signed int v4; // eax

  v3 = 0;
  if ( Context )
    *Context = 0LL;
  v4 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::Initialize(Parameter);
  if ( v4 >= 0 )
    return 1;
  else
    SetLastError(v4);
  return v3;
}
