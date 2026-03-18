/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18015B610
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180093D30 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800943DC (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x1800B5F80 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800BA4C0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x1800BE180 (-AddRef@CHwDisplayRenderTarget@@UEAAKXZ.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800C2390 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?AddRef@CRenderTargetImageSource@@UEAAKXZ @ 0x1800C4BC0 (-AddRef@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18015B3FC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180160EF0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180161780 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801792F8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1802464E0 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802469B4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_18033AD04;
  if ( !(_BYTE)word_18033AD04 )
    return 0;
  v1 = HIBYTE(word_18033AD04);
  v2 = 1;
  if ( HIBYTE(word_18033AD04) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_18033AD04, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_18033AD04);
      v0 = word_18033AD04;
    }
    else
    {
      v0 = 1;
      word_18033AD04 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
