/*
 * XREFs of ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1803E3B70
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x1803E2810 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::Run @ 0x1803E2840 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--Run.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016BCF0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_18016BCF0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18016C074 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18036F010 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18036F094 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&_ @ 0x1803DF734 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803E0A6C (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E1C50 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1803E2868 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 */

__int64 __fastcall WindowArrangementView::TickPlaceModeIdleAnimation(WindowArrangementView *this)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // cf
  __int64 v5; // rbx
  volatile int *v6; // rdx
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  LANGID ThreadUILanguage; // ax
  int v11; // ecx
  IApplicationViewChangeListener *v12; // rbx
  int v13; // esi
  HRESULT v14; // eax
  void *v15; // rbx
  char v16; // al
  int v17; // ecx
  IApplicationViewChangeListener *v19; // [rsp+30h] [rbp-20h] BYREF
  WindowArrangementView *v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+48h] BYREF
  WindowArrangementView *v25; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+58h] BYREF

  if ( *((_DWORD *)this + 74) && *((_DWORD *)this + 77) < 3u )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 1LL);
    v3 = *((_DWORD *)this + 74);
    if ( v3 == 1 )
    {
      v4 = *((_BYTE *)this + 313) != 0;
      *((_DWORD *)this + 74) = 2;
      *((_DWORD *)this + 75) = v4 ? v2 - 1 : 0;
    }
    else
    {
      if ( v3 != 2 )
        goto LABEL_10;
      if ( *((_BYTE *)this + 304) )
      {
        *((_BYTE *)this + 304) = 0;
        goto LABEL_10;
      }
      *((_DWORD *)this + 75) += *((_BYTE *)this + 313) != 0 ? -1 : 1;
    }
    *((_BYTE *)this + 304) = 1;
LABEL_10:
    v26 = 0LL;
    v5 = *((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 104LL))(
           v5,
           *((unsigned int *)this + 75),
           1LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v26) < 0 )
    {
      ++*((_DWORD *)this + 77);
      LOBYTE(v6) = 1;
      WindowArrangementView::SetPlaceModeIdleAnimationEnabled(this, v6);
    }
    else
    {
      v7 = 0;
      if ( *((_BYTE *)this + 304) )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 2LL);
        v9 = (unsigned int)(v8 - 1) >> 1;
        if ( (v8 & 1) == 0 )
        {
          ThreadUILanguage = GetThreadUILanguage();
          if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
            ++v9;
        }
        v11 = *((_DWORD *)this + 75);
        if ( v11 == v9 )
        {
          v7 = 1;
        }
        else if ( v11 == v9 + 1 )
        {
          v7 = 2;
        }
      }
      v23 = 0LL;
      v20 = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this,
        v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      v25 = this;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
      v23 = 0LL;
      Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb____(
        &v19,
        (__int64 *)&v25);
      v12 = v19;
      if ( v19 )
      {
        v13 = (**(__int64 (__fastcall ***)(IApplicationViewChangeListener *, GUID *, __int64 *))v19)(
                v19,
                &GUID_53204493_9170_4f30_be0e_211392a4618e,
                &v23);
        (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      else
      {
        v13 = -2147024882;
      }
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v25);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v13);
LABEL_26:
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
LABEL_34:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        return (unsigned int)v13;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v14 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_180526AA0,
              &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
              &ppvOut);
      v13 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_26;
      }
      v25 = (WindowArrangementView *)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v21, (__int64 *)&v25, (__int64)&GUID_NULL, v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      v15 = ppvOut;
      v19 = (IApplicationViewChangeListener *)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      if ( v15 )
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v15 + 160LL))(v15, 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 168LL))(
        *((_QWORD *)this + 10),
        v7,
        1LL,
        v23);
      v16 = *((_BYTE *)this + 304);
      v17 = -(*((_DWORD *)this + 75) != 0);
      LODWORD(v25) = 3;
      HIDWORD(v25) = 2 - v17;
      WindowArrangementView::EnablePlaceModeDropFeedback(
        (__int64)this,
        0,
        (int *)((unsigned __int64)&v25 & -(__int64)(v16 != 0)),
        v23);
      if ( v15 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v15 + 160LL))(v15, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    }
    v13 = 0;
    goto LABEL_34;
  }
  return 2147947423LL;
}
