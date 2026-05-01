/*
 * XREFs of wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs_____)_::operator___lambda_21967ee68d91b6fb0a0061610099019a__void_ @ 0x180218CC8
 * Callers:
 *     ??$MakeAsyncCallbackCopyArgs@U?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@U?$MakeSafelyCopyableResult@V?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@PEAVFrameworkViewTypeSetEventArgs@@@23@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@CAJAEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@1@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@PEAVFrameworkViewTypeSetEventArgs@@@51@@Z @ 0x1802198D0 (--$MakeAsyncCallbackCopyArgs@U-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationViewBackedViewHos.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::function_long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs_______::operator___lambda_21967ee68d91b6fb0a0061610099019a__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi

  v4 = a1[14];
  a1[14] = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  a1[1] = &off_18042E500;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v5 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v5 )
  {
    a1[3] = *v5;
    *v5 = 0LL;
  }
  a1[14] = a1 + 1;
  return a1;
}
