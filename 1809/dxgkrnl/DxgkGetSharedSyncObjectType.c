/*
 * XREFs of DxgkGetSharedSyncObjectType @ 0x1C00D7D30
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C00067D4 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C0009004 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0054090 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedSyncObjectType()
{
  return g_pDxgkSharedSyncObjectType;
}
