/*
 * XREFs of ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x180089300
 * Callers:
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x180003664 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x18000371C (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x180006358 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18002B2C8 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x180030A68 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x180052D58 (-AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x18007DE88 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x1800884E0 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z @ 0x1800AF344 (-SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800B57D4 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800C306C (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z @ 0x1800CE834 (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801C46F4 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAXPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x1801C47E0 (-SetColorTransform@CVisual@@QEAAXPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSF.c)
 *     ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801C488C (-SetDepthSortedList@CVisual@@QEAAXPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1801C4938 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1801C4C2C (-SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

char *__fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot(__int64 a1, char a2)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  unsigned int v6; // eax
  const void *v7; // r13
  _BYTE *v8; // rdx
  unsigned int v10; // ebp
  _DWORD *v11; // r14
  _DWORD *v12; // rax
  __int64 v13; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_DWORD **)a1;
  v3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 4LL);
  v7 = (const void *)(*(_QWORD *)a1 + 8LL);
  if ( v6 )
  {
    v8 = (_BYTE *)(*(_QWORD *)a1 + 8LL);
    do
    {
      if ( !*v8 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v8;
    }
    while ( (unsigned int)v3 < v6 );
  }
  if ( (_DWORD)v3 == v6 )
  {
    v10 = v6 + 4;
    v11 = *(_DWORD **)a1;
    v12 = DefaultHeap::AllocClear(v6 + 19 + 8 * (v6 + 4) - (((_BYTE)v6 + 19) & 7));
    v2 = v12;
    if ( !v12 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v13);
    *v12 = 0;
    v12[1] = v10;
    *(_QWORD *)a1 = v12;
    if ( v11 != (_DWORD *)&CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage )
    {
      *v12 = *v11;
      memcpy_0(v12 + 2, v7, (unsigned int)v11[1]);
      memcpy_0(
        (char *)v2 + (((unsigned int)v2[1] + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
        (char *)v11 + (((unsigned int)v11[1] + 15LL) & 0xFFFFFFFFFFFFFFF8uLL),
        8LL * (unsigned int)v11[1]);
      operator delete(v11);
    }
  }
  *v2 |= __ROR4__(1, a2);
  *((_BYTE *)v2 + v3 + 8) = a2;
  return (char *)v2 + (unsigned int)v2[1] + 8LL * (unsigned int)v3 - (((unsigned __int8)v2[1] + 15) & 7) + 15;
}
