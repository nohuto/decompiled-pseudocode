/*
 * XREFs of ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180109680
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180108968 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

void __fastcall CMonitorManager::HandleDefaultDeviceChanged(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work)
{
  CMonitorManager::DoHandleDefaultDeviceChanged(
    *((CMonitorManager **)Context + 2),
    *((enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *)Context + 2),
    *(char **)Context);
  DefaultChangedContext::`scalar deleting destructor'((DefaultChangedContext *)Context);
}
