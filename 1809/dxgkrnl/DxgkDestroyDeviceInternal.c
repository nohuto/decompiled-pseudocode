/*
 * XREFs of DxgkDestroyDeviceInternal @ 0x1C013BBF0
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C00067D4 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0017A50 (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00EF694 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyDeviceInternal(const struct _D3DKMT_DESTROYDEVICE *a1)
{
  return DxgkDestroyDeviceImpl(a1, 0);
}
