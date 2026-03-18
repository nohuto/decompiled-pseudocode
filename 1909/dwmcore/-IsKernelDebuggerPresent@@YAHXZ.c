/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x180159F30
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180070CA0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007134C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x1800B8450 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800BC1C0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x1800BFB30 (-AddRef@CHwDisplayRenderTarget@@UEAAKXZ.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800C1EE0 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?AddRef@CRenderTargetImageSource@@UEAAKXZ @ 0x1800C46A0 (-AddRef@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180159D1C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x18015F800 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180160090 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180177BF8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x180244DD0 (--1CHolographicInteropTexture@@MEAA@XZ.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802452A4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_180337E04;
  if ( !(_BYTE)word_180337E04 )
    return 0;
  v1 = HIBYTE(word_180337E04);
  v2 = 1;
  if ( HIBYTE(word_180337E04) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_180337E04, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_180337E04);
      v0 = word_180337E04;
    }
    else
    {
      v0 = 1;
      word_180337E04 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
