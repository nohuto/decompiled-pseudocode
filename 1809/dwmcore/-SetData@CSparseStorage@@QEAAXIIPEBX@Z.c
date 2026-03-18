/*
 * XREFs of ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800A2224
 * Callers:
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x180066984 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?SetTouchTargetBounds@CVisual@@IEAAXV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007634C (-SetTouchTargetBounds@CVisual@@IEAAXV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x180077868 (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x18007A9BC (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x18009ED64 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18009F868 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x18009FDC8 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?SetOpacityInternal@CVisual@@QEAAXM@Z @ 0x1800A27D0 (-SetOpacityInternal@CVisual@@QEAAXM@Z.c)
 *     ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x18016712C (-SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x1801A1F20 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801B828C (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801B8564 (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B85A8 (-SetNotifiedWorldOffset@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x1801B85F0 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B8638 (-SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801B8724 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801B876C (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x1800A22A4 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

void __fastcall CSparseStorage::SetData(CSparseStorage *this, unsigned int a2, unsigned int a3, const void *a4)
{
  struct CSparseStorage::DataInfo *SlotForData; // rdi

  SlotForData = CSparseStorage::FindSlotForData(this, a2, a3);
  memcpy_0((char *)SlotForData + 4, a4, a3);
  *(_DWORD *)SlotForData ^= (*(_DWORD *)SlotForData ^ (a2 << 24)) & 0x7F000000;
  *(_DWORD *)(*(_QWORD *)this + 4LL) |= __ROR4__(1, a2);
}
