/*
 * XREFs of ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x18021C898
 * Callers:
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x18021AFB0 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 *     ?RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x18021B2D0 (-RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18021D7E0 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEA_N@Z @ 0x18020A39C (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAP.c)
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180210598 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVPresentationReadyChangedEventArgs@@@Z @ 0x1802192BC (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::_FirePresentationReadinessEvent(
        ApplicationViewBackedViewHostItem *this,
        char a2)
{
  int ready; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v10; // [rsp+58h] [rbp+10h] BYREF
  PresentationReadyChangedEventArgs *v11; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int64 *v12; // [rsp+68h] [rbp+20h] BYREF

  v10 = a2;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease((volatile signed __int64 **)&v11);
  ready = Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool &>(
            &v11,
            &v10);
  v5 = ready;
  if ( ready >= 0 )
  {
    v12 = (volatile signed __int64 *)v11;
    *(_QWORD *)v8 = this;
    ready = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,PresentationReadyChangedEventArgs *>(
              (__int64)this + 320,
              (volatile signed __int64 **)v8,
              &v12);
    v5 = ready;
    if ( ready >= 0 )
    {
      *((_BYTE *)this + 253) = a2;
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 711LL;
  }
  else
  {
    v6 = 710LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)ready);
LABEL_7:
  Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease((volatile signed __int64 **)&v11);
  return v5;
}
