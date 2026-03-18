/*
 * XREFs of ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C01C5134
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC924 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0249A20 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
        DISPLAY_SOURCE *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  __int64 v6; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 9006LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *((_BYTE *)this + 3696) = 1;
  *((_BYTE *)this + 3700) = 1;
  *(struct tagRECT *)((char *)this + 3704) = *a2;
  *(struct tagRECT *)((char *)this + 3720) = *a3;
}
