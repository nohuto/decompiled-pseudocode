/*
 * XREFs of ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18035BF60
 * Callers:
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035B5C4 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18035B920 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18035BF60 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___::Run @ 0x18035D480 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180123320 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180123320.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801236A4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x18035A250 (--$As@UITabletModeViewManager@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___ @ 0x18035A7C8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18035BF60 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18035C890 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::Hide(WindowArrangementView *this, volatile int *a2)
{
  __int64 *v2; // rdi
  char *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  char v8; // di
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v11; // [rsp+40h] [rbp+18h] BYREF
  char *v12; // [rsp+48h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 104);
  if ( (_BYTE)a2 )
  {
    if ( !*v2 )
    {
      v4 = (char *)this - 24;
      v12 = (char *)this - 24;
      if ( this != (WindowArrangementView *)24 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
          (__int64)this - 24,
          a2);
      v11 = v4;
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)v4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
      v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___(
             v6,
             v5,
             (__int64)v2,
             &v11);
      if ( v7 >= 0 )
      {
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          321LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v7);
        v8 = 1;
      }
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v11);
      if ( v8 )
        WindowArrangementView::Hide(this, 0);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v12);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
    SmartCookie::Unregister((WindowArrangementView *)((char *)this + 136));
    v11 = 0LL;
    v9 = Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>((_QWORD *)this - 1, (__int64 *)&v11);
    if ( v9 >= 0 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 64LL))(v11);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        334LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
}
