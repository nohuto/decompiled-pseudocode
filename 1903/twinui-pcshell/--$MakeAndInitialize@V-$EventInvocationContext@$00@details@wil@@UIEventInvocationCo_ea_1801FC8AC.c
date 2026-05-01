/*
 * XREFs of ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIEventInvocationContext@details@wil@@@WRL@Microsoft@@@012@@Z @ 0x1801FC8AC
 * Callers:
 *     ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@AEAAJXZ @ 0x1800A3988 (-Initialize@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@Family.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(a1);
}
