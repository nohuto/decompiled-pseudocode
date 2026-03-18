/*
 * XREFs of ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90
 * Callers:
 *     ?Partition_ToggleHolographicSuspension@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TOGGLEHOLOGRAPHICSUSPENSION@@@Z @ 0x18007854C (-Partition_ToggleHolographicSuspension@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTabl.c)
 *     ?AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x18020A438 (-AddExclusiveView@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x18020A548 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x18020A5F0 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x18020A71C (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x18020A86C (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x18020A9A0 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x18020B124 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x18020B47C (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x18020B650 (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x18020B690 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x18020B734 (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x18020B7D0 (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x18020B850 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x18020B930 (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x18020BA1C (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x18020BC10 (-SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z.c)
 *     ?SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z @ 0x18020BC54 (-SetExclusiveOpacity@CHolographicManager@@QEAAXM@Z.c)
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x18020BCA4 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x18020BD28 (-UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?WaitForVBlank@CHolographicManager@@QEAAJXZ @ 0x18020BDAC (-WaitForVBlank@CHolographicManager@@QEAAJXZ.c)
 *     ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x18020BFF4 (-ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHIC.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x18020CE14 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x18020CE88 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z @ 0x18020DA40 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@@Z.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180210F20 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212F58 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z @ 0x1802135A0 (-SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180211CA4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

char __fastcall CHolographicInteropTaskQueue::PostMessageW(
        CHolographicInteropTaskQueue *this,
        int a2,
        struct _SLIST_ENTRY *a3,
        void *a4,
        struct _SLIST_ENTRY *a5,
        void *a6,
        struct _SLIST_ENTRY *a7)
{
  char v11; // di
  PSLIST_ENTRY v12; // rbx
  struct _SLIST_ENTRY *v13; // rax
  void *v14; // rdx

  v11 = 0;
  v12 = InterlockedPopEntrySList((PSLIST_HEADER)this + 2);
  if ( !v12 )
  {
    v13 = (struct _SLIST_ENTRY *)operator new(0x40uLL);
    v12 = v13;
    if ( v13 )
      memset_0(v13, 0, 0x40uLL);
    else
      v12 = 0LL;
    if ( !v12 )
      return v11;
    memset_0(v12, 0, 0x40uLL);
  }
  *((_DWORD *)&v12->Next + 2) = a2;
  v12[1].Next = a3;
  if ( a3 )
    (*((void (__fastcall **)(struct _SLIST_ENTRY *))&a3->Next->Next + 1))(a3);
  v12[2].Next = a5;
  *((_QWORD *)&v12[2].Next + 1) = a6;
  v12[3].Next = a7;
  *((_QWORD *)&v12[1].Next + 1) = a4;
  InterlockedPushEntrySList((PSLIST_HEADER)this + 1, v12);
  wil::details::SetEvent(*((wil::details **)this + 6), v14);
  return 1;
}
