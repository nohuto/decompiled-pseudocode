/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewFrame@@QEAAJW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@PEAUISwitchThumbnailDeviceManager@@PEAUIElementFactory@@PEAUISwitchItemController@@PEAUIVirtualDesktopElementFactory@@PEAUIFrameLevelAnimationCoordinator@@@Z @ 0x18037C250
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewFrame@@AEAW4MultitaskingViewControlFlags@@AEBUMultitaskingViewConfig@@AEAPEAUISwitchThumbnailDeviceManager@@AEAPEAUIElementFactory@@AEAPEAUISwitchItemController@@AEAPEAUIVirtualDesktopElementFactory@@AEAPEAUIFrameLevelAnimationCoordinator@@@Z @ 0x18037A050 (--$MakeAndInitialize@VCMultitaskingViewFrame@@V1@AEAW4MultitaskingViewControlFlags@@AEBUMultitas.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007EED8 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x180160EF8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ??$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAU3@@Z @ 0x180379FB0 (--$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@.c)
 */

__int64 __fastcall CMultitaskingViewFrame::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _OWORD *v8; // rax
  _OWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int128 v13; // xmm1
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int64 *v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 2416) = a2;
  v8 = (_OWORD *)(a1 + 48);
  v10 = a3;
  v11 = 9LL;
  v12 = 9LL;
  do
  {
    *v8 = *v10;
    v8[1] = v10[1];
    v8[2] = v10[2];
    v8[3] = v10[3];
    v8[4] = v10[4];
    v8[5] = v10[5];
    v8[6] = v10[6];
    v8 += 8;
    v13 = v10[7];
    v10 += 8;
    *(v8 - 1) = v13;
    --v12;
  }
  while ( v12 );
  *v8 = *v10;
  v8[1] = v10[1];
  v14 = (_OWORD *)(a1 + 1232);
  do
  {
    *v14 = *a3;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v14[3] = a3[3];
    v14[4] = a3[4];
    v14[5] = a3[5];
    v14[6] = a3[6];
    v14 += 8;
    v15 = a3[7];
    a3 += 8;
    *(v14 - 1) = v15;
    --v11;
  }
  while ( v11 );
  *v14 = *a3;
  v14[1] = a3[1];
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 2456), a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(a1 + 2472), a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)(a1 + 2488), a7);
  if ( a8 )
  {
    v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a8 + 88LL))(a8, &a8);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)(a1 + 2496), v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 2480));
  v17 = Microsoft::WRL::Details::MakeAndInitialize<CAsyncSwitchItemController,ISwitchItemController,ISwitchItemController * &>(
          (_QWORD *)(a1 + 2480),
          &a6);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v17);
  return v18;
}
