/*
 * XREFs of ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1803C5E80
 * Callers:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x1803C5C54 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1803C5CE8 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1803C5E80 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::Run @ 0x1803C67D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x1803433BC (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803C0150 (--$As@UITabletModeViewManager@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___ @ 0x1803C5794 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1803C5E80 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 */

void __fastcall AppResizeView::Hide(AppResizeView *this, char a2)
{
  _QWORD *v2; // rsi
  volatile signed __int32 *v4; // rdx
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int32 *v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  if ( a2 )
  {
    if ( !*v2 )
    {
      v4 = (volatile signed __int32 *)((char *)this - 24);
      v5 = 1;
      *(_QWORD *)v10 = (char *)this - 24;
      if ( this != (AppResizeView *)24 )
        _InterlockedAdd(v4 + 13, 1u);
      v13 = (volatile signed __int32 *)((char *)this - 24);
      if ( this != (AppResizeView *)24 )
        _InterlockedAdd(v4 + 13, 1u);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
      v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___(
             v7,
             v6,
             (__int64)v2,
             &v13);
      if ( v8 >= 0 )
        v5 = 0;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAF,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(&v13);
      if ( v5 )
        AppResizeView::Hide(this, 0);
      Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease((volatile signed __int32 **)v10);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
    v12 = 0LL;
    v9 = Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>((_QWORD *)this - 1, &v12);
    if ( v9 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBB,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
}
