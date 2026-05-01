/*
 * XREFs of ?MakeSafelyCopyable@?$MakeSafelyCopyablTraitsIUnknown@PEAVPresentationReadyChangedEventArgs@@@details@wil@@SA?AU?$MakeSafelyCopyableResult@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@PEAVPresentationReadyChangedEventArgs@@@23@PEAVPresentationReadyChangedEventArgs@@@Z @ 0x180210CFC
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVPresentationReadyChangedEventArgs@@@Z @ 0x1802092C8 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVPresentati.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVPresentationReadyChangedEventArgs@@@Z @ 0x1802192BC (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180210598 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

volatile signed __int64 **__fastcall wil::details::MakeSafelyCopyablTraitsIUnknown<PresentationReadyChangedEventArgs *>::MakeSafelyCopyable(
        volatile signed __int64 **a1,
        volatile signed __int64 *a2)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  volatile signed __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 8);
    while ( v3 >= 0 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64(a2 + 8, v3 + 1, v3);
      if ( v4 == v3 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v3 + 16));
  }
LABEL_7:
  *a1 = 0LL;
  if ( a1 != &v6 )
  {
    v6 = 0LL;
    *a1 = a2;
  }
  Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(&v6);
  return a1;
}
