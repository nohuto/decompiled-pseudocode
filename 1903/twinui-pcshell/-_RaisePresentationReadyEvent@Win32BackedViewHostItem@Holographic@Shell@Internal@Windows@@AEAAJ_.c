/*
 * XREFs of ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180215CB4
 * Callers:
 *     _lambda_5945374297143300155349d30b4277af_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x180208F60 (_lambda_5945374297143300155349d30b4277af_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _lambda_b1e75d3e314d3909b197b601af483277_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18020900C (_lambda_b1e75d3e314d3909b197b601af483277_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     ?RaisePresentationNotReady@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x1802124C0 (-RaisePresentationNotReady@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ.c)
 *     ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1802153A8 (-_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@.c)
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180217AA0 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVPresentationReadyChangedEventArgs@@@Z @ 0x1802092C8 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVPresentati.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEA_N@Z @ 0x18020A39C (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180210598 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        char a2)
{
  int ready; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+48h] [rbp+10h] BYREF
  PresentationReadyChangedEventArgs *v10; // [rsp+50h] [rbp+18h] BYREF
  PresentationReadyChangedEventArgs *v11; // [rsp+58h] [rbp+20h] BYREF

  v9 = a2;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease((volatile signed __int64 **)&v10);
  ready = Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool &>(
            &v10,
            &v9);
  v4 = ready;
  if ( ready >= 0 )
  {
    v11 = v10;
    *(_QWORD *)v7 = this;
    ready = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *,PresentationReadyChangedEventArgs *>(
              (char *)this + 552,
              (__int64 *)v7,
              &v11);
    v4 = ready;
    if ( ready >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 656LL;
  }
  else
  {
    v5 = 655LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)ready);
LABEL_7:
  Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease((volatile signed __int64 **)&v10);
  return v4;
}
