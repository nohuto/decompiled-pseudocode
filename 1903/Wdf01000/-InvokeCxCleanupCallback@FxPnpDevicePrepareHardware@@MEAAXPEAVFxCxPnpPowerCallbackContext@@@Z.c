/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDevicePrepareHardware@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1C0080270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPnpDevicePrepareHardware::InvokeCxCleanupCallback(
        FxPnpDevicePrepareHardware *this,
        FxCxPnpPowerCallbackContext *Context)
{
  Context->u.PrepareHardware.CleanupCallback(this->m_Device, this->m_ResourcesRaw, this->m_ResourcesTranslated);
}
