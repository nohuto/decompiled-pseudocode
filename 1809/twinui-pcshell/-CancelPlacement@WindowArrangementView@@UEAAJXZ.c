/*
 * XREFs of ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18035B400
 * Callers:
 *     ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x18035EA20 (-TryInvokeBack@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180123320 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180123320.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801236A4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc___ @ 0x18035A338 (CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc___.c)
 *     _lambda_eb168a4251134b138c4e1a8a58dc23dc_::operator() @ 0x18035AE50 (_lambda_eb168a4251134b138c4e1a8a58dc23dc_--operator().c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18035B6BC (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18035C890 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall WindowArrangementView::CancelPlacement(WindowArrangementView *this, volatile int *a2)
{
  WindowArrangementView *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  __int64 v10; // [rsp+50h] [rbp+28h] BYREF
  WindowArrangementView *v11; // [rsp+58h] [rbp+30h] BYREF
  WindowArrangementView *v12; // [rsp+60h] [rbp+38h] BYREF
  char *v13; // [rsp+68h] [rbp+40h] BYREF

  if ( !*((_BYTE *)this + 260) && !*((_BYTE *)this + 258) )
  {
    v3 = (WindowArrangementView *)((char *)this - 48);
    v13 = (char *)this - 48;
    if ( this != (WindowArrangementView *)48 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this - 48,
        a2);
    v11 = v3;
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)v3);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v12 = v3;
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)v3);
    v4 = CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc_((__int64)&v12, &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 554LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v4);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v11);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v13);
      return v5;
    }
    v7 = WindowArrangementView::EnablePlaceModeDropFeedback(v3, 3LL, 0LL, v10);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), 0LL, 0LL);
      *((_BYTE *)this + 260) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        555LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v7);
      v4 = lambda_eb168a4251134b138c4e1a8a58dc23dc_::operator()(&v11);
      v5 = v4;
      if ( v4 < 0 )
      {
        v6 = 562LL;
        goto LABEL_14;
      }
    }
    v5 = 0;
    goto LABEL_17;
  }
  return 0LL;
}
