/*
 * XREFs of ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1803C45C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___::Run @ 0x1803C3260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a08449ab0a2814bb2af7204eecc9930___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___::Run @ 0x1803C3290 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af32df4a401f889ca6e3593a0d1a6fcf___--Run.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180040A08 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18034F840 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18034F8C4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb__&_ @ 0x1803C0194 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803C14CC (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1803C32B8 (-SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z.c)
 */

__int64 __fastcall WindowArrangementView::TickPlaceModeIdleAnimation(WindowArrangementView *this)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // cf
  __int64 v5; // rbx
  unsigned int v6; // r14d
  int v7; // eax
  unsigned int v8; // ebx
  LANGID ThreadUILanguage; // ax
  int v10; // ecx
  IApplicationViewChangeListener *v11; // rbx
  int v12; // esi
  HRESULT v13; // eax
  void *v14; // rbx
  char v15; // al
  int v16; // ecx
  WindowArrangementView *v18; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-38h] BYREF
  void *v20; // [rsp+40h] [rbp-30h] BYREF
  WindowArrangementView *v21; // [rsp+48h] [rbp-28h] BYREF
  IApplicationViewChangeListener *v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v25; // [rsp+B0h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+B8h] [rbp+48h] BYREF
  void *v27; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+58h] BYREF

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
    v28 = 0LL;
    v5 = *((_QWORD *)this + 15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 104LL))(
           v5,
           *((unsigned int *)this + 75),
           1LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v28) < 0 )
    {
      ++*((_DWORD *)this + 77);
      WindowArrangementView::SetPlaceModeIdleAnimationEnabled(this, 1);
    }
    else
    {
      v6 = 0;
      if ( *((_BYTE *)this + 304) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15), 2LL);
        v8 = (unsigned int)(v7 - 1) >> 1;
        if ( (v7 & 1) == 0 )
        {
          ThreadUILanguage = GetThreadUILanguage();
          if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
            ++v8;
        }
        v10 = *((_DWORD *)this + 75);
        if ( v10 == v8 )
        {
          v6 = 1;
        }
        else if ( v10 == v8 + 1 )
        {
          v6 = 2;
        }
      }
      v25 = 0LL;
      v21 = this;
      _InterlockedAdd((volatile signed __int32 *)this + 17, 1u);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v18 = this;
      _InterlockedAdd((volatile signed __int32 *)this + 17, 1u);
      v25 = 0LL;
      Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb_____lambda_d996df4ae651642ba189a9f5cbef4ddb____(
        &v22,
        (__int64 *)&v18);
      v11 = v22;
      if ( v22 )
      {
        v12 = (**(__int64 (__fastcall ***)(IApplicationViewChangeListener *, GUID *, __int64 *))v22)(
                v22,
                &GUID_53204493_9170_4f30_be0e_211392a4618e,
                &v25);
        (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      else
      {
        v12 = -2147024882;
      }
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v18);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BB,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v12);
LABEL_26:
        Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
LABEL_34:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
        return (unsigned int)v12;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v13 = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &stru_180500400,
              &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
              &ppvOut);
      v12 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_26;
      }
      v27 = ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v23, (__int64 *)&v27, (__int64)&GUID_NULL, v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
      v14 = ppvOut;
      v20 = ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      if ( v14 )
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 160LL))(v14, 1LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 168LL))(
        *((_QWORD *)this + 10),
        v6,
        1LL,
        v25);
      v15 = *((_BYTE *)this + 304);
      v16 = -(*((_DWORD *)this + 75) != 0);
      v19[0] = 3;
      v19[1] = 2 - v16;
      WindowArrangementView::EnablePlaceModeDropFeedback(
        (__int64)this,
        0,
        (int *)((unsigned __int64)v19 & -(__int64)(v15 != 0)),
        v25);
      if ( v14 )
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v14 + 160LL))(v14, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    }
    v12 = 0;
    goto LABEL_34;
  }
  return 2147947423LL;
}
