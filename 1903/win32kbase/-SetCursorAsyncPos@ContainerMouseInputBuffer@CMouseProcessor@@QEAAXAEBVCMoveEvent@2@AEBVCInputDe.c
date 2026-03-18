/*
 * XREFs of ?SetCursorAsyncPos@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMoveEvent@2@AEBVCInputDest@@@Z @ 0x1C01931FC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::SetCursorAsyncPos(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        const struct CInputDest *a3)
{
  __int64 v4; // rcx
  int v5; // edx

  v4 = *((_QWORD *)this + 113);
  if ( (*(_BYTE *)(v4 + 2) & 1) == 0 )
  {
    v5 = *(_DWORD *)(v4 + 16);
    *((_DWORD *)this + 229) = gptCursorAsync.x - *(_DWORD *)(v4 + 12);
    *((_DWORD *)this + 230) = gptCursorAsync.y - v5;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_InputVirtualizationDesktopSpecific__private_propertyCache,
      0x1244BCEu,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D8A90,
      0,
      3);
    *((_BYTE *)this + 924) = 1;
  }
}
