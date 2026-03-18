/*
 * XREFs of ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0056394
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0040010 (DxgkDeviceIoctl.c)
 *     ?GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C005D490 (-GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C00605B8 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkCompositionObject::CreateHandle(
        DxgkCompositionObject *this,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE AccessMode,
        void **Handle)
{
  *Handle = (void *)-1LL;
  return ObOpenObjectByPointer(this, 0x40u, 0LL, a2, g_pDxgkCompositionObjectType, AccessMode, Handle);
}
