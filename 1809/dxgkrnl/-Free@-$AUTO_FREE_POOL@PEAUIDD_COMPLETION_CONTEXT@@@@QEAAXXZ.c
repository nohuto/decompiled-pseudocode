/*
 * XREFs of ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0044298
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C026ED40 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C026F258 (-DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C026F4F4 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C026FACC (DxgkHandleIndirectEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
