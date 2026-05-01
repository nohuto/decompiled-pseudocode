/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1803695B4
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x1803687B8 (--$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Det.c)
 * Callees:
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180015428 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180132F80 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??$?4VSwitcherTabViewManagerWrapper@@@?$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@@Z @ 0x1802DDE10 (--$-4VSwitcherTabViewManagerWrapper@@@-$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@$$Q.c)
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x18035F5C4 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 *     ??$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@AEBQEAUITabViewManager@@@Z @ 0x180368764 (--$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA-AV-$C.c)
 */

__int64 __fastcall CMultitaskingViewManager::RuntimeClassInitialize(
        CMultitaskingViewManager *this,
        const struct CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs *a2)
{
  int inited; // ebx
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF

  inited = CObjectWithThreadUseDetection::InitApartmentId((CMultitaskingViewManager *)((char *)this + 40));
  if ( inited < 0 )
  {
    v5 = 170LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  inited = ForegroundStaging::Initialize((CMultitaskingViewManager *)((char *)this + 312));
  if ( inited < 0 )
  {
    v5 = 174LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  inited = CoCreateInstance(
             &CLSID_SwitchThumbnailDeviceManager,
             0LL,
             1u,
             &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
             (LPVOID *)this + 40);
  if ( inited < 0 )
  {
    v5 = 177LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 176LL))(*((_QWORD *)this + 40));
  v7 = *((_QWORD *)this + 11);
  v8 = *(_QWORD *)a2;
  if ( v7 != *(_QWORD *)a2 )
  {
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)a2);
      v7 = *((_QWORD *)this + 11);
    }
    v14 = v7;
    *((_QWORD *)this + 11) = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 13, *((_QWORD *)a2 + 2));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 14, *((_QWORD *)a2 + 3));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 15, *((_QWORD *)a2 + 4));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 16, *((_QWORD *)a2 + 5));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 17, *((_QWORD *)a2 + 6));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 18, *((_QWORD *)a2 + 7));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 19, *((_QWORD *)a2 + 8));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 20, *((_QWORD *)a2 + 9));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 21, *((_QWORD *)a2 + 10));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 22, *((_QWORD *)a2 + 11));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 23, *((_QWORD *)a2 + 12));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 24, *((_QWORD *)a2 + 13));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 25, *((_QWORD *)a2 + 14));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 26, *((_QWORD *)a2 + 15));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 27, *((_QWORD *)a2 + 18));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 28, *((_QWORD *)a2 + 19));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 30, *((_QWORD *)a2 + 17));
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 29, *((_QWORD *)a2 + 16));
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)this + 32, *((_QWORD *)a2 + 21));
  v9 = *((_QWORD *)a2 + 20);
  if ( *((_QWORD *)this + 31) != v9 )
  {
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)a2 + 20));
    v14 = *((_QWORD *)this + 31);
    *((_QWORD *)this + 31) = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  if ( *((_QWORD *)a2 + 22) )
  {
    v14 = 0LL;
    v10 = Microsoft::WRL::Details::Make<SwitcherTabViewManagerWrapper,ITabViewManager * const &>(
            &v15,
            (struct ITabViewManager **)a2 + 22);
    Microsoft::WRL::ComPtr<ITabViewManager>::operator=<SwitcherTabViewManagerWrapper>(&v14, v10);
    v11 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v11);
    }
    v12 = v14;
    if ( !v14 )
    {
      inited = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD2,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)0x8007000ELL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      return (unsigned int)inited;
    }
    if ( *((_QWORD *)this + 33) != v14 )
    {
      v15 = v14;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
      v15 = *((_QWORD *)this + 33);
      *((_QWORD *)this + 33) = v12;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  return 0LL;
}
