/*
 * XREFs of DxgkInvalidateVidPnDisplayModeListCache @ 0x1C01C7DB0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0044888 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00B78C0 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 */

void __fastcall DxgkInvalidateVidPnDisplayModeListCache(
        __int64 a1,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a3)
{
  PERESOURCE **v3; // rcx

  v3 = *(PERESOURCE ***)(a1 + 2520);
  if ( v3 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v3, a2, a3);
}
