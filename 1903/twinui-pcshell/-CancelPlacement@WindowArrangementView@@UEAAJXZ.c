/*
 * XREFs of ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1803C11C0
 * Callers:
 *     ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x1803C4940 (-TryInvokeBack@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc_____lambda_eb168a4251134b138c4e1a8a58dc23dc__&_ @ 0x1803C022C (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc2.c)
 *     _lambda_eb168a4251134b138c4e1a8a58dc23dc_::operator() @ 0x1803C0C08 (_lambda_eb168a4251134b138c4e1a8a58dc23dc_--operator().c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803C14CC (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall WindowArrangementView::CancelPlacement(WindowArrangementView *this)
{
  volatile signed __int32 *v2; // rdi
  WindowArrangementView *v3; // rbx
  IApplicationViewChangeListener *v4; // rbx
  int v5; // esi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  IApplicationViewChangeListener *v11; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  WindowArrangementView *v14; // [rsp+68h] [rbp+38h] BYREF
  WindowArrangementView *v15; // [rsp+70h] [rbp+40h] BYREF
  WindowArrangementView *v16; // [rsp+78h] [rbp+48h] BYREF

  if ( !*((_BYTE *)this + 268) && !*((_BYTE *)this + 266) )
  {
    v2 = (volatile signed __int32 *)((char *)this - 48);
    v3 = (WindowArrangementView *)((char *)this - 48);
    v14 = (WindowArrangementView *)((char *)this - 48);
    if ( this != (WindowArrangementView *)48 )
    {
      _InterlockedIncrement(v2 + 17);
      v3 = v14;
    }
    v16 = v3;
    if ( this != (WindowArrangementView *)48 )
    {
      _InterlockedIncrement(v2 + 17);
      v3 = v14;
    }
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v15 = v3;
    if ( v2 )
      _InterlockedIncrement(v2 + 17);
    v13 = 0LL;
    Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc_____lambda_eb168a4251134b138c4e1a8a58dc23dc____(
      &v11,
      (__int64 *)&v15);
    v4 = v11;
    if ( v11 )
    {
      v5 = (**(__int64 (__fastcall ***)(IApplicationViewChangeListener *, GUID *, __int64 *))v11)(
             v11,
             &GUID_53204493_9170_4f30_be0e_211392a4618e,
             &v13);
      (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else
    {
      v5 = -2147024882;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v15);
    if ( v5 < 0 )
    {
      v6 = (unsigned int)v5;
      v7 = 554LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)v6);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v14);
      return (unsigned int)v5;
    }
    v8 = WindowArrangementView::EnablePlaceModeDropFeedback(v2, 3LL, 0LL, v13);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), 0LL, 0LL);
      *((_BYTE *)this + 268) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22B,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v8);
      v9 = lambda_eb168a4251134b138c4e1a8a58dc23dc_::operator()(&v16);
      v5 = v9;
      if ( v9 < 0 )
      {
        v6 = (unsigned int)v9;
        v7 = 562LL;
        goto LABEL_17;
      }
    }
    v5 = 0;
    goto LABEL_20;
  }
  return 0LL;
}
