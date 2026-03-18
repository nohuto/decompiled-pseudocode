/*
 * XREFs of DxgkCreateDeviceInternal @ 0x1C013BB38
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C00067D4 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00E84F0 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 */

__int64 __fastcall DxgkCreateDeviceInternal(struct _D3DKMT_CREATEDEVICE *a1)
{
  return DxgkCreateDeviceImpl(a1, 0LL, 0LL, 0);
}
