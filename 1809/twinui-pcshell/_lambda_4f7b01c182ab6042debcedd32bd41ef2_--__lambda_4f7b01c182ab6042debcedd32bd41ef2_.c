/*
 * XREFs of _lambda_4f7b01c182ab6042debcedd32bd41ef2_::__lambda_4f7b01c182ab6042debcedd32bd41ef2_ @ 0x1801B1100
 * Callers:
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemEventArgs@@@Z @ 0x1801AEE78 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArg.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3ED8 (-InternalRelease@-$ComPtr@VViewEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_4f7b01c182ab6042debcedd32bd41ef2_::__lambda_4f7b01c182ab6042debcedd32bd41ef2_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<ViewEventArgs>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
