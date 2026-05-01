/*
 * XREFs of ?DragInputHandler_CreateInstance@@YAJPEAUIExternalDragHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1803786F0
 * Callers:
 *     ?_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1803677A4 (-_StartTabletModeWindowArrangement@CMultitaskingViewControllerBase@@IEAAJPEAUISwitchItem@@PEAUIE.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18033F698 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180378864 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z @ 0x1803788F8 (-RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z.c)
 */

__int64 __fastcall DragInputHandler_CreateInstance(
        struct IExternalDragHost *a1,
        const struct _GUID *a2,
        IApplicationViewChangeListener **a3)
{
  IApplicationViewChangeListener *v5; // rax
  IApplicationViewChangeListener *v6; // rbx
  int v7; // edi
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  IApplicationViewChangeListener *v10; // rcx
  IApplicationViewChangeListener *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IApplicationViewChangeListener *v14; // [rsp+38h] [rbp+10h] BYREF
  IApplicationViewChangeListener *v15; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v14);
  v14 = 0LL;
  v5 = (IApplicationViewChangeListener *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
LABEL_8:
    v8 = 140LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\draginputhandler.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_17;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>(v5);
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputSource>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)v6 + 3) = 0LL;
  *(_QWORD *)v6 = &DragInputHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputSource>'};
  v15 = v6;
  *((_QWORD *)v6 + 2) = &DragInputHandler::`vftable'{for `CWRLImpWndProc<DragInputHandler>'};
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 5) = 0LL;
  v7 = DragInputHandler::RuntimeClassInitialize(v6, a1);
  if ( v7 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v6 + 3);
    v14 = v6;
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v15);
  if ( v7 < 0 )
    goto LABEL_8;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_3421cff7_d49b_4e87_a0e9_1f7077d9ce1b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v14;
    *a3 = v14;
    (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)v11 + 8LL))(v11);
    v7 = 0;
  }
  else if ( InlineIsEqualGUID(v9, v9) )
  {
    v10 = v14;
    v7 = 0;
    *a3 = v14;
    (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v7 < 0 )
  {
    v8 = 141LL;
    goto LABEL_16;
  }
LABEL_17:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v14);
  return (unsigned int)v7;
}
