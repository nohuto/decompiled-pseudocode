/*
 * XREFs of wistd::function_long___cdecl(Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_____)_::operator___lambda_a9359ba1b3912c4237c6d32c3fbe7c28__void_ @ 0x18023828C
 * Callers:
 *     ??$MakeAsyncCallbackCopyArgs@U?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@wil@@U?$MakeSafelyCopyableResult@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@PEAVPresentationReadyChangedEventArgs@@@23@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@CAJAEAV?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@PEAVApplicationViewBackedViewHostItem@@@details@1@$$QEAU?$MakeSafelyCopyableResult@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@PEAVPresentationReadyChangedEventArgs@@@51@@Z @ 0x180238E04 (--$MakeAsyncCallbackCopyArgs@U-$MakeSafelyCopyableResult@V-$ComPtr@VApplicationView_ea_180238E04.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180126C94 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function_long___cdecl_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs_______::operator___lambda_a9359ba1b3912c4237c6d32c3fbe7c28__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &off_18044DEC0;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[14] = a1 + 1;
  return a1;
}
