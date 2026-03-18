/*
 * XREFs of ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DFE4
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0141900 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C026E7C0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C026ED40 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x1C026FACC (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 */

void __fastcall AUTO_PNPPOWER_LOCK::Release(AUTO_PNPPOWER_LOCK *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 10) )
  {
    v2 = *(_QWORD *)this;
    if ( *(_BYTE *)(v2 + 483) )
    {
      DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v2 + 3816), 4023LL);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 64LL) + 3992LL));
      v2 = *(_QWORD *)this;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 10) = 0;
  }
}
