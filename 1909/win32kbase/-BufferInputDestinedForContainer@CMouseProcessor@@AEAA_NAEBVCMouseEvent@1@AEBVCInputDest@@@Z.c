/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0033FE4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     IsMouseIVEnabled @ 0x1C0031AA4 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C015B944 (-IsContainer@CInputDest@@QEBA_NXZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C018E368 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C018F0B0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C0191104 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 */

bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  int v7; // ebx
  bool IsContainer; // si
  char v9; // al
  bool v10; // cl

  if ( !IsMouseIVEnabled() || !isRootPartition() )
    return 0;
  v7 = *((_DWORD *)a3 + 29);
  if ( IsMouseIVEnabled() )
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_InputVirtualizationDesktopSpecific__private_propertyCache,
      19155918LL,
      &unk_1C01D7150,
      0LL,
      3);
  IsContainer = CInputDest::IsContainer(a3);
  v9 = 1;
  v10 = *(_DWORD *)((char *)this + 4522) == v7;
  if ( *((_WORD *)this + 2244) )
    v9 = 0;
  else
    *(_DWORD *)((char *)this + 4522) = v7;
  if ( (!IsContainer || !v9 || !v10) && *((_BYTE *)this + 4520) )
  {
    CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput((CMouseProcessor *)((char *)this + 3592), a2);
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3592));
  }
  if ( IsContainer )
    CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk((CMouseProcessor *)((char *)this + 3592), a2, a3);
  return IsContainer;
}
