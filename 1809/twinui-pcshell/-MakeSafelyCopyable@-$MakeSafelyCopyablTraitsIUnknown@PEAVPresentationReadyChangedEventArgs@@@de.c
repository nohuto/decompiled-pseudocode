/*
 * XREFs of ?MakeSafelyCopyable@?$MakeSafelyCopyablTraitsIUnknown@PEAVPresentationReadyChangedEventArgs@@@details@wil@@SA?AU?$MakeSafelyCopyableResult@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@PEAVPresentationReadyChangedEventArgs@@@23@PEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801BECCC
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801BAE44 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$AsyncEv.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BE650 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall wil::details::MakeSafelyCopyablTraitsIUnknown<PresentationReadyChangedEventArgs *>::MakeSafelyCopyable(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r10
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  v2 = a2;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 64);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 64), v4 + 1, v4);
        if ( v5 != v4 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v4 + 16),
      (volatile int *)a2);
  }
LABEL_8:
  *a1 = 0LL;
  if ( a1 != &v7 )
  {
    v7 = 0LL;
    *a1 = v2;
  }
  Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&v7);
  return a1;
}
