/*
 * XREFs of ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001DCD8
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0157458 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02AB0D0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02AB668 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x1C02AC3D8 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall AUTO_REMOVE_LOCK::Release(PVOID *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*this + 2, *this, 0x20u);
    *((_BYTE *)this + 8) = 0;
  }
}
