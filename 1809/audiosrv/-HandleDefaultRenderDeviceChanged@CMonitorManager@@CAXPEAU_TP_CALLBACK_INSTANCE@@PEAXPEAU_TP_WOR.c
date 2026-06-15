/*
 * XREFs of ?HandleDefaultRenderDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800FCE50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC230 (-DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 */

void __fastcall CMonitorManager::HandleDefaultRenderDeviceChanged(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitorManager **Context,
        PTP_WORK Work)
{
  CMonitorManager::DoHandleDefaultRenderDeviceChanged(Context[1], (const unsigned __int16 *)*Context);
  DefaultChangedContext::`scalar deleting destructor'((DefaultChangedContext *)Context);
}
