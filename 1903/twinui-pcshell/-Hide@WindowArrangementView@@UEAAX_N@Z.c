/*
 * XREFs of ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1803C1D80
 * Callers:
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803C13D4 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x1803C1744 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1803C1D80 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___::Run @ 0x1803C32A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180109598 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803C0150 (--$As@UITabletModeViewManager@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___ @ 0x1803C0580 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1803C1D80 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C26B0 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::Hide(WindowArrangementView *this, char a2)
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
  char *v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = (_QWORD *)((char *)this + 104);
  if ( a2 )
  {
    if ( !*v2 )
    {
      v4 = (volatile signed __int32 *)((char *)this - 24);
      v5 = 1;
      *(_QWORD *)v10 = (char *)this - 24;
      if ( this != (WindowArrangementView *)24 )
        _InterlockedAdd(v4 + 17, 1u);
      v13 = (char *)this - 24;
      if ( this != (WindowArrangementView *)24 )
        _InterlockedAdd(v4 + 17, 1u);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
      v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___(
             v7,
             v6,
             (__int64)v2,
             &v13);
      if ( v8 >= 0 )
        v5 = 0;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x141,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v13);
      if ( v5 )
        WindowArrangementView::Hide(this, 0);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(v10);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
    SmartCookie::Unregister((WindowArrangementView *)((char *)this + 136));
    v12 = 0LL;
    v9 = Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>((_QWORD *)this - 1, &v12);
    if ( v9 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 64LL))(v12);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
}
