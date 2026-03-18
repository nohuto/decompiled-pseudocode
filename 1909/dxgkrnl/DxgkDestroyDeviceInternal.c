/*
 * XREFs of DxgkDestroyDeviceInternal @ 0x1C0133484
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0013200 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0013AA0 (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C012542C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyDeviceInternal(const struct _D3DKMT_DESTROYDEVICE *a1)
{
  return DxgkDestroyDeviceImpl(a1, 0);
}
